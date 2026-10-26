## evidence_id

ev_c7f705ff92d49ebdd69bbbf132040b2b834e1b8d3669bacdad6f947a8822e1f9

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

## analysis_profile.parameters.analyzer_preset

ghidra-default

## analysis_profile.parameters.annotation_policy

atomic-function-entry-metadata-v1

## analysis_profile.parameters.architecture

x86_64

## analysis_profile.parameters.available_architectures

x86_64

## analysis_profile.parameters.compiler_spec_id

auto-default

## analysis_profile.parameters.decompiler_jump_loads

true

## analysis_profile.parameters.executable_role

application

## analysis_profile.parameters.function_body_evidence

complete-inclusive-ranges-v1

## analysis_profile.parameters.function_boundary_observations

ghidra-terminal-call-limitations-v1

## analysis_profile.parameters.function_references

complete-body-and-entry-reference-manager-v2

## analysis_profile.parameters.import_mode

ephemeral-source-immutable

## analysis_profile.parameters.instruction_flow_evidence

decoded-return-pcode-v1

## analysis_profile.parameters.jump_table_evidence

typed-case-default-blocks-v1

## analysis_profile.parameters.language_id

auto-from-header

## analysis_profile.parameters.load_image_observations

source-mappings-entry-context-v2

## analysis_profile.parameters.loader

auto-from-header

## analysis_profile.parameters.location_resolution

explicit-address-exact-entry-symbol-first-v3

## analysis_profile.parameters.managed

false

## analysis_profile.parameters.native_aot_metadata

| Key                  | Value                       |
|----------------------|-----------------------------|
| contract_revision    | rtr-9.1-x64-pe-read-only-v3 |
| report_bytes         | 4194304                     |
| source_bytes         | 134217728                   |
| work_units           | 67108864                    |
| working_memory_bytes | 67108864                    |

## analysis_profile.parameters.no_return_repair

disabled-windows-p0

## analysis_profile.parameters.process_launch

official-headless-script-v1

## analysis_profile.parameters.string_inventory_evidence

defined-data-coverage-v1

## analysis_profile.parameters.target_format

pe

## analysis_profile.parameters.target_kind

executable

## analysis_profile.digest

249564812a8d83b9b3f461098fc485ccde60c516d4497547a124081c91d654bf

## predicate_type

rea.analysis

## operation

analyze_function

## parameters

| Key       | Value       |
|-----------|-------------|
| procedure | 0x1401f5580 |

## raw_result.limitations

Ghidra Listing reports a terminal call at 0x1401f577f with no resolved callee; its no-return basis is unknown.

## raw_result.value.assembly

0x1401f5580: MOV qword ptr [RSP + 0x18], RBX,0x1401f5585: PUSH RBP,0x1401f5586: PUSH RSI,0x1401f5587: PUSH RDI,0x1401f5588: LEA RBP, [RSP + -0x47],0x1401f558d: SUB RSP, 0xd0,0x1401f5594: MOV RAX, qword ptr [0x1404c7ac0],0x1401f559b: XOR RAX, RSP,0x1401f559e: MOV qword ptr [RBP + 0x37], RAX,0x1401f55a2: MOV RDI, RDX,0x1401f55a5: MOV RBX, RCX,0x1401f55a8: MOV qword ptr [RBP + -0x59], RCX,0x1401f55ac: XOR ESI, ESI,0x1401f55ae: LEA RCX, [RBP + 0x17],0x1401f55b2: CALL 0x1401f5440,0x1401f55b7: NOP,0x1401f55b8: CMP qword ptr [RBP + 0x27], RSI,0x1401f55bc: JNZ 0x1401f55dc,0x1401f55be: XORPS XMM0, XMM0,0x1401f55c1: MOVUPS xmmword ptr [RBX + 0x10], XMM0,0x1401f55c5: MOVUPS xmmword ptr [RBX], XMM0,0x1401f55c8: MOV qword ptr [RBX + 0x10], RSI,0x1401f55cc: MOV qword ptr [RBX + 0x18], 0x7,0x1401f55d4: MOV word ptr [RBX], SI,0x1401f55d7: JMP 0x1401f573f,0x1401f55dc: MOV RDX, RDI,0x1401f55df: LEA RCX, [RBP + -0x9],0x1401f55e3: CALL 0x14030bba0,0x1401f55e8: NOP,0x1401f55e9: CMP qword ptr [RAX + 0x18], 0xf,0x1401f55ee: JBE 0x1401f55f5,0x1401f55f0: MOV RCX, qword ptr [RAX],0x1401f55f3: JMP 0x1401f55f8,0x1401f55f5: MOV RCX, RAX,0x1401f55f8: MOV qword ptr [RBP + -0x59], RCX,0x1401f55fc: MOV RAX, qword ptr [RAX + 0x10],0x1401f5600: MOV qword ptr [RBP + -0x51], RAX,0x1401f5604: LEA RDX, [RBP + -0x59],0x1401f5608: LEA RCX, [RBP + -0x29],0x1401f560c: CALL 0x140028d00,0x1401f5611: NOP,0x1401f5612: XORPS XMM0, XMM0,0x1401f5615: MOVUPS xmmword ptr [RBP + -0x49], XMM0,0x1401f5619: MOV qword ptr [RBP + -0x39], RSI,0x1401f561d: MOV qword ptr [RBP + -0x31], RSI,0x1401f5621: MOVUPS XMM0, xmmword ptr [RAX],0x1401f5624: MOVUPS xmmword ptr [RBP + -0x49], XMM0,0x1401f5628: MOVUPS XMM1, xmmword ptr [RAX + 0x10],0x1401f562c: MOVUPS xmmword ptr [RBP + -0x39], XMM1,0x1401f5630: MOV qword ptr [RAX + 0x10], RSI,0x1401f5634: MOV qword ptr [RAX + 0x18], 0x7,0x1401f563c: MOV word ptr [RAX], SI,0x1401f563f: LEA R8, [RBP + -0x49],0x1401f5643: LEA RDX, [RBP + 0x17],0x1401f5647: MOV RCX, RBX,0x1401f564a: CALL 0x14002bae0,0x1401f564f: NOP,0x1401f5650: MOV R8, qword ptr [RBP + -0x31],0x1401f5654: CMP R8, 0x7,0x1401f5658: JBE 0x1401f5694,0x1401f565a: LEA RDX, [0x2 + R8*0x2],0x1401f5662: MOV RCX, qword ptr [RBP + -0x49],0x1401f5666: CMP RDX, 0x1000,0x1401f566d: JC 0x1401f568f,0x1401f566f: MOV RAX, qword ptr [RCX + -0x8],0x1401f5673: SUB RCX, RAX,0x1401f5676: SUB RCX, 0x8,0x1401f567a: CMP RCX, 0x1f,0x1401f567e: JA 0x1401f576a,0x1401f5684: LEA RDX, [0x29 + R8*0x2],0x1401f568c: MOV RCX, RAX,0x1401f568f: CALL 0x1403272f0,0x1401f5694: MOV qword ptr [RBP + -0x39], RSI,0x1401f5698: MOV qword ptr [RBP + -0x31], 0x7,0x1401f56a0: MOV word ptr [RBP + -0x49], SI,0x1401f56a4: MOV RAX, qword ptr [RBP + -0x11],0x1401f56a8: CMP RAX, 0x7,0x1401f56ac: JBE 0x1401f56e8,0x1401f56ae: LEA RDX, [0x2 + RAX*0x2],0x1401f56b6: MOV RCX, qword ptr [RBP + -0x29],0x1401f56ba: CMP RDX, 0x1000,0x1401f56c1: JC 0x1401f56e3,0x1401f56c3: MOV R8, qword ptr [RCX + -0x8],0x1401f56c7: SUB RCX, R8,0x1401f56ca: SUB RCX, 0x8,0x1401f56ce: CMP RCX, 0x1f,0x1401f56d2: JA 0x1401f5771,0x1401f56d8: LEA RDX, [0x29 + RAX*0x2],0x1401f56e0: MOV RCX, R8,0x1401f56e3: CALL 0x1403272f0,0x1401f56e8: MOV qword ptr [RBP + -0x19], RSI,0x1401f56ec: MOV qword ptr [RBP + -0x11], 0x7,0x1401f56f4: MOV word ptr [RBP + -0x29], SI,0x1401f56f8: MOV RDX, qword ptr [RBP + 0xf],0x1401f56fc: CMP RDX, 0xf,0x1401f5700: JBE 0x1401f572f,0x1401f5702: INC RDX,0x1401f5705: MOV RCX, qword ptr [RBP + -0x9],0x1401f5709: CMP RDX, 0x1000,0x1401f5710: JC 0x1401f572a,0x1401f5712: MOV RAX, qword ptr [RCX + -0x8],0x1401f5716: SUB RCX, RAX,0x1401f5719: SUB RCX, 0x8,0x1401f571d: CMP RCX, 0x1f,0x1401f5721: JA 0x1401f5778,0x1401f5723: ADD RDX, 0x27,0x1401f5727: MOV RCX, RAX,0x1401f572a: CALL 0x1403272f0,0x1401f572f: MOV qword ptr [RBP + 0x7], RSI,0x1401f5733: MOV qword ptr [RBP + 0xf], 0xf,0x1401f573b: MOV byte ptr [RBP + -0x9], 0x0,0x1401f573f: LEA RCX, [RBP + 0x17],0x1401f5743: CALL 0x1400055b0,0x1401f5748: MOV RAX, RBX,0x1401f574b: MOV RCX, qword ptr [RBP + 0x37],0x1401f574f: XOR RCX, RSP,0x1401f5752: CALL 0x140327740,0x1401f5757: MOV RBX, qword ptr [RSP + 0x100],0x1401f575f: ADD RSP, 0xd0,0x1401f5766: POP RDI,0x1401f5767: POP RSI,0x1401f5768: POP RBP,0x1401f5769: RET,0x1401f576a: MOV ECX, 0x5,0x1401f576f: INT 0x29,0x1401f5771: MOV ECX, 0x5,0x1401f5776: INT 0x29,0x1401f5778: MOV ECX, 0x5,0x1401f577d: INT 0x29,0x1401f577f: INT3

## raw_result.value.basic_blocks

| end         | start       | successors              |
|-------------|-------------|-------------------------|
| 0x1401f55be | 0x1401f5580 | 0x1401f55be,0x1401f55dc |
| 0x1401f55dc | 0x1401f55be | 0x1401f573f             |
| 0x1401f55f0 | 0x1401f55dc | 0x1401f55f0,0x1401f55f5 |
| 0x1401f55f5 | 0x1401f55f0 | 0x1401f55f8             |
| 0x1401f55f8 | 0x1401f55f5 | 0x1401f55f8             |
| 0x1401f565a | 0x1401f55f8 | 0x1401f565a,0x1401f5694 |
| 0x1401f566f | 0x1401f565a | 0x1401f566f,0x1401f568f |
| 0x1401f5684 | 0x1401f566f | 0x1401f5684,0x1401f576a |
| 0x1401f568f | 0x1401f5684 | 0x1401f568f             |
| 0x1401f5694 | 0x1401f568f | 0x1401f5694             |
| 0x1401f56ae | 0x1401f5694 | 0x1401f56ae,0x1401f56e8 |
| 0x1401f56c3 | 0x1401f56ae | 0x1401f56c3,0x1401f56e3 |
| 0x1401f56d8 | 0x1401f56c3 | 0x1401f56d8,0x1401f5771 |
| 0x1401f56e3 | 0x1401f56d8 | 0x1401f56e3             |
| 0x1401f56e8 | 0x1401f56e3 | 0x1401f56e8             |
| 0x1401f5702 | 0x1401f56e8 | 0x1401f5702,0x1401f572f |
| 0x1401f5712 | 0x1401f5702 | 0x1401f5712,0x1401f572a |
| 0x1401f5723 | 0x1401f5712 | 0x1401f5723,0x1401f5778 |
| 0x1401f572a | 0x1401f5723 | 0x1401f572a             |
| 0x1401f572f | 0x1401f572a | 0x1401f572f             |
| 0x1401f573f | 0x1401f572f | 0x1401f573f             |
| 0x1401f576a | 0x1401f573f |                         |
| 0x1401f5771 | 0x1401f576a | 0x1401f5771             |
| 0x1401f5778 | 0x1401f5771 | 0x1401f5778             |
| 0x1401f5780 | 0x1401f5778 |                         |

## raw_result.value.callees

| address     | body            | classification  | name                    |
|-------------|-----------------|-----------------|-------------------------|
| 0x1400055b0 | [object Object] | [object Object] | FUN_1400055b0           |
| 0x140028d00 | [object Object] | [object Object] | FUN_140028d00           |
| 0x14002bae0 | [object Object] | [object Object] | FUN_14002bae0           |
| 0x1401f5440 | [object Object] | [object Object] | FUN_1401f5440           |
| 0x14030bba0 | [object Object] | [object Object] | FUN_14030bba0           |
| 0x1403272f0 | [object Object] | [object Object] | thunk_FUN_140327e20     |
| 0x140327740 | [object Object] | [object Object] | __security_check_cookie |

## raw_result.value.callers

| address     | body            | classification  | name          |
|-------------|-----------------|-----------------|---------------|
| 0x1401f3e30 | [object Object] | [object Object] | FUN_1401f3e30 |
| 0x1401f3e90 | [object Object] | [object Object] | FUN_1401f3e90 |
| 0x1401f5c80 | [object Object] | [object Object] | FUN_1401f5c80 |
| 0x1401f6280 | [object Object] | [object Object] | FUN_1401f6280 |

## raw_result.value.comments



## raw_result.value.incoming_references

| kind            | source_address | source_procedure | target_address | target_procedure |
|-----------------|----------------|------------------|----------------|------------------|
| [object Object] | 0x1401f3e4d    | [object Object]  | 0x1401f5580    | [object Object]  |
| [object Object] | 0x1401f435b    | [object Object]  | 0x1401f5580    | [object Object]  |
| [object Object] | 0x1401f5d61    | [object Object]  | 0x1401f5580    | [object Object]  |
| [object Object] | 0x1401f6a53    | [object Object]  | 0x1401f5580    | [object Object]  |
| [object Object] | 0x1404dfa38    |                  | 0x1401f5580    | [object Object]  |

## raw_result.value.limitations

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x1401f577f with no resolved callee; its no-return basis is unknown.

## raw_result.value.native_api.available

true

## raw_result.value.native_api.calling_convention

__fastcall

## raw_result.value.native_api.decompiler_artifacts

recovered-signature,register-and-stack-variables,compiler-generated-control-flow,pointer-arithmetic,pseudocode

## raw_result.value.native_api.jump_tables



## raw_result.value.native_api.limitations

Types and calling conventions are Ghidra decompiler observations, not source declarations.,Register variables, compiler-generated blocks, and pointer arithmetic remain decompiler artifacts.,Pseudocode is neither original source nor guaranteed to compile.

## raw_result.value.native_api.parameters

| confidence | data_type    | decompiler_artifacts                                                      | evidence                        | name    | ordinal | role      | size_bytes | storage |
|------------|--------------|---------------------------------------------------------------------------|---------------------------------|---------|---------|-----------|------------|---------|
| low        | undefined8 * | recovered-signature,register-or-stack-storage,compiler-generated-variable | [object Object],[object Object] | param_1 | 0       | parameter | 8          | RCX:8   |
| low        | undefined8   | recovered-signature,register-or-stack-storage,compiler-generated-variable | [object Object],[object Object] | param_2 | 1       | parameter | 8          | RDX:8   |

## raw_result.value.native_api.provenance

ghidra-high-function

## raw_result.value.native_api.pseudocode

| Key            | Value                           |
|----------------|---------------------------------|
| classification | decompiler-generated-non-source |
| compilable     | false                           |

## raw_result.value.native_api.return_type.confidence

low

## raw_result.value.native_api.return_type.data_type

undefined8 *

## raw_result.value.native_api.return_type.decompiler_artifacts

recovered-signature,register-or-stack-storage

## raw_result.value.native_api.return_type.evidence

| detail                                         | kind             | source                  |
|------------------------------------------------|------------------|-------------------------|
| Function signature source is default.          | signature-source | ghidra-function-manager |
| HighFunction recovered data type undefined8 *. | decompiler-type  | ghidra-high-function    |

## raw_result.value.native_api.return_type.name

null

## raw_result.value.native_api.return_type.ordinal

null

## raw_result.value.native_api.return_type.role

return

## raw_result.value.native_api.return_type.size_bytes

8

## raw_result.value.native_api.return_type.storage

RAX:8

## raw_result.value.native_api.signature_source

default

## raw_result.value.native_value_flow.available

true

## raw_result.value.native_value_flow.def_use

| definition       | input_index | use              |
|------------------|-------------|------------------|
| 0x1401f559b#1591 | 1           | 0x1401f559b#26   |
| 0x1401f558d#1563 | 0           | 0x1401f559b#1591 |
| 0x1401f55ae#1564 | 1           | 0x1401f55b2#55   |
| 0x1401f55b2#1590 | 0           | 0x1401f55b2#1185 |
| 0x1401f559b#26   | 0           | 0x1401f55b2#1475 |
| 0x1401f55b2#1457 | 0           | 0x1401f55b8#63   |
| 0x1401f55b8#63   | 1           | 0x1401f55bc#69   |
| 0x1401f55c1#1565 | 1           | 0x1401f55c1#1106 |
| 0x1401f55c1#1566 | 1           | 0x1401f55c1#1107 |
| 0x1401f55b2#1119 | 0           | 0x1401f55c1#1139 |
| 0x1401f55c1#1139 | 0           | 0x1401f55c1#1140 |
| 0x1401f55c5#1567 | 1           | 0x1401f55c5#1112 |
| 0x1401f55c1#1140 | 0           | 0x1401f55c5#1141 |
| 0x1401f55c5#1141 | 0           | 0x1401f55c5#1142 |
| 0x1401f55c8#1568 | 1           | 0x1401f55c8#81   |
| 0x1401f55c5#1142 | 0           | 0x1401f55c8#1133 |
| 0x1401f55cc#1569 | 1           | 0x1401f55cc#84   |
| 0x1401f55c8#1133 | 0           | 0x1401f55cc#1134 |
| 0x1401f55d4#1592 | 1           | 0x1401f55d4#86   |
| 0x1401f55cc#1134 | 0           | 0x1401f55d4#1135 |
| 0x1401f55df#1570 | 1           | 0x1401f55e3#141  |
| 0x1401f55b2#1119 | 0           | 0x1401f55e3#1120 |
| 0x1401f55b2#1185 | 0           | 0x1401f55e3#1186 |
| 0x1401f55b2#1312 | 0           | 0x1401f55e3#1313 |
| 0x1401f55b2#1330 | 0           | 0x1401f55e3#1331 |
| 0x1401f55b2#1348 | 0           | 0x1401f55e3#1349 |
| 0x1401f55b2#1366 | 0           | 0x1401f55e3#1367 |
| 0x1401f55b2#1385 | 0           | 0x1401f55e3#1386 |
| 0x1401f55b2#1403 | 0           | 0x1401f55e3#1404 |
| 0x1401f55b2#1439 | 0           | 0x1401f55e3#1440 |
| 0x1401f55b2#1475 | 0           | 0x1401f55e3#1476 |
| 0x1401f55e3#141  | 0           | 0x1401f55e3#1593 |
| 0x1401f55e9#1571 | 1           | 0x1401f55e9#143  |
| 0x1401f55e3#1593 | 0           | 0x1401f55e9#1571 |
| 0x1401f55ee#1594 | 1           | 0x1401f55ee#154  |
| 0x1401f55ee#154  | 1           | 0x1401f55ee#155  |
| 0x1401f55e3#1593 | 0           | 0x1401f55ee#1589 |
| 0x1401f55e9#143  | 0           | 0x1401f55ee#1594 |
| 0x1401f55e3#1593 | 1           | 0x1401f55f0#156  |
| 0x1401f55f0#156  | 0           | 0x1401f55f0#1595 |
| 0x1401f55f0#1595 | 0           | 0x1401f55f3#1588 |
| 0x1401f55f3#1588 | 0           | 0x1401f55f8#706  |
| 0x1401f55ee#1589 | 1           | 0x1401f55f8#706  |
| 0x1401f55fc#1572 | 1           | 0x1401f55fc#163  |
| 0x1401f55e3#1593 | 0           | 0x1401f55fc#1572 |
| 0x1401f5608#1574 | 1           | 0x1401f560c#174  |
| 0x1401f5604#1573 | 2           | 0x1401f560c#174  |
| 0x1401f55e3#1120 | 0           | 0x1401f560c#1121 |
| 0x1401f55f8#706  | 0           | 0x1401f560c#1187 |
| 0x1401f55fc#163  | 0           | 0x1401f560c#1205 |
| 0x1401f55e3#1313 | 0           | 0x1401f560c#1314 |
| 0x1401f55e3#1331 | 0           | 0x1401f560c#1332 |
| 0x1401f55e3#1349 | 0           | 0x1401f560c#1350 |
| 0x1401f55e3#1367 | 0           | 0x1401f560c#1368 |
| 0x1401f55e3#1386 | 0           | 0x1401f560c#1387 |
| 0x1401f55e3#1404 | 0           | 0x1401f560c#1405 |
| 0x1401f55e3#1440 | 0           | 0x1401f560c#1441 |
| 0x1401f55e3#1476 | 0           | 0x1401f560c#1477 |
| 0x1401f560c#174  | 0           | 0x1401f560c#1596 |
| 0x1401f560c#1596 | 1           | 0x1401f5621#1559 |
| 0x1401f5621#1575 | 1           | 0x1401f5621#1560 |
| 0x1401f560c#1596 | 0           | 0x1401f5621#1575 |
| 0x1401f5628#1576 | 1           | 0x1401f5628#1561 |
| 0x1401f5628#1577 | 1           | 0x1401f5628#1562 |
| 0x1401f560c#1596 | 0           | 0x1401f5628#1576 |
| 0x1401f560c#1596 | 0           | 0x1401f5628#1577 |
| 0x1401f5630#1578 | 1           | 0x1401f5630#209  |
| 0x1401f560c#1121 | 0           | 0x1401f5630#1136 |
| 0x1401f560c#1596 | 0           | 0x1401f5630#1578 |
| 0x1401f5634#1579 | 1           | 0x1401f5634#212  |
| 0x1401f5630#1136 | 0           | 0x1401f5634#1137 |
| 0x1401f560c#1596 | 0           | 0x1401f5634#1579 |
| 0x1401f563c#1597 | 1           | 0x1401f563c#214  |
| 0x1401f5634#1137 | 0           | 0x1401f563c#1138 |
| 0x1401f560c#1596 | 0           | 0x1401f563c#1597 |
| 0x1401f5643#1581 | 2           | 0x1401f564a#222  |
| 0x1401f563f#1580 | 3           | 0x1401f564a#222  |
| 0x1401f563c#1138 | 0           | 0x1401f564a#1122 |
| 0x1401f560c#1187 | 0           | 0x1401f564a#1188 |
| 0x1401f560c#1205 | 0           | 0x1401f564a#1206 |
| 0x1401f5621#1559 | 0           | 0x1401f564a#1230 |
| 0x1401f5621#1560 | 0           | 0x1401f564a#1252 |
| 0x1401f5628#1561 | 0           | 0x1401f564a#1274 |
| 0x1401f5628#1562 | 0           | 0x1401f564a#1296 |
| 0x1401f560c#1314 | 0           | 0x1401f564a#1315 |
| 0x1401f560c#1332 | 0           | 0x1401f564a#1333 |
| 0x1401f560c#1350 | 0           | 0x1401f564a#1351 |
| 0x1401f560c#1368 | 0           | 0x1401f564a#1369 |
| 0x1401f560c#1387 | 0           | 0x1401f564a#1388 |
| 0x1401f560c#1405 | 0           | 0x1401f564a#1406 |
| 0x1401f560c#1441 | 0           | 0x1401f564a#1442 |
| 0x1401f560c#1477 | 0           | 0x1401f564a#1478 |
| 0x1401f564a#1296 | 0           | 0x1401f5658#236  |
| 0x1401f5658#236  | 1           | 0x1401f5658#237  |
| 0x1401f564a#1296 | 0           | 0x1401f565a#238  |
| 0x1401f565a#238  | 0           | 0x1401f565a#239  |
| 0x1401f565a#239  | 0           | 0x1401f5666#245  |
| 0x1401f5666#245  | 1           | 0x1401f566d#254  |
| 0x1401f564a#1230 | 0           | 0x1401f566d#1587 |
| 0x1401f564a#1230 | 0           | 0x1401f566f#255  |
| 0x1401f566f#1598 | 1           | 0x1401f566f#256  |
| 0x1401f566f#255  | 0           | 0x1401f566f#1598 |
| 0x1401f564a#1230 | 0           | 0x1401f5673#260  |
| 0x1401f566f#256  | 1           | 0x1401f5673#260  |
| 0x1401f5673#260  | 0           | 0x1401f5676#269  |
| 0x1401f5676#269  | 0           | 0x1401f567e#286  |
| 0x1401f567e#286  | 1           | 0x1401f567e#288  |
| 0x1401f564a#1296 | 0           | 0x1401f5684#289  |
| 0x1401f5684#289  | 0           | 0x1401f5684#290  |
| 0x1401f568f#704  | 1           | 0x1401f568f#295  |
| 0x1401f568f#726  | 2           | 0x1401f568f#295  |
| 0x1401f566d#1587 | 0           | 0x1401f568f#704  |
| 0x1401f566f#256  | 1           | 0x1401f568f#704  |
| 0x1401f565a#239  | 0           | 0x1401f568f#726  |
| 0x1401f5684#290  | 1           | 0x1401f568f#726  |
| 0x1401f564a#1122 | 0           | 0x1401f568f#1124 |
| 0x1401f564a#1188 | 0           | 0x1401f568f#1190 |
| 0x1401f564a#1206 | 0           | 0x1401f568f#1208 |
| 0x1401f564a#1230 | 0           | 0x1401f568f#1232 |
| 0x1401f564a#1252 | 0           | 0x1401f568f#1254 |
| 0x1401f564a#1274 | 0           | 0x1401f568f#1276 |
| 0x1401f564a#1296 | 0           | 0x1401f568f#1298 |
| 0x1401f564a#1315 | 0           | 0x1401f568f#1317 |
| 0x1401f564a#1333 | 0           | 0x1401f568f#1335 |
| 0x1401f564a#1351 | 0           | 0x1401f568f#1353 |
| 0x1401f564a#1369 | 0           | 0x1401f568f#1371 |
| 0x1401f564a#1388 | 0           | 0x1401f568f#1390 |
| 0x1401f564a#1406 | 0           | 0x1401f568f#1408 |
| 0x1401f564a#1442 | 0           | 0x1401f568f#1444 |
| 0x1401f564a#1478 | 0           | 0x1401f568f#1480 |
| 0x1401f564a#1122 | 0           | 0x1401f5694#1148 |
| 0x1401f568f#1124 | 1           | 0x1401f5694#1148 |
| 0x1401f564a#1188 | 0           | 0x1401f5694#1202 |
| 0x1401f568f#1190 | 1           | 0x1401f5694#1202 |
| 0x1401f564a#1206 | 0           | 0x1401f5694#1220 |
| 0x1401f568f#1208 | 1           | 0x1401f5694#1220 |
| 0x1401f564a#1230 | 0           | 0x1401f5694#1244 |
| 0x1401f568f#1232 | 1           | 0x1401f5694#1244 |
| 0x1401f564a#1252 | 0           | 0x1401f5694#1266 |
| 0x1401f568f#1254 | 1           | 0x1401f5694#1266 |
| 0x1401f564a#1315 | 0           | 0x1401f5694#1328 |
| 0x1401f568f#1317 | 1           | 0x1401f5694#1328 |
| 0x1401f564a#1333 | 0           | 0x1401f5694#1347 |
| 0x1401f568f#1335 | 1           | 0x1401f5694#1347 |
| 0x1401f564a#1351 | 0           | 0x1401f5694#1364 |
| 0x1401f568f#1353 | 1           | 0x1401f5694#1364 |
| 0x1401f564a#1369 | 0           | 0x1401f5694#1382 |
| 0x1401f568f#1371 | 1           | 0x1401f5694#1382 |
| 0x1401f564a#1388 | 0           | 0x1401f5694#1402 |
| 0x1401f568f#1390 | 1           | 0x1401f5694#1402 |
| 0x1401f564a#1406 | 0           | 0x1401f5694#1420 |
| 0x1401f568f#1408 | 1           | 0x1401f5694#1420 |
| 0x1401f564a#1442 | 0           | 0x1401f5694#1456 |
| 0x1401f568f#1444 | 1           | 0x1401f5694#1456 |
| 0x1401f564a#1478 | 0           | 0x1401f5694#1492 |
| 0x1401f568f#1480 | 1           | 0x1401f5694#1492 |
| 0x1401f5694#1244 | 0           | 0x1401f56a0#1222 |
| 0x1401f5694#1382 | 1           | 0x1401f56ac#318  |
| 0x1401f56ac#318  | 1           | 0x1401f56ac#319  |
| 0x1401f5694#1382 | 0           | 0x1401f56ae#320  |
| 0x1401f56ae#320  | 0           | 0x1401f56ae#321  |
| 0x1401f5694#1347 | 0           | 0x1401f56b6#1311 |
| 0x1401f5694#1328 | 1           | 0x1401f56b6#1311 |
| 0x1401f56ae#321  | 1           | 0x1401f56ba#327  |
| 0x1401f56ba#327  | 1           | 0x1401f56c1#336  |
| 0x1401f56b6#1311 | 0           | 0x1401f56c1#1586 |
| 0x1401f56b6#1311 | 0           | 0x1401f56c3#337  |
| 0x1401f56c3#1600 | 1           | 0x1401f56c3#338  |
| 0x1401f56c3#337  | 0           | 0x1401f56c3#1600 |
| 0x1401f56b6#1311 | 0           | 0x1401f56c7#342  |
| 0x1401f56c3#338  | 1           | 0x1401f56c7#342  |
| 0x1401f56c7#342  | 0           | 0x1401f56ca#351  |
| 0x1401f56ca#351  | 1           | 0x1401f56d2#368  |
| 0x1401f56d2#368  | 1           | 0x1401f56d2#370  |
| 0x1401f5694#1382 | 0           | 0x1401f56d8#371  |
| 0x1401f56d8#371  | 0           | 0x1401f56d8#372  |
| 0x1401f56e3#700  | 1           | 0x1401f56e3#377  |
| 0x1401f56e3#721  | 2           | 0x1401f56e3#377  |
| 0x1401f56c1#1586 | 0           | 0x1401f56e3#700  |
| 0x1401f56c3#338  | 1           | 0x1401f56e3#700  |
| 0x1401f56ae#321  | 0           | 0x1401f56e3#721  |
| 0x1401f56d8#372  | 1           | 0x1401f56e3#721  |
| 0x1401f5694#1148 | 0           | 0x1401f56e3#1126 |
| 0x1401f5694#1202 | 0           | 0x1401f56e3#1192 |
| 0x1401f5694#1220 | 0           | 0x1401f56e3#1210 |
| 0x1401f56a0#1222 | 0           | 0x1401f56e3#1234 |
| 0x1401f5694#1266 | 0           | 0x1401f56e3#1256 |
| 0x1401f5694#298  | 0           | 0x1401f56e3#1278 |
| 0x1401f5698#301  | 0           | 0x1401f56e3#1300 |
| 0x1401f5694#1402 | 0           | 0x1401f56e3#1392 |
| 0x1401f5694#1420 | 0           | 0x1401f56e3#1410 |
| 0x1401f5694#1456 | 0           | 0x1401f56e3#1446 |
| 0x1401f5694#1492 | 0           | 0x1401f56e3#1482 |
| 0x1401f5694#1148 | 0           | 0x1401f56e8#1145 |
| 0x1401f56e3#1126 | 1           | 0x1401f56e8#1145 |
| 0x1401f5694#1202 | 0           | 0x1401f56e8#1199 |
| 0x1401f56e3#1192 | 1           | 0x1401f56e8#1199 |
| 0x1401f5694#1220 | 0           | 0x1401f56e8#1217 |
| 0x1401f56e3#1210 | 1           | 0x1401f56e8#1217 |
| 0x1401f56a0#1222 | 0           | 0x1401f56e8#1241 |
| 0x1401f56e3#1234 | 1           | 0x1401f56e8#1241 |
| 0x1401f5694#1266 | 0           | 0x1401f56e8#1263 |
| 0x1401f56e3#1256 | 1           | 0x1401f56e8#1263 |
| 0x1401f5694#298  | 0           | 0x1401f56e8#1285 |
| 0x1401f56e3#1278 | 1           | 0x1401f56e8#1285 |
| 0x1401f5698#301  | 0           | 0x1401f56e8#1307 |
| 0x1401f56e3#1300 | 1           | 0x1401f56e8#1307 |
| 0x1401f5694#1402 | 0           | 0x1401f56e8#1398 |
| 0x1401f56e3#1392 | 1           | 0x1401f56e8#1398 |
| 0x1401f5694#1420 | 0           | 0x1401f56e8#1417 |
| 0x1401f56e3#1410 | 1           | 0x1401f56e8#1417 |
| 0x1401f5694#1456 | 0           | 0x1401f56e8#1452 |
| 0x1401f56e3#1446 | 1           | 0x1401f56e8#1452 |
| 0x1401f5694#1492 | 0           | 0x1401f56e8#1489 |
| 0x1401f56e3#1482 | 1           | 0x1401f56e8#1489 |
| 0x1401f56e8#1452 | 1           | 0x1401f5700#400  |
| 0x1401f5700#400  | 1           | 0x1401f5700#401  |
| 0x1401f56e8#1452 | 0           | 0x1401f5702#403  |
| 0x1401f56e8#1417 | 0           | 0x1401f5705#1384 |
| 0x1401f56e8#1398 | 1           | 0x1401f5705#1384 |
| 0x1401f5702#403  | 1           | 0x1401f5709#414  |
| 0x1401f5709#414  | 1           | 0x1401f5710#423  |
| 0x1401f5705#1384 | 0           | 0x1401f5710#1585 |
| 0x1401f5705#1384 | 0           | 0x1401f5712#424  |
| 0x1401f5712#1602 | 1           | 0x1401f5712#425  |
| 0x1401f5712#424  | 0           | 0x1401f5712#1602 |
| 0x1401f5705#1384 | 0           | 0x1401f5716#429  |
| 0x1401f5712#425  | 1           | 0x1401f5716#429  |
| 0x1401f5716#429  | 0           | 0x1401f5719#438  |
| 0x1401f5719#438  | 1           | 0x1401f5721#455  |
| 0x1401f5721#455  | 1           | 0x1401f5721#457  |
| 0x1401f56e8#1452 | 0           | 0x1401f5723#460  |
| 0x1401f572a#697  | 1           | 0x1401f572a#470  |
| 0x1401f572a#719  | 2           | 0x1401f572a#470  |
| 0x1401f5710#1585 | 0           | 0x1401f572a#697  |
| 0x1401f5712#425  | 1           | 0x1401f572a#697  |
| 0x1401f5702#403  | 0           | 0x1401f572a#719  |
| 0x1401f5723#460  | 1           | 0x1401f572a#719  |
| 0x1401f56e8#1145 | 0           | 0x1401f572a#1129 |
| 0x1401f56e8#1199 | 0           | 0x1401f572a#1195 |
| 0x1401f56e8#1217 | 0           | 0x1401f572a#1213 |
| 0x1401f56e8#1241 | 0           | 0x1401f572a#1237 |
| 0x1401f56e8#1263 | 0           | 0x1401f572a#1259 |
| 0x1401f56e8#1285 | 0           | 0x1401f572a#1281 |
| 0x1401f56e8#1307 | 0           | 0x1401f572a#1303 |
| 0x1401f56f4#386  | 0           | 0x1401f572a#1322 |
| 0x1401f56e8#380  | 0           | 0x1401f572a#1358 |
| 0x1401f56ec#383  | 0           | 0x1401f572a#1376 |
| 0x1401f56e8#1489 | 0           | 0x1401f572a#1485 |
| 0x1401f56e8#1145 | 0           | 0x1401f572f#1143 |
| 0x1401f572a#1129 | 1           | 0x1401f572f#1143 |
| 0x1401f56e8#1199 | 0           | 0x1401f572f#1197 |
| 0x1401f572a#1195 | 1           | 0x1401f572f#1197 |
| 0x1401f56e8#1217 | 0           | 0x1401f572f#1215 |
| 0x1401f572a#1213 | 1           | 0x1401f572f#1215 |
| 0x1401f56e8#1241 | 0           | 0x1401f572f#1239 |
| 0x1401f572a#1237 | 1           | 0x1401f572f#1239 |
| 0x1401f56e8#1263 | 0           | 0x1401f572f#1261 |
| 0x1401f572a#1259 | 1           | 0x1401f572f#1261 |
| 0x1401f56e8#1285 | 0           | 0x1401f572f#1283 |
| 0x1401f572a#1281 | 1           | 0x1401f572f#1283 |
| 0x1401f56e8#1307 | 0           | 0x1401f572f#1305 |
| 0x1401f572a#1303 | 1           | 0x1401f572f#1305 |
| 0x1401f56f4#386  | 0           | 0x1401f572f#1324 |
| 0x1401f572a#1322 | 1           | 0x1401f572f#1324 |
| 0x1401f56e8#380  | 0           | 0x1401f572f#1360 |
| 0x1401f572a#1358 | 1           | 0x1401f572f#1360 |
| 0x1401f56ec#383  | 0           | 0x1401f572f#1378 |
| 0x1401f572a#1376 | 1           | 0x1401f572f#1378 |
| 0x1401f56e8#1489 | 0           | 0x1401f572f#1487 |
| 0x1401f572a#1485 | 1           | 0x1401f572f#1487 |
| 0x1401f55d4#1135 | 0           | 0x1401f573f#1144 |
| 0x1401f572f#1143 | 1           | 0x1401f573f#1144 |
| 0x1401f55b2#1185 | 0           | 0x1401f573f#1198 |
| 0x1401f572f#1197 | 1           | 0x1401f573f#1198 |
| 0x1401f55b2#1203 | 0           | 0x1401f573f#1216 |
| 0x1401f572f#1215 | 1           | 0x1401f573f#1216 |
| 0x1401f55b2#1227 | 0           | 0x1401f573f#1240 |
| 0x1401f572f#1239 | 1           | 0x1401f573f#1240 |
| 0x1401f55b2#1249 | 0           | 0x1401f573f#1262 |
| 0x1401f572f#1261 | 1           | 0x1401f573f#1262 |
| 0x1401f55b2#1271 | 0           | 0x1401f573f#1284 |
| 0x1401f572f#1283 | 1           | 0x1401f573f#1284 |
| 0x1401f55b2#1293 | 0           | 0x1401f573f#1306 |
| 0x1401f572f#1305 | 1           | 0x1401f573f#1306 |
| 0x1401f55b2#1312 | 0           | 0x1401f573f#1325 |
| 0x1401f572f#1324 | 1           | 0x1401f573f#1325 |
| 0x1401f55b2#1348 | 0           | 0x1401f573f#1361 |
| 0x1401f572f#1360 | 1           | 0x1401f573f#1361 |
| 0x1401f55b2#1366 | 0           | 0x1401f573f#1379 |
| 0x1401f572f#1378 | 1           | 0x1401f573f#1379 |
| 0x1401f55b2#1385 | 0           | 0x1401f573f#1400 |
| 0x1401f573b#479  | 1           | 0x1401f573f#1400 |
| 0x1401f55b2#1421 | 0           | 0x1401f573f#1436 |
| 0x1401f572f#473  | 1           | 0x1401f573f#1436 |
| 0x1401f55b2#1439 | 0           | 0x1401f573f#1454 |
| 0x1401f5733#476  | 1           | 0x1401f573f#1454 |
| 0x1401f55b2#1475 | 0           | 0x1401f573f#1488 |
| 0x1401f572f#1487 | 1           | 0x1401f573f#1488 |
| 0x1401f573f#1582 | 1           | 0x1401f5743#92   |
| 0x1401f573f#1144 | 0           | 0x1401f5743#1130 |
| 0x1401f573f#1198 | 0           | 0x1401f5743#1196 |
| 0x1401f573f#1216 | 0           | 0x1401f5743#1214 |
| 0x1401f573f#1240 | 0           | 0x1401f5743#1238 |
| 0x1401f573f#1262 | 0           | 0x1401f5743#1260 |
| 0x1401f573f#1284 | 0           | 0x1401f5743#1282 |
| 0x1401f573f#1306 | 0           | 0x1401f5743#1304 |
| 0x1401f573f#1325 | 0           | 0x1401f5743#1323 |
| 0x1401f573f#1361 | 0           | 0x1401f5743#1359 |
| 0x1401f573f#1379 | 0           | 0x1401f5743#1377 |
| 0x1401f573f#1400 | 0           | 0x1401f5743#1396 |
| 0x1401f573f#1436 | 0           | 0x1401f5743#1432 |
| 0x1401f573f#1454 | 0           | 0x1401f5743#1450 |
| 0x1401f573f#1488 | 0           | 0x1401f5743#1486 |
| 0x1401f5748#93   | 1           | 0x1401f5769#135  |
| 0x1401f5743#1130 | 0           | 0x1401f5769#1131 |
| 0x1401f576f#1599 | 0           | 0x1401f576f#491  |
| 0x1401f564a#1122 | 0           | 0x1401f576f#1123 |
| 0x1401f564a#1188 | 0           | 0x1401f576f#1189 |
| 0x1401f564a#1206 | 0           | 0x1401f576f#1207 |
| 0x1401f564a#1230 | 0           | 0x1401f576f#1231 |
| 0x1401f564a#1252 | 0           | 0x1401f576f#1253 |
| 0x1401f564a#1274 | 0           | 0x1401f576f#1275 |
| 0x1401f564a#1296 | 0           | 0x1401f576f#1297 |
| 0x1401f564a#1315 | 0           | 0x1401f576f#1316 |
| 0x1401f564a#1351 | 0           | 0x1401f576f#1352 |
| 0x1401f564a#1369 | 0           | 0x1401f576f#1370 |
| 0x1401f564a#1478 | 0           | 0x1401f576f#1479 |
| 0x1401f576f#490  | 0           | 0x1401f576f#1599 |
| 0x1401f5694#1148 | 0           | 0x1401f5771#1146 |
| 0x1401f576f#1123 | 1           | 0x1401f5771#1146 |
| 0x1401f5694#1202 | 0           | 0x1401f5771#1200 |
| 0x1401f576f#1189 | 1           | 0x1401f5771#1200 |
| 0x1401f5694#1220 | 0           | 0x1401f5771#1218 |
| 0x1401f576f#1207 | 1           | 0x1401f5771#1218 |
| 0x1401f56a0#1222 | 0           | 0x1401f5771#1242 |
| 0x1401f576f#1231 | 1           | 0x1401f5771#1242 |
| 0x1401f5694#1266 | 0           | 0x1401f5771#1264 |
| 0x1401f576f#1253 | 1           | 0x1401f5771#1264 |
| 0x1401f5694#298  | 0           | 0x1401f5771#1286 |
| 0x1401f576f#1275 | 1           | 0x1401f5771#1286 |
| 0x1401f5698#301  | 0           | 0x1401f5771#1308 |
| 0x1401f576f#1297 | 1           | 0x1401f5771#1308 |
| 0x1401f5694#1328 | 0           | 0x1401f5771#1327 |
| 0x1401f576f#1316 | 1           | 0x1401f5771#1327 |
| 0x1401f5694#1364 | 0           | 0x1401f5771#1363 |
| 0x1401f576f#1352 | 1           | 0x1401f5771#1363 |
| 0x1401f5694#1382 | 0           | 0x1401f5771#1381 |
| 0x1401f576f#1370 | 1           | 0x1401f5771#1381 |
| 0x1401f5694#1492 | 0           | 0x1401f5771#1490 |
| 0x1401f576f#1479 | 1           | 0x1401f5771#1490 |
| 0x1401f5776#1601 | 0           | 0x1401f5776#488  |
| 0x1401f5771#1146 | 0           | 0x1401f5776#1125 |
| 0x1401f5771#1200 | 0           | 0x1401f5776#1191 |
| 0x1401f5771#1218 | 0           | 0x1401f5776#1209 |
| 0x1401f5771#1242 | 0           | 0x1401f5776#1233 |
| 0x1401f5771#1264 | 0           | 0x1401f5776#1255 |
| 0x1401f5771#1286 | 0           | 0x1401f5776#1277 |
| 0x1401f5771#1308 | 0           | 0x1401f5776#1299 |
| 0x1401f5771#1327 | 0           | 0x1401f5776#1318 |
| 0x1401f5771#1363 | 0           | 0x1401f5776#1354 |
| 0x1401f5771#1381 | 0           | 0x1401f5776#1372 |
| 0x1401f5771#1490 | 0           | 0x1401f5776#1481 |
| 0x1401f5776#487  | 0           | 0x1401f5776#1601 |
| 0x1401f56e8#1145 | 0           | 0x1401f5778#1147 |
| 0x1401f5776#1125 | 1           | 0x1401f5778#1147 |
| 0x1401f56e8#1199 | 0           | 0x1401f5778#1201 |
| 0x1401f5776#1191 | 1           | 0x1401f5778#1201 |
| 0x1401f56e8#1217 | 0           | 0x1401f5778#1219 |
| 0x1401f5776#1209 | 1           | 0x1401f5778#1219 |
| 0x1401f56e8#1241 | 0           | 0x1401f5778#1243 |
| 0x1401f5776#1233 | 1           | 0x1401f5778#1243 |
| 0x1401f56e8#1263 | 0           | 0x1401f5778#1265 |
| 0x1401f5776#1255 | 1           | 0x1401f5778#1265 |
| 0x1401f56e8#1285 | 0           | 0x1401f5778#1287 |
| 0x1401f5776#1277 | 1           | 0x1401f5778#1287 |
| 0x1401f56e8#1307 | 0           | 0x1401f5778#1309 |
| 0x1401f5776#1299 | 1           | 0x1401f5778#1309 |
| 0x1401f56f4#386  | 0           | 0x1401f5778#1329 |
| 0x1401f5776#1318 | 1           | 0x1401f5778#1329 |
| 0x1401f56e8#380  | 0           | 0x1401f5778#1365 |
| 0x1401f5776#1354 | 1           | 0x1401f5778#1365 |
| 0x1401f56ec#383  | 0           | 0x1401f5778#1383 |
| 0x1401f5776#1372 | 1           | 0x1401f5778#1383 |
| 0x1401f56e8#1489 | 0           | 0x1401f5778#1491 |
| 0x1401f5776#1481 | 1           | 0x1401f5778#1491 |
| 0x1401f577d#1603 | 0           | 0x1401f577d#482  |
| 0x1401f5778#1147 | 0           | 0x1401f577d#1127 |
| 0x1401f5778#1201 | 0           | 0x1401f577d#1193 |
| 0x1401f5778#1219 | 0           | 0x1401f577d#1211 |
| 0x1401f5778#1243 | 0           | 0x1401f577d#1235 |
| 0x1401f5778#1265 | 0           | 0x1401f577d#1257 |
| 0x1401f5778#1287 | 0           | 0x1401f577d#1279 |
| 0x1401f5778#1309 | 0           | 0x1401f577d#1301 |
| 0x1401f5778#1329 | 0           | 0x1401f577d#1320 |
| 0x1401f5778#1365 | 0           | 0x1401f577d#1356 |
| 0x1401f5778#1383 | 0           | 0x1401f577d#1374 |
| 0x1401f5778#1491 | 0           | 0x1401f577d#1483 |
| 0x1401f577d#481  | 0           | 0x1401f577d#1603 |
| 0x1401f577f#1604 | 0           | 0x1401f577f#484  |
| 0x1401f577f#1605 | 1           | 0x1401f577f#485  |
| 0x1401f577d#1127 | 0           | 0x1401f577f#1128 |
| 0x1401f577f#1128 | 0           | 0x1401f577f#1132 |
| 0x1401f577d#1193 | 0           | 0x1401f577f#1194 |
| 0x1401f577d#1211 | 0           | 0x1401f577f#1212 |
| 0x1401f577d#1235 | 0           | 0x1401f577f#1236 |
| 0x1401f577d#1257 | 0           | 0x1401f577f#1258 |
| 0x1401f577d#1279 | 0           | 0x1401f577f#1280 |
| 0x1401f577d#1301 | 0           | 0x1401f577f#1302 |
| 0x1401f577d#1320 | 0           | 0x1401f577f#1321 |
| 0x1401f577d#1356 | 0           | 0x1401f577f#1357 |
| 0x1401f577d#1374 | 0           | 0x1401f577f#1375 |
| 0x1401f577d#1483 | 0           | 0x1401f577f#1484 |
| 0x1401f577f#483  | 0           | 0x1401f577f#1604 |
| 0x1401f577f#484  | 0           | 0x1401f577f#1605 |

## raw_result.value.native_value_flow.effects

| kind               | operand_input | operation        | value_input |
|--------------------|---------------|------------------|-------------|
| direct_call        | 0             | 0x1401f55b2#55   |             |
| conditional_branch |               | 0x1401f55bc#69   | 1           |
| memory_write       | 1             | 0x1401f55c1#1106 | 2           |
| memory_write       | 1             | 0x1401f55c1#1107 | 2           |
| memory_write       | 1             | 0x1401f55c5#1111 | 2           |
| memory_write       | 1             | 0x1401f55c5#1112 | 2           |
| memory_write       | 1             | 0x1401f55c8#81   | 2           |
| memory_write       | 1             | 0x1401f55cc#84   | 2           |
| memory_write       | 1             | 0x1401f55d4#86   | 2           |
| direct_call        | 0             | 0x1401f55e3#141  |             |
| memory_read        | 1             | 0x1401f55e9#143  |             |
| conditional_branch |               | 0x1401f55ee#155  | 1           |
| memory_read        | 1             | 0x1401f55f0#156  |             |
| memory_read        | 1             | 0x1401f55fc#163  |             |
| direct_call        | 0             | 0x1401f560c#174  |             |
| memory_read        | 1             | 0x1401f5621#1559 |             |
| memory_read        | 1             | 0x1401f5621#1560 |             |
| memory_read        | 1             | 0x1401f5628#1561 |             |
| memory_read        | 1             | 0x1401f5628#1562 |             |
| memory_write       | 1             | 0x1401f5630#209  | 2           |
| memory_write       | 1             | 0x1401f5634#212  | 2           |
| memory_write       | 1             | 0x1401f563c#214  | 2           |
| direct_call        | 0             | 0x1401f564a#222  |             |
| conditional_branch |               | 0x1401f5658#237  | 1           |
| conditional_branch |               | 0x1401f566d#254  | 1           |
| memory_read        | 1             | 0x1401f566f#256  |             |
| conditional_branch |               | 0x1401f567e#288  | 1           |
| direct_call        | 0             | 0x1401f568f#295  |             |
| conditional_branch |               | 0x1401f56ac#319  | 1           |
| conditional_branch |               | 0x1401f56c1#336  | 1           |
| memory_read        | 1             | 0x1401f56c3#338  |             |
| conditional_branch |               | 0x1401f56d2#370  | 1           |
| direct_call        | 0             | 0x1401f56e3#377  |             |
| conditional_branch |               | 0x1401f5700#401  | 1           |
| conditional_branch |               | 0x1401f5710#423  | 1           |
| memory_read        | 1             | 0x1401f5712#425  |             |
| conditional_branch |               | 0x1401f5721#457  | 1           |
| direct_call        | 0             | 0x1401f572a#470  |             |
| direct_call        | 0             | 0x1401f5743#92   |             |
| indirect_call      | 0             | 0x1401f576f#491  |             |
| indirect_call      | 0             | 0x1401f5776#488  |             |
| indirect_call      | 0             | 0x1401f577d#482  |             |
| indirect_call      | 0             | 0x1401f577f#484  |             |

## raw_result.value.native_value_flow.known_omitted_edges

0

## raw_result.value.native_value_flow.known_omitted_inputs

0

## raw_result.value.native_value_flow.limitations

High p-code is decompiler-derived, not original source or runtime behavior. is_dead preserves the Java AST flag; decoded block members can retain that flag, so block_membership separately reports actual syntax-tree membership.,Def-use links do not cross function boundaries and may omit memory aliasing, call side effects, or unresolved indirect flow.,Memory read/write effects include stack and temporary memory operations; they do not identify persistent state or business meaning.,Operation, input, and def-use limits can truncate large functions; inspect truncation, omitted lower bounds, and known omitted counts before drawing conclusions.,Known omitted-edge counts cover links omitted from retained operations; omitted operations may contain additional uncounted links.

## raw_result.value.native_value_flow.omitted_operations_lower_bound

0

## raw_result.value.native_value_flow.operations

| address     | block_membership | id               | inputs                                                          | is_dead | opcode     | output          | sequence |
|-------------|------------------|------------------|-----------------------------------------------------------------|---------|------------|-----------------|----------|
| 0x1401f558d | member           | 0x1401f558d#1563 | [object Object],[object Object]                                 | true    | PTRSUB     | [object Object] | 1563     |
| 0x1401f559b | member           | 0x1401f559b#26   | [object Object],[object Object]                                 | true    | INT_XOR    | [object Object] | 26       |
| 0x1401f559b | member           | 0x1401f559b#1591 | [object Object]                                                 | true    | CAST       | [object Object] | 1591     |
| 0x1401f55ae | member           | 0x1401f55ae#1564 | [object Object],[object Object]                                 | true    | PTRSUB     | [object Object] | 1564     |
| 0x1401f55b2 | member           | 0x1401f55b2#55   | [object Object],[object Object]                                 | true    | CALL       |                 | 55       |
| 0x1401f55b2 | member           | 0x1401f55b2#1119 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1119     |
| 0x1401f55b2 | member           | 0x1401f55b2#1185 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1185     |
| 0x1401f55b2 | member           | 0x1401f55b2#1203 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1203     |
| 0x1401f55b2 | member           | 0x1401f55b2#1227 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1227     |
| 0x1401f55b2 | member           | 0x1401f55b2#1249 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1249     |
| 0x1401f55b2 | member           | 0x1401f55b2#1271 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1271     |
| 0x1401f55b2 | member           | 0x1401f55b2#1293 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1293     |
| 0x1401f55b2 | member           | 0x1401f55b2#1312 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1312     |
| 0x1401f55b2 | member           | 0x1401f55b2#1330 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1330     |
| 0x1401f55b2 | member           | 0x1401f55b2#1348 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1348     |
| 0x1401f55b2 | member           | 0x1401f55b2#1366 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1366     |
| 0x1401f55b2 | member           | 0x1401f55b2#1385 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1385     |
| 0x1401f55b2 | member           | 0x1401f55b2#1403 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1403     |
| 0x1401f55b2 | member           | 0x1401f55b2#1421 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1421     |
| 0x1401f55b2 | member           | 0x1401f55b2#1439 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1439     |
| 0x1401f55b2 | member           | 0x1401f55b2#1457 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1457     |
| 0x1401f55b2 | member           | 0x1401f55b2#1475 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1475     |
| 0x1401f55b2 | member           | 0x1401f55b2#1590 | [object Object]                                                 | true    | COPY       | [object Object] | 1590     |
| 0x1401f55b8 | member           | 0x1401f55b8#63   | [object Object],[object Object]                                 | true    | INT_EQUAL  | [object Object] | 63       |
| 0x1401f55bc | member           | 0x1401f55bc#69   | [object Object],[object Object]                                 | true    | CBRANCH    |                 | 69       |
| 0x1401f55c1 | member           | 0x1401f55c1#1106 | [object Object],[object Object],[object Object]                 | true    | STORE      |                 | 1106     |
| 0x1401f55c1 | member           | 0x1401f55c1#1107 | [object Object],[object Object],[object Object]                 | true    | STORE      |                 | 1107     |
| 0x1401f55c1 | member           | 0x1401f55c1#1139 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1139     |
| 0x1401f55c1 | member           | 0x1401f55c1#1140 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1140     |
| 0x1401f55c1 | member           | 0x1401f55c1#1565 | [object Object],[object Object],[object Object]                 | true    | PTRADD     | [object Object] | 1565     |
| 0x1401f55c1 | member           | 0x1401f55c1#1566 | [object Object],[object Object],[object Object]                 | true    | PTRADD     | [object Object] | 1566     |
| 0x1401f55c5 | member           | 0x1401f55c5#1111 | [object Object],[object Object],[object Object]                 | true    | STORE      |                 | 1111     |
| 0x1401f55c5 | member           | 0x1401f55c5#1112 | [object Object],[object Object],[object Object]                 | true    | STORE      |                 | 1112     |
| 0x1401f55c5 | member           | 0x1401f55c5#1141 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1141     |
| 0x1401f55c5 | member           | 0x1401f55c5#1142 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1142     |
| 0x1401f55c5 | member           | 0x1401f55c5#1567 | [object Object],[object Object],[object Object]                 | true    | PTRADD     | [object Object] | 1567     |
| 0x1401f55c8 | member           | 0x1401f55c8#81   | [object Object],[object Object],[object Object]                 | true    | STORE      |                 | 81       |
| 0x1401f55c8 | member           | 0x1401f55c8#1133 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1133     |
| 0x1401f55c8 | member           | 0x1401f55c8#1568 | [object Object],[object Object],[object Object]                 | true    | PTRADD     | [object Object] | 1568     |
| 0x1401f55cc | member           | 0x1401f55cc#84   | [object Object],[object Object],[object Object]                 | true    | STORE      |                 | 84       |
| 0x1401f55cc | member           | 0x1401f55cc#1134 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1134     |
| 0x1401f55cc | member           | 0x1401f55cc#1569 | [object Object],[object Object],[object Object]                 | true    | PTRADD     | [object Object] | 1569     |
| 0x1401f55d4 | member           | 0x1401f55d4#86   | [object Object],[object Object],[object Object]                 | true    | STORE      |                 | 86       |
| 0x1401f55d4 | member           | 0x1401f55d4#1135 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1135     |
| 0x1401f55d4 | member           | 0x1401f55d4#1592 | [object Object]                                                 | true    | CAST       | [object Object] | 1592     |
| 0x1401f55d7 | member           | 0x1401f55d7#87   | [object Object]                                                 | true    | BRANCH     |                 | 87       |
| 0x1401f55df | member           | 0x1401f55df#1570 | [object Object],[object Object]                                 | true    | PTRSUB     | [object Object] | 1570     |
| 0x1401f55e3 | member           | 0x1401f55e3#141  | [object Object],[object Object],[object Object]                 | true    | CALL       | [object Object] | 141      |
| 0x1401f55e3 | member           | 0x1401f55e3#1120 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1120     |
| 0x1401f55e3 | member           | 0x1401f55e3#1186 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1186     |
| 0x1401f55e3 | member           | 0x1401f55e3#1313 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1313     |
| 0x1401f55e3 | member           | 0x1401f55e3#1331 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1331     |
| 0x1401f55e3 | member           | 0x1401f55e3#1349 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1349     |
| 0x1401f55e3 | member           | 0x1401f55e3#1367 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1367     |
| 0x1401f55e3 | member           | 0x1401f55e3#1386 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1386     |
| 0x1401f55e3 | member           | 0x1401f55e3#1404 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1404     |
| 0x1401f55e3 | member           | 0x1401f55e3#1440 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1440     |
| 0x1401f55e3 | member           | 0x1401f55e3#1476 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1476     |
| 0x1401f55e3 | member           | 0x1401f55e3#1593 | [object Object]                                                 | true    | CAST       | [object Object] | 1593     |
| 0x1401f55e9 | member           | 0x1401f55e9#143  | [object Object],[object Object]                                 | true    | LOAD       | [object Object] | 143      |
| 0x1401f55e9 | member           | 0x1401f55e9#1571 | [object Object],[object Object],[object Object]                 | true    | PTRADD     | [object Object] | 1571     |
| 0x1401f55ee | member           | 0x1401f55ee#154  | [object Object],[object Object]                                 | true    | INT_LESS   | [object Object] | 154      |
| 0x1401f55ee | member           | 0x1401f55ee#155  | [object Object],[object Object]                                 | true    | CBRANCH    |                 | 155      |
| 0x1401f55ee | member           | 0x1401f55ee#1589 | [object Object]                                                 | true    | COPY       | [object Object] | 1589     |
| 0x1401f55ee | member           | 0x1401f55ee#1594 | [object Object]                                                 | true    | CAST       | [object Object] | 1594     |
| 0x1401f55f0 | member           | 0x1401f55f0#156  | [object Object],[object Object]                                 | true    | LOAD       | [object Object] | 156      |
| 0x1401f55f0 | member           | 0x1401f55f0#1595 | [object Object]                                                 | true    | CAST       | [object Object] | 1595     |
| 0x1401f55f3 | member           | 0x1401f55f3#158  | [object Object]                                                 | true    | BRANCH     |                 | 158      |
| 0x1401f55f3 | member           | 0x1401f55f3#1588 | [object Object]                                                 | true    | COPY       | [object Object] | 1588     |
| 0x1401f55f8 | member           | 0x1401f55f8#706  | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 706      |
| 0x1401f55fc | member           | 0x1401f55fc#163  | [object Object],[object Object]                                 | true    | LOAD       | [object Object] | 163      |
| 0x1401f55fc | member           | 0x1401f55fc#1572 | [object Object],[object Object],[object Object]                 | true    | PTRADD     | [object Object] | 1572     |
| 0x1401f5604 | member           | 0x1401f5604#1573 | [object Object],[object Object]                                 | true    | PTRSUB     | [object Object] | 1573     |
| 0x1401f5608 | member           | 0x1401f5608#1574 | [object Object],[object Object]                                 | true    | PTRSUB     | [object Object] | 1574     |
| 0x1401f560c | member           | 0x1401f560c#174  | [object Object],[object Object],[object Object]                 | true    | CALL       | [object Object] | 174      |
| 0x1401f560c | member           | 0x1401f560c#1121 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1121     |
| 0x1401f560c | member           | 0x1401f560c#1187 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1187     |
| 0x1401f560c | member           | 0x1401f560c#1205 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1205     |
| 0x1401f560c | member           | 0x1401f560c#1314 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1314     |
| 0x1401f560c | member           | 0x1401f560c#1332 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1332     |
| 0x1401f560c | member           | 0x1401f560c#1350 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1350     |
| 0x1401f560c | member           | 0x1401f560c#1368 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1368     |
| 0x1401f560c | member           | 0x1401f560c#1387 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1387     |
| 0x1401f560c | member           | 0x1401f560c#1405 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1405     |
| 0x1401f560c | member           | 0x1401f560c#1441 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1441     |
| 0x1401f560c | member           | 0x1401f560c#1477 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1477     |
| 0x1401f560c | member           | 0x1401f560c#1596 | [object Object]                                                 | true    | CAST       | [object Object] | 1596     |
| 0x1401f5621 | member           | 0x1401f5621#1559 | [object Object],[object Object]                                 | true    | LOAD       | [object Object] | 1559     |
| 0x1401f5621 | member           | 0x1401f5621#1560 | [object Object],[object Object]                                 | true    | LOAD       | [object Object] | 1560     |
| 0x1401f5621 | member           | 0x1401f5621#1575 | [object Object],[object Object],[object Object]                 | true    | PTRADD     | [object Object] | 1575     |
| 0x1401f5628 | member           | 0x1401f5628#1561 | [object Object],[object Object]                                 | true    | LOAD       | [object Object] | 1561     |
| 0x1401f5628 | member           | 0x1401f5628#1562 | [object Object],[object Object]                                 | true    | LOAD       | [object Object] | 1562     |
| 0x1401f5628 | member           | 0x1401f5628#1576 | [object Object],[object Object],[object Object]                 | true    | PTRADD     | [object Object] | 1576     |
| 0x1401f5628 | member           | 0x1401f5628#1577 | [object Object],[object Object],[object Object]                 | true    | PTRADD     | [object Object] | 1577     |
| 0x1401f5630 | member           | 0x1401f5630#209  | [object Object],[object Object],[object Object]                 | true    | STORE      |                 | 209      |
| 0x1401f5630 | member           | 0x1401f5630#1136 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1136     |
| 0x1401f5630 | member           | 0x1401f5630#1578 | [object Object],[object Object],[object Object]                 | true    | PTRADD     | [object Object] | 1578     |
| 0x1401f5634 | member           | 0x1401f5634#212  | [object Object],[object Object],[object Object]                 | true    | STORE      |                 | 212      |
| 0x1401f5634 | member           | 0x1401f5634#1137 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1137     |
| 0x1401f5634 | member           | 0x1401f5634#1579 | [object Object],[object Object],[object Object]                 | true    | PTRADD     | [object Object] | 1579     |
| 0x1401f563c | member           | 0x1401f563c#214  | [object Object],[object Object],[object Object]                 | true    | STORE      |                 | 214      |
| 0x1401f563c | member           | 0x1401f563c#1138 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1138     |
| 0x1401f563c | member           | 0x1401f563c#1597 | [object Object]                                                 | true    | CAST       | [object Object] | 1597     |
| 0x1401f563f | member           | 0x1401f563f#1580 | [object Object],[object Object]                                 | true    | PTRSUB     | [object Object] | 1580     |
| 0x1401f5643 | member           | 0x1401f5643#1581 | [object Object],[object Object]                                 | true    | PTRSUB     | [object Object] | 1581     |
| 0x1401f564a | member           | 0x1401f564a#222  | [object Object],[object Object],[object Object],[object Object] | true    | CALL       |                 | 222      |
| 0x1401f564a | member           | 0x1401f564a#1122 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1122     |
| 0x1401f564a | member           | 0x1401f564a#1188 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1188     |
| 0x1401f564a | member           | 0x1401f564a#1206 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1206     |
| 0x1401f564a | member           | 0x1401f564a#1230 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1230     |
| 0x1401f564a | member           | 0x1401f564a#1252 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1252     |
| 0x1401f564a | member           | 0x1401f564a#1274 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1274     |
| 0x1401f564a | member           | 0x1401f564a#1296 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1296     |
| 0x1401f564a | member           | 0x1401f564a#1315 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1315     |
| 0x1401f564a | member           | 0x1401f564a#1333 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1333     |
| 0x1401f564a | member           | 0x1401f564a#1351 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1351     |
| 0x1401f564a | member           | 0x1401f564a#1369 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1369     |
| 0x1401f564a | member           | 0x1401f564a#1388 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1388     |
| 0x1401f564a | member           | 0x1401f564a#1406 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1406     |
| 0x1401f564a | member           | 0x1401f564a#1442 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1442     |
| 0x1401f564a | member           | 0x1401f564a#1478 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1478     |
| 0x1401f5658 | member           | 0x1401f5658#236  | [object Object],[object Object]                                 | true    | INT_LESS   | [object Object] | 236      |
| 0x1401f5658 | member           | 0x1401f5658#237  | [object Object],[object Object]                                 | true    | CBRANCH    |                 | 237      |
| 0x1401f565a | member           | 0x1401f565a#238  | [object Object],[object Object]                                 | true    | INT_MULT   | [object Object] | 238      |
| 0x1401f565a | member           | 0x1401f565a#239  | [object Object],[object Object]                                 | true    | INT_ADD    | [object Object] | 239      |
| 0x1401f5666 | member           | 0x1401f5666#245  | [object Object],[object Object]                                 | true    | INT_LESS   | [object Object] | 245      |
| 0x1401f566d | member           | 0x1401f566d#254  | [object Object],[object Object]                                 | true    | CBRANCH    |                 | 254      |
| 0x1401f566d | member           | 0x1401f566d#1587 | [object Object]                                                 | true    | COPY       | [object Object] | 1587     |
| 0x1401f566f | member           | 0x1401f566f#255  | [object Object],[object Object]                                 | true    | INT_SUB    | [object Object] | 255      |
| 0x1401f566f | member           | 0x1401f566f#256  | [object Object],[object Object]                                 | true    | LOAD       | [object Object] | 256      |
| 0x1401f566f | member           | 0x1401f566f#1598 | [object Object]                                                 | true    | CAST       | [object Object] | 1598     |
| 0x1401f5673 | member           | 0x1401f5673#260  | [object Object],[object Object]                                 | true    | INT_SUB    | [object Object] | 260      |
| 0x1401f5676 | member           | 0x1401f5676#269  | [object Object],[object Object]                                 | true    | INT_SUB    | [object Object] | 269      |
| 0x1401f567e | member           | 0x1401f567e#286  | [object Object],[object Object]                                 | true    | INT_LESS   | [object Object] | 286      |
| 0x1401f567e | member           | 0x1401f567e#288  | [object Object],[object Object]                                 | true    | CBRANCH    |                 | 288      |
| 0x1401f5684 | member           | 0x1401f5684#289  | [object Object],[object Object]                                 | true    | INT_MULT   | [object Object] | 289      |
| 0x1401f5684 | member           | 0x1401f5684#290  | [object Object],[object Object]                                 | true    | INT_ADD    | [object Object] | 290      |
| 0x1401f568f | member           | 0x1401f568f#295  | [object Object],[object Object],[object Object]                 | true    | CALL       |                 | 295      |
| 0x1401f568f | member           | 0x1401f568f#704  | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 704      |
| 0x1401f568f | member           | 0x1401f568f#726  | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 726      |
| 0x1401f568f | member           | 0x1401f568f#1124 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1124     |
| 0x1401f568f | member           | 0x1401f568f#1190 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1190     |
| 0x1401f568f | member           | 0x1401f568f#1208 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1208     |
| 0x1401f568f | member           | 0x1401f568f#1232 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1232     |
| 0x1401f568f | member           | 0x1401f568f#1254 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1254     |
| 0x1401f568f | member           | 0x1401f568f#1276 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1276     |
| 0x1401f568f | member           | 0x1401f568f#1298 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1298     |
| 0x1401f568f | member           | 0x1401f568f#1317 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1317     |
| 0x1401f568f | member           | 0x1401f568f#1335 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1335     |
| 0x1401f568f | member           | 0x1401f568f#1353 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1353     |
| 0x1401f568f | member           | 0x1401f568f#1371 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1371     |
| 0x1401f568f | member           | 0x1401f568f#1390 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1390     |
| 0x1401f568f | member           | 0x1401f568f#1408 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1408     |
| 0x1401f568f | member           | 0x1401f568f#1444 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1444     |
| 0x1401f568f | member           | 0x1401f568f#1480 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1480     |
| 0x1401f5694 | member           | 0x1401f5694#298  | [object Object]                                                 | true    | COPY       | [object Object] | 298      |
| 0x1401f5694 | member           | 0x1401f5694#1148 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1148     |
| 0x1401f5694 | member           | 0x1401f5694#1202 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1202     |
| 0x1401f5694 | member           | 0x1401f5694#1220 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1220     |
| 0x1401f5694 | member           | 0x1401f5694#1244 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1244     |
| 0x1401f5694 | member           | 0x1401f5694#1266 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1266     |
| 0x1401f5694 | member           | 0x1401f5694#1328 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1328     |
| 0x1401f5694 | member           | 0x1401f5694#1347 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1347     |
| 0x1401f5694 | member           | 0x1401f5694#1364 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1364     |
| 0x1401f5694 | member           | 0x1401f5694#1382 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1382     |
| 0x1401f5694 | member           | 0x1401f5694#1402 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1402     |
| 0x1401f5694 | member           | 0x1401f5694#1420 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1420     |
| 0x1401f5694 | member           | 0x1401f5694#1456 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1456     |
| 0x1401f5694 | member           | 0x1401f5694#1492 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1492     |
| 0x1401f5698 | member           | 0x1401f5698#301  | [object Object]                                                 | true    | COPY       | [object Object] | 301      |
| 0x1401f56a0 | member           | 0x1401f56a0#1222 | [object Object],[object Object]                                 | true    | INT_AND    | [object Object] | 1222     |
| 0x1401f56ac | member           | 0x1401f56ac#318  | [object Object],[object Object]                                 | true    | INT_LESS   | [object Object] | 318      |
| 0x1401f56ac | member           | 0x1401f56ac#319  | [object Object],[object Object]                                 | true    | CBRANCH    |                 | 319      |
| 0x1401f56ae | member           | 0x1401f56ae#320  | [object Object],[object Object]                                 | true    | INT_MULT   | [object Object] | 320      |
| 0x1401f56ae | member           | 0x1401f56ae#321  | [object Object],[object Object]                                 | true    | INT_ADD    | [object Object] | 321      |
| 0x1401f56b6 | member           | 0x1401f56b6#1311 | [object Object],[object Object]                                 | true    | PIECE      | [object Object] | 1311     |
| 0x1401f56ba | member           | 0x1401f56ba#327  | [object Object],[object Object]                                 | true    | INT_LESS   | [object Object] | 327      |
| 0x1401f56c1 | member           | 0x1401f56c1#336  | [object Object],[object Object]                                 | true    | CBRANCH    |                 | 336      |
| 0x1401f56c1 | member           | 0x1401f56c1#1586 | [object Object]                                                 | true    | COPY       | [object Object] | 1586     |
| 0x1401f56c3 | member           | 0x1401f56c3#337  | [object Object],[object Object]                                 | true    | INT_ADD    | [object Object] | 337      |
| 0x1401f56c3 | member           | 0x1401f56c3#338  | [object Object],[object Object]                                 | true    | LOAD       | [object Object] | 338      |
| 0x1401f56c3 | member           | 0x1401f56c3#1600 | [object Object]                                                 | true    | CAST       | [object Object] | 1600     |
| 0x1401f56c7 | member           | 0x1401f56c7#342  | [object Object],[object Object]                                 | true    | INT_SUB    | [object Object] | 342      |
| 0x1401f56ca | member           | 0x1401f56ca#351  | [object Object],[object Object]                                 | true    | INT_SUB    | [object Object] | 351      |
| 0x1401f56d2 | member           | 0x1401f56d2#368  | [object Object],[object Object]                                 | true    | INT_LESS   | [object Object] | 368      |
| 0x1401f56d2 | member           | 0x1401f56d2#370  | [object Object],[object Object]                                 | true    | CBRANCH    |                 | 370      |
| 0x1401f56d8 | member           | 0x1401f56d8#371  | [object Object],[object Object]                                 | true    | INT_MULT   | [object Object] | 371      |
| 0x1401f56d8 | member           | 0x1401f56d8#372  | [object Object],[object Object]                                 | true    | INT_ADD    | [object Object] | 372      |
| 0x1401f56e3 | member           | 0x1401f56e3#377  | [object Object],[object Object],[object Object]                 | true    | CALL       |                 | 377      |
| 0x1401f56e3 | member           | 0x1401f56e3#700  | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 700      |
| 0x1401f56e3 | member           | 0x1401f56e3#721  | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 721      |
| 0x1401f56e3 | member           | 0x1401f56e3#1126 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1126     |
| 0x1401f56e3 | member           | 0x1401f56e3#1192 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1192     |
| 0x1401f56e3 | member           | 0x1401f56e3#1210 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1210     |
| 0x1401f56e3 | member           | 0x1401f56e3#1234 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1234     |
| 0x1401f56e3 | member           | 0x1401f56e3#1256 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1256     |
| 0x1401f56e3 | member           | 0x1401f56e3#1278 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1278     |
| 0x1401f56e3 | member           | 0x1401f56e3#1300 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1300     |
| 0x1401f56e3 | member           | 0x1401f56e3#1392 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1392     |
| 0x1401f56e3 | member           | 0x1401f56e3#1410 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1410     |
| 0x1401f56e3 | member           | 0x1401f56e3#1446 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1446     |
| 0x1401f56e3 | member           | 0x1401f56e3#1482 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1482     |
| 0x1401f56e8 | member           | 0x1401f56e8#380  | [object Object]                                                 | true    | COPY       | [object Object] | 380      |
| 0x1401f56e8 | member           | 0x1401f56e8#1145 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1145     |
| 0x1401f56e8 | member           | 0x1401f56e8#1199 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1199     |
| 0x1401f56e8 | member           | 0x1401f56e8#1217 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1217     |
| 0x1401f56e8 | member           | 0x1401f56e8#1241 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1241     |
| 0x1401f56e8 | member           | 0x1401f56e8#1263 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1263     |
| 0x1401f56e8 | member           | 0x1401f56e8#1285 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1285     |
| 0x1401f56e8 | member           | 0x1401f56e8#1307 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1307     |
| 0x1401f56e8 | member           | 0x1401f56e8#1398 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1398     |
| 0x1401f56e8 | member           | 0x1401f56e8#1417 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1417     |
| 0x1401f56e8 | member           | 0x1401f56e8#1452 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1452     |
| 0x1401f56e8 | member           | 0x1401f56e8#1489 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1489     |
| 0x1401f56ec | member           | 0x1401f56ec#383  | [object Object]                                                 | true    | COPY       | [object Object] | 383      |
| 0x1401f56f4 | member           | 0x1401f56f4#386  | [object Object]                                                 | true    | COPY       | [object Object] | 386      |
| 0x1401f5700 | member           | 0x1401f5700#400  | [object Object],[object Object]                                 | true    | INT_LESS   | [object Object] | 400      |
| 0x1401f5700 | member           | 0x1401f5700#401  | [object Object],[object Object]                                 | true    | CBRANCH    |                 | 401      |
| 0x1401f5702 | member           | 0x1401f5702#403  | [object Object],[object Object]                                 | true    | INT_ADD    | [object Object] | 403      |
| 0x1401f5705 | member           | 0x1401f5705#1384 | [object Object],[object Object]                                 | true    | PIECE      | [object Object] | 1384     |
| 0x1401f5709 | member           | 0x1401f5709#414  | [object Object],[object Object]                                 | true    | INT_LESS   | [object Object] | 414      |
| 0x1401f5710 | member           | 0x1401f5710#423  | [object Object],[object Object]                                 | true    | CBRANCH    |                 | 423      |
| 0x1401f5710 | member           | 0x1401f5710#1585 | [object Object]                                                 | true    | COPY       | [object Object] | 1585     |
| 0x1401f5712 | member           | 0x1401f5712#424  | [object Object],[object Object]                                 | true    | INT_ADD    | [object Object] | 424      |
| 0x1401f5712 | member           | 0x1401f5712#425  | [object Object],[object Object]                                 | true    | LOAD       | [object Object] | 425      |
| 0x1401f5712 | member           | 0x1401f5712#1602 | [object Object]                                                 | true    | CAST       | [object Object] | 1602     |
| 0x1401f5716 | member           | 0x1401f5716#429  | [object Object],[object Object]                                 | true    | INT_SUB    | [object Object] | 429      |
| 0x1401f5719 | member           | 0x1401f5719#438  | [object Object],[object Object]                                 | true    | INT_SUB    | [object Object] | 438      |
| 0x1401f5721 | member           | 0x1401f5721#455  | [object Object],[object Object]                                 | true    | INT_LESS   | [object Object] | 455      |
| 0x1401f5721 | member           | 0x1401f5721#457  | [object Object],[object Object]                                 | true    | CBRANCH    |                 | 457      |
| 0x1401f5723 | member           | 0x1401f5723#460  | [object Object],[object Object]                                 | true    | INT_ADD    | [object Object] | 460      |
| 0x1401f572a | member           | 0x1401f572a#470  | [object Object],[object Object],[object Object]                 | true    | CALL       |                 | 470      |
| 0x1401f572a | member           | 0x1401f572a#697  | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 697      |
| 0x1401f572a | member           | 0x1401f572a#719  | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 719      |
| 0x1401f572a | member           | 0x1401f572a#1129 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1129     |
| 0x1401f572a | member           | 0x1401f572a#1195 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1195     |
| 0x1401f572a | member           | 0x1401f572a#1213 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1213     |
| 0x1401f572a | member           | 0x1401f572a#1237 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1237     |
| 0x1401f572a | member           | 0x1401f572a#1259 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1259     |
| 0x1401f572a | member           | 0x1401f572a#1281 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1281     |
| 0x1401f572a | member           | 0x1401f572a#1303 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1303     |
| 0x1401f572a | member           | 0x1401f572a#1322 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1322     |
| 0x1401f572a | member           | 0x1401f572a#1358 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1358     |
| 0x1401f572a | member           | 0x1401f572a#1376 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1376     |
| 0x1401f572a | member           | 0x1401f572a#1485 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1485     |
| 0x1401f572f | member           | 0x1401f572f#473  | [object Object]                                                 | true    | COPY       | [object Object] | 473      |
| 0x1401f572f | member           | 0x1401f572f#1143 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1143     |
| 0x1401f572f | member           | 0x1401f572f#1197 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1197     |
| 0x1401f572f | member           | 0x1401f572f#1215 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1215     |
| 0x1401f572f | member           | 0x1401f572f#1239 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1239     |
| 0x1401f572f | member           | 0x1401f572f#1261 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1261     |
| 0x1401f572f | member           | 0x1401f572f#1283 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1283     |
| 0x1401f572f | member           | 0x1401f572f#1305 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1305     |
| 0x1401f572f | member           | 0x1401f572f#1324 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1324     |
| 0x1401f572f | member           | 0x1401f572f#1360 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1360     |
| 0x1401f572f | member           | 0x1401f572f#1378 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1378     |
| 0x1401f572f | member           | 0x1401f572f#1487 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1487     |
| 0x1401f5733 | member           | 0x1401f5733#476  | [object Object]                                                 | true    | COPY       | [object Object] | 476      |
| 0x1401f573b | member           | 0x1401f573b#479  | [object Object]                                                 | true    | COPY       | [object Object] | 479      |
| 0x1401f573f | member           | 0x1401f573f#1144 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1144     |
| 0x1401f573f | member           | 0x1401f573f#1198 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1198     |
| 0x1401f573f | member           | 0x1401f573f#1216 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1216     |
| 0x1401f573f | member           | 0x1401f573f#1240 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1240     |
| 0x1401f573f | member           | 0x1401f573f#1262 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1262     |
| 0x1401f573f | member           | 0x1401f573f#1284 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1284     |
| 0x1401f573f | member           | 0x1401f573f#1306 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1306     |
| 0x1401f573f | member           | 0x1401f573f#1325 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1325     |
| 0x1401f573f | member           | 0x1401f573f#1361 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1361     |
| 0x1401f573f | member           | 0x1401f573f#1379 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1379     |
| 0x1401f573f | member           | 0x1401f573f#1400 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1400     |
| 0x1401f573f | member           | 0x1401f573f#1436 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1436     |
| 0x1401f573f | member           | 0x1401f573f#1454 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1454     |
| 0x1401f573f | member           | 0x1401f573f#1488 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1488     |
| 0x1401f573f | member           | 0x1401f573f#1582 | [object Object],[object Object]                                 | true    | PTRSUB     | [object Object] | 1582     |
| 0x1401f5743 | member           | 0x1401f5743#92   | [object Object],[object Object]                                 | true    | CALL       |                 | 92       |
| 0x1401f5743 | member           | 0x1401f5743#1130 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1130     |
| 0x1401f5743 | member           | 0x1401f5743#1196 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1196     |
| 0x1401f5743 | member           | 0x1401f5743#1214 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1214     |
| 0x1401f5743 | member           | 0x1401f5743#1238 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1238     |
| 0x1401f5743 | member           | 0x1401f5743#1260 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1260     |
| 0x1401f5743 | member           | 0x1401f5743#1282 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1282     |
| 0x1401f5743 | member           | 0x1401f5743#1304 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1304     |
| 0x1401f5743 | member           | 0x1401f5743#1323 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1323     |
| 0x1401f5743 | member           | 0x1401f5743#1359 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1359     |
| 0x1401f5743 | member           | 0x1401f5743#1377 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1377     |
| 0x1401f5743 | member           | 0x1401f5743#1396 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1396     |
| 0x1401f5743 | member           | 0x1401f5743#1432 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1432     |
| 0x1401f5743 | member           | 0x1401f5743#1450 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1450     |
| 0x1401f5743 | member           | 0x1401f5743#1486 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1486     |
| 0x1401f5748 | member           | 0x1401f5748#93   | [object Object]                                                 | true    | COPY       | [object Object] | 93       |
| 0x1401f5769 | member           | 0x1401f5769#135  | [object Object],[object Object]                                 | true    | RETURN     |                 | 135      |
| 0x1401f5769 | member           | 0x1401f5769#1131 | [object Object]                                                 | true    | COPY       | [object Object] | 1131     |
| 0x1401f576f | member           | 0x1401f576f#490  | [object Object],[object Object]                                 | true    | CALLOTHER  | [object Object] | 490      |
| 0x1401f576f | member           | 0x1401f576f#491  | [object Object],[object Object]                                 | true    | CALLIND    |                 | 491      |
| 0x1401f576f | member           | 0x1401f576f#1123 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1123     |
| 0x1401f576f | member           | 0x1401f576f#1189 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1189     |
| 0x1401f576f | member           | 0x1401f576f#1207 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1207     |
| 0x1401f576f | member           | 0x1401f576f#1231 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1231     |
| 0x1401f576f | member           | 0x1401f576f#1253 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1253     |
| 0x1401f576f | member           | 0x1401f576f#1275 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1275     |
| 0x1401f576f | member           | 0x1401f576f#1297 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1297     |
| 0x1401f576f | member           | 0x1401f576f#1316 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1316     |
| 0x1401f576f | member           | 0x1401f576f#1352 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1352     |
| 0x1401f576f | member           | 0x1401f576f#1370 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1370     |
| 0x1401f576f | member           | 0x1401f576f#1479 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1479     |
| 0x1401f576f | member           | 0x1401f576f#1599 | [object Object]                                                 | true    | CAST       | [object Object] | 1599     |
| 0x1401f5771 | member           | 0x1401f5771#1146 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1146     |
| 0x1401f5771 | member           | 0x1401f5771#1200 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1200     |
| 0x1401f5771 | member           | 0x1401f5771#1218 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1218     |
| 0x1401f5771 | member           | 0x1401f5771#1242 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1242     |
| 0x1401f5771 | member           | 0x1401f5771#1264 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1264     |
| 0x1401f5771 | member           | 0x1401f5771#1286 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1286     |
| 0x1401f5771 | member           | 0x1401f5771#1308 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1308     |
| 0x1401f5771 | member           | 0x1401f5771#1327 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1327     |
| 0x1401f5771 | member           | 0x1401f5771#1363 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1363     |
| 0x1401f5771 | member           | 0x1401f5771#1381 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1381     |
| 0x1401f5771 | member           | 0x1401f5771#1490 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1490     |
| 0x1401f5776 | member           | 0x1401f5776#487  | [object Object],[object Object]                                 | true    | CALLOTHER  | [object Object] | 487      |
| 0x1401f5776 | member           | 0x1401f5776#488  | [object Object],[object Object]                                 | true    | CALLIND    |                 | 488      |
| 0x1401f5776 | member           | 0x1401f5776#1125 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1125     |
| 0x1401f5776 | member           | 0x1401f5776#1191 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1191     |
| 0x1401f5776 | member           | 0x1401f5776#1209 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1209     |
| 0x1401f5776 | member           | 0x1401f5776#1233 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1233     |
| 0x1401f5776 | member           | 0x1401f5776#1255 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1255     |
| 0x1401f5776 | member           | 0x1401f5776#1277 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1277     |
| 0x1401f5776 | member           | 0x1401f5776#1299 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1299     |
| 0x1401f5776 | member           | 0x1401f5776#1318 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1318     |
| 0x1401f5776 | member           | 0x1401f5776#1354 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1354     |
| 0x1401f5776 | member           | 0x1401f5776#1372 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1372     |
| 0x1401f5776 | member           | 0x1401f5776#1481 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1481     |
| 0x1401f5776 | member           | 0x1401f5776#1601 | [object Object]                                                 | true    | CAST       | [object Object] | 1601     |
| 0x1401f5778 | member           | 0x1401f5778#1147 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1147     |
| 0x1401f5778 | member           | 0x1401f5778#1201 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1201     |
| 0x1401f5778 | member           | 0x1401f5778#1219 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1219     |
| 0x1401f5778 | member           | 0x1401f5778#1243 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1243     |
| 0x1401f5778 | member           | 0x1401f5778#1265 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1265     |
| 0x1401f5778 | member           | 0x1401f5778#1287 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1287     |
| 0x1401f5778 | member           | 0x1401f5778#1309 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1309     |
| 0x1401f5778 | member           | 0x1401f5778#1329 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1329     |
| 0x1401f5778 | member           | 0x1401f5778#1365 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1365     |
| 0x1401f5778 | member           | 0x1401f5778#1383 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1383     |
| 0x1401f5778 | member           | 0x1401f5778#1491 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1491     |
| 0x1401f577d | member           | 0x1401f577d#481  | [object Object],[object Object]                                 | true    | CALLOTHER  | [object Object] | 481      |
| 0x1401f577d | member           | 0x1401f577d#482  | [object Object],[object Object]                                 | true    | CALLIND    |                 | 482      |
| 0x1401f577d | member           | 0x1401f577d#1127 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1127     |
| 0x1401f577d | member           | 0x1401f577d#1193 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1193     |
| 0x1401f577d | member           | 0x1401f577d#1211 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1211     |
| 0x1401f577d | member           | 0x1401f577d#1235 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1235     |
| 0x1401f577d | member           | 0x1401f577d#1257 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1257     |
| 0x1401f577d | member           | 0x1401f577d#1279 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1279     |
| 0x1401f577d | member           | 0x1401f577d#1301 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1301     |
| 0x1401f577d | member           | 0x1401f577d#1320 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1320     |
| 0x1401f577d | member           | 0x1401f577d#1356 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1356     |
| 0x1401f577d | member           | 0x1401f577d#1374 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1374     |
| 0x1401f577d | member           | 0x1401f577d#1483 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1483     |
| 0x1401f577d | member           | 0x1401f577d#1603 | [object Object]                                                 | true    | CAST       | [object Object] | 1603     |
| 0x1401f577f | member           | 0x1401f577f#483  | [object Object],[object Object]                                 | true    | CALLOTHER  | [object Object] | 483      |
| 0x1401f577f | member           | 0x1401f577f#484  | [object Object]                                                 | true    | CALLIND    | [object Object] | 484      |
| 0x1401f577f | member           | 0x1401f577f#485  | [object Object],[object Object]                                 | true    | RETURN     |                 | 485      |
| 0x1401f577f | member           | 0x1401f577f#1128 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1128     |
| 0x1401f577f | member           | 0x1401f577f#1132 | [object Object]                                                 | true    | COPY       | [object Object] | 1132     |
| 0x1401f577f | member           | 0x1401f577f#1194 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1194     |
| 0x1401f577f | member           | 0x1401f577f#1212 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1212     |
| 0x1401f577f | member           | 0x1401f577f#1236 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1236     |
| 0x1401f577f | member           | 0x1401f577f#1258 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1258     |
| 0x1401f577f | member           | 0x1401f577f#1280 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1280     |
| 0x1401f577f | member           | 0x1401f577f#1302 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1302     |
| 0x1401f577f | member           | 0x1401f577f#1321 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1321     |
| 0x1401f577f | member           | 0x1401f577f#1357 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1357     |
| 0x1401f577f | member           | 0x1401f577f#1375 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1375     |
| 0x1401f577f | member           | 0x1401f577f#1484 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1484     |
| 0x1401f577f | member           | 0x1401f577f#1604 | [object Object]                                                 | true    | CAST       | [object Object] | 1604     |
| 0x1401f577f | member           | 0x1401f577f#1605 | [object Object]                                                 | true    | CAST       | [object Object] | 1605     |

## raw_result.value.native_value_flow.parameter_uses

| input_index | ordinal | use              |
|-------------|---------|------------------|
| 0           | 0       | 0x1401f55b2#1590 |
| 0           | 0       | 0x1401f55c1#1565 |
| 0           | 0       | 0x1401f55c1#1566 |
| 1           | 0       | 0x1401f55c5#1111 |
| 0           | 0       | 0x1401f55c5#1567 |
| 0           | 0       | 0x1401f55c8#1568 |
| 0           | 0       | 0x1401f55cc#1569 |
| 0           | 0       | 0x1401f55d4#1592 |
| 2           | 1       | 0x1401f55e3#141  |
| 1           | 0       | 0x1401f564a#222  |
| 0           | 0       | 0x1401f5748#93   |

## raw_result.value.native_value_flow.parameters

| data_type     | name    | ordinal |
|---------------|---------|---------|
| /undefined8 * | param_1 | 0       |
| /undefined8   | param_2 | 1       |

## raw_result.value.native_value_flow.provenance

ghidra-high-pcode

## raw_result.value.native_value_flow.truncated

false

## raw_result.value.outgoing_references

| kind            | source_address | source_procedure | target_address           | target_procedure |
|-----------------|----------------|------------------|--------------------------|------------------|
| [object Object] | 0x1401f5580    | [object Object]  | stack:0x18               |                  |
| [object Object] | 0x1401f5588    | [object Object]  | stack:0xffffffffffffffa1 |                  |
| [object Object] | 0x1401f5594    | [object Object]  | 0x1404c7ac0              |                  |
| [object Object] | 0x1401f559e    | [object Object]  | stack:0xffffffffffffffd8 |                  |
| [object Object] | 0x1401f55a8    | [object Object]  | stack:0xffffffffffffff48 |                  |
| [object Object] | 0x1401f55ae    | [object Object]  | stack:0xffffffffffffffb8 |                  |
| [object Object] | 0x1401f55b2    | [object Object]  | 0x1401f5440              | [object Object]  |
| [object Object] | 0x1401f55b8    | [object Object]  | stack:0xffffffffffffffc8 |                  |
| [object Object] | 0x1401f55bc    | [object Object]  | 0x1401f55dc              | [object Object]  |
| [object Object] | 0x1401f55d7    | [object Object]  | 0x1401f573f              | [object Object]  |
| [object Object] | 0x1401f55df    | [object Object]  | stack:0xffffffffffffff98 |                  |
| [object Object] | 0x1401f55e3    | [object Object]  | 0x14030bba0              | [object Object]  |
| [object Object] | 0x1401f55ee    | [object Object]  | 0x1401f55f5              | [object Object]  |
| [object Object] | 0x1401f55f3    | [object Object]  | 0x1401f55f8              | [object Object]  |
| [object Object] | 0x1401f55f8    | [object Object]  | stack:0xffffffffffffff48 |                  |
| [object Object] | 0x1401f5600    | [object Object]  | stack:0xffffffffffffff50 |                  |
| [object Object] | 0x1401f5604    | [object Object]  | stack:0xffffffffffffff48 |                  |
| [object Object] | 0x1401f5608    | [object Object]  | stack:0xffffffffffffff78 |                  |
| [object Object] | 0x1401f560c    | [object Object]  | 0x140028d00              | [object Object]  |
| [object Object] | 0x1401f5615    | [object Object]  | stack:0xffffffffffffff58 |                  |
| [object Object] | 0x1401f5619    | [object Object]  | stack:0xffffffffffffff68 |                  |
| [object Object] | 0x1401f561d    | [object Object]  | stack:0xffffffffffffff70 |                  |
| [object Object] | 0x1401f5624    | [object Object]  | stack:0xffffffffffffff58 |                  |
| [object Object] | 0x1401f562c    | [object Object]  | stack:0xffffffffffffff68 |                  |
| [object Object] | 0x1401f563f    | [object Object]  | stack:0xffffffffffffff58 |                  |
| [object Object] | 0x1401f5643    | [object Object]  | stack:0xffffffffffffffb8 |                  |
| [object Object] | 0x1401f564a    | [object Object]  | 0x14002bae0              | [object Object]  |
| [object Object] | 0x1401f5650    | [object Object]  | stack:0xffffffffffffff70 |                  |
| [object Object] | 0x1401f5658    | [object Object]  | 0x1401f5694              | [object Object]  |
| [object Object] | 0x1401f5662    | [object Object]  | stack:0xffffffffffffff58 |                  |
| [object Object] | 0x1401f566d    | [object Object]  | 0x1401f568f              | [object Object]  |
| [object Object] | 0x1401f567e    | [object Object]  | 0x1401f576a              | [object Object]  |
| [object Object] | 0x1401f568f    | [object Object]  | 0x1403272f0              | [object Object]  |
| [object Object] | 0x1401f5694    | [object Object]  | stack:0xffffffffffffff68 |                  |
| [object Object] | 0x1401f5698    | [object Object]  | stack:0xffffffffffffff70 |                  |
| [object Object] | 0x1401f56a0    | [object Object]  | stack:0xffffffffffffff58 |                  |
| [object Object] | 0x1401f56a4    | [object Object]  | stack:0xffffffffffffff90 |                  |
| [object Object] | 0x1401f56ac    | [object Object]  | 0x1401f56e8              | [object Object]  |
| [object Object] | 0x1401f56b6    | [object Object]  | stack:0xffffffffffffff78 |                  |
| [object Object] | 0x1401f56c1    | [object Object]  | 0x1401f56e3              | [object Object]  |
| [object Object] | 0x1401f56d2    | [object Object]  | 0x1401f5771              | [object Object]  |
| [object Object] | 0x1401f56e3    | [object Object]  | 0x1403272f0              | [object Object]  |
| [object Object] | 0x1401f56e8    | [object Object]  | stack:0xffffffffffffff88 |                  |
| [object Object] | 0x1401f56ec    | [object Object]  | stack:0xffffffffffffff90 |                  |
| [object Object] | 0x1401f56f4    | [object Object]  | stack:0xffffffffffffff78 |                  |
| [object Object] | 0x1401f56f8    | [object Object]  | stack:0xffffffffffffffb0 |                  |
| [object Object] | 0x1401f5700    | [object Object]  | 0x1401f572f              | [object Object]  |
| [object Object] | 0x1401f5705    | [object Object]  | stack:0xffffffffffffff98 |                  |
| [object Object] | 0x1401f5710    | [object Object]  | 0x1401f572a              | [object Object]  |
| [object Object] | 0x1401f5721    | [object Object]  | 0x1401f5778              | [object Object]  |
| [object Object] | 0x1401f572a    | [object Object]  | 0x1403272f0              | [object Object]  |
| [object Object] | 0x1401f572f    | [object Object]  | stack:0xffffffffffffffa8 |                  |
| [object Object] | 0x1401f5733    | [object Object]  | stack:0xffffffffffffffb0 |                  |
| [object Object] | 0x1401f573b    | [object Object]  | stack:0xffffffffffffff98 |                  |
| [object Object] | 0x1401f573f    | [object Object]  | stack:0xffffffffffffffb8 |                  |
| [object Object] | 0x1401f5743    | [object Object]  | 0x1400055b0              | [object Object]  |
| [object Object] | 0x1401f574b    | [object Object]  | stack:0xffffffffffffffd8 |                  |
| [object Object] | 0x1401f5752    | [object Object]  | 0x140327740              | [object Object]  |
| [object Object] | 0x1401f5757    | [object Object]  | stack:0x10               |                  |

## raw_result.value.procedure.address

0x1401f5580

## raw_result.value.procedure.body.available

true

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.body.non_contiguous

false

## raw_result.value.procedure.body.provenance

ghidra-function-body-address-set

## raw_result.value.procedure.body.ranges

| end         | start       |
|-------------|-------------|
| 0x1401f577f | 0x1401f5580 |

## raw_result.value.procedure.body.span_bytes

512

## raw_result.value.procedure.body.total_bytes

512

## raw_result.value.procedure.classification

| Key          | Value                   |
|--------------|-------------------------|
| external     | false                   |
| provenance   | ghidra-function-manager |
| thunk        | false                   |
| thunk_target | null                    |

## raw_result.value.procedure.locals

| description                               | provenance               |
|-------------------------------------------|--------------------------|
| undefined8 local_28 @ Stack[-0x28]:8      | ghidra-function-database |
| undefined8 local_38 @ Stack[-0x38]:8      | ghidra-function-database |
| undefined local_48 @ Stack[-0x48]:1       | ghidra-function-database |
| undefined8 local_50 @ Stack[-0x50]:8      | ghidra-function-database |
| undefined8 local_58 @ Stack[-0x58]:8      | ghidra-function-database |
| undefined local_5f @ Stack[-0x5f]:1       | ghidra-function-database |
| undefined8 local_68 @ Stack[-0x68]:8      | ghidra-function-database |
| undefined8 local_70 @ Stack[-0x70]:8      | ghidra-function-database |
| undefined8 local_78 @ Stack[-0x78]:8      | ghidra-function-database |
| undefined8 local_88 @ Stack[-0x88]:8      | ghidra-function-database |
| undefined1[16] local_98 @ Stack[-0x98]:16 | ghidra-function-database |
| undefined1[16] local_a8 @ Stack[-0xa8]:16 | ghidra-function-database |
| undefined8 local_b0 @ Stack[-0xb0]:8      | ghidra-function-database |
| undefined8 local_b8 @ Stack[-0xb8]:8      | ghidra-function-database |
| undefined8 local_res10 @ Stack[0x10]:8    | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8    | ghidra-function-database |

## raw_result.value.procedure.name

FUN_1401f5580

## raw_result.value.procedure.signature

undefined FUN_1401f5580()

## raw_result.value.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1401f5580(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_e8 [48];
  undefined8 *local_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  undefined2 local_88;
  undefined6 uStack_86;
  undefined8 local_78;
  ulonglong local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  undefined8 local_58;
  ulonglong local_50;
  undefined1 local_48 [16];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_1404c7ac0 ^ (ulonglong)auStack_e8;
  local_b8 = param_1;
  FUN_1401f5440(local_48);
  if (local_38 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 7;
    *(undefined2 *)param_1 = 0;
    goto LAB_1401f573f;
  }
  puVar3 = (undefined8 *)FUN_14030bba0(&local_68,param_2);
  local_b8 = puVar3;
  if (0xf < (ulonglong)puVar3[3]) {
    local_b8 = (undefined8 *)*puVar3;
  }
  local_b0 = puVar3[2];
  puVar4 = (ulonglong *)FUN_140028d00(&local_88,&local_b8);
  local_a8 = *puVar4;
  uStack_a0 = puVar4[1];
  local_98 = puVar4[2];
  uStack_90 = puVar4[3];
  puVar4[2] = 0;
  puVar4[3] = 7;
  *(undefined2 *)puVar4 = 0;
  FUN_14002bae0(param_1,local_48,&local_a8);
  if (uStack_90 < 8) {
LAB_1401f5694:
    local_98 = 0;
    uStack_90 = 7;
    local_a8 = local_a8 & 0xffffffffffff0000;
    if (7 < local_70) {
      uVar7 = local_70 * 2 + 2;
      lVar2 = CONCAT62(uStack_86,local_88);
      lVar6 = lVar2;
      if (0xfff < uVar7) {
        lVar6 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar6) - 8U) goto LAB_1401f5771;
        uVar7 = local_70 * 2 + 0x29;
      }
      thunk_FUN_140327e20(lVar6,uVar7);
    }
    local_78 = 0;
    local_70 = 7;
    local_88 = 0;
    if (0xf < local_50) {
      uVar7 = local_50 + 1;
      lVar2 = CONCAT71(uStack_67,local_68);
      lVar6 = lVar2;
      if (0xfff < uVar7) {
        lVar6 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar6) - 8U) goto LAB_1401f5778;
        uVar7 = local_50 + 0x28;
      }
      thunk_FUN_140327e20(lVar6,uVar7);
    }
    local_58 = 0;
    local_50 = 0xf;
    local_68 = 0;
LAB_1401f573f:
    FUN_1400055b0(local_48);
    return param_1;
  }
  uVar7 = uStack_90 * 2 + 2;
  uVar5 = local_a8;
  if (uVar7 < 0x1000) {
LAB_1401f568f:
    thunk_FUN_140327e20(uVar5,uVar7);
    goto LAB_1401f5694;
  }
  uVar5 = *(ulonglong *)(local_a8 - 8);
  if ((local_a8 - uVar5) - 8 < 0x20) {
    uVar7 = uStack_90 * 2 + 0x29;
    goto LAB_1401f568f;
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
LAB_1401f5771:
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
LAB_1401f5778:
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
  pcVar1 = (code *)swi(3);
  puVar3 = (undefined8 *)(*pcVar1)();
  return puVar3;
}



## raw_result.value.referenced_names

| address     | source_address | value                   |
|-------------|----------------|-------------------------|
| 0x1400055b0 | 0x1401f5743    | FUN_1400055b0           |
| 0x140028d00 | 0x1401f560c    | FUN_140028d00           |
| 0x14002bae0 | 0x1401f564a    | FUN_14002bae0           |
| 0x1401f5440 | 0x1401f55b2    | FUN_1401f5440           |
| 0x1401f55dc | 0x1401f55bc    | LAB_1401f55dc           |
| 0x1401f55f5 | 0x1401f55ee    | LAB_1401f55f5           |
| 0x1401f55f8 | 0x1401f55f3    | LAB_1401f55f8           |
| 0x1401f568f | 0x1401f566d    | LAB_1401f568f           |
| 0x1401f5694 | 0x1401f5658    | LAB_1401f5694           |
| 0x1401f56e3 | 0x1401f56c1    | LAB_1401f56e3           |
| 0x1401f56e8 | 0x1401f56ac    | LAB_1401f56e8           |
| 0x1401f572a | 0x1401f5710    | LAB_1401f572a           |
| 0x1401f572f | 0x1401f5700    | LAB_1401f572f           |
| 0x1401f573f | 0x1401f55d7    | LAB_1401f573f           |
| 0x1401f576a | 0x1401f567e    | LAB_1401f576a           |
| 0x1401f5771 | 0x1401f56d2    | LAB_1401f5771           |
| 0x1401f5778 | 0x1401f5721    | LAB_1401f5778           |
| 0x14030bba0 | 0x1401f55e3    | FUN_14030bba0           |
| 0x1403272f0 | 0x1401f568f    | thunk_FUN_140327e20     |
| 0x1403272f0 | 0x1401f56e3    | thunk_FUN_140327e20     |
| 0x1403272f0 | 0x1401f572a    | thunk_FUN_140327e20     |
| 0x140327740 | 0x1401f5752    | __security_check_cookie |
| 0x1404c7ac0 | 0x1401f5594    | DAT_1404c7ac0           |

## raw_result.value.referenced_strings



## normalized_result.assembly

0x1401f5580: MOV qword ptr [RSP + 0x18], RBX,0x1401f5585: PUSH RBP,0x1401f5586: PUSH RSI,0x1401f5587: PUSH RDI,0x1401f5588: LEA RBP, [RSP + -0x47],0x1401f558d: SUB RSP, 0xd0,0x1401f5594: MOV RAX, qword ptr [0x1404c7ac0],0x1401f559b: XOR RAX, RSP,0x1401f559e: MOV qword ptr [RBP + 0x37], RAX,0x1401f55a2: MOV RDI, RDX,0x1401f55a5: MOV RBX, RCX,0x1401f55a8: MOV qword ptr [RBP + -0x59], RCX,0x1401f55ac: XOR ESI, ESI,0x1401f55ae: LEA RCX, [RBP + 0x17],0x1401f55b2: CALL 0x1401f5440,0x1401f55b7: NOP,0x1401f55b8: CMP qword ptr [RBP + 0x27], RSI,0x1401f55bc: JNZ 0x1401f55dc,0x1401f55be: XORPS XMM0, XMM0,0x1401f55c1: MOVUPS xmmword ptr [RBX + 0x10], XMM0,0x1401f55c5: MOVUPS xmmword ptr [RBX], XMM0,0x1401f55c8: MOV qword ptr [RBX + 0x10], RSI,0x1401f55cc: MOV qword ptr [RBX + 0x18], 0x7,0x1401f55d4: MOV word ptr [RBX], SI,0x1401f55d7: JMP 0x1401f573f,0x1401f55dc: MOV RDX, RDI,0x1401f55df: LEA RCX, [RBP + -0x9],0x1401f55e3: CALL 0x14030bba0,0x1401f55e8: NOP,0x1401f55e9: CMP qword ptr [RAX + 0x18], 0xf,0x1401f55ee: JBE 0x1401f55f5,0x1401f55f0: MOV RCX, qword ptr [RAX],0x1401f55f3: JMP 0x1401f55f8,0x1401f55f5: MOV RCX, RAX,0x1401f55f8: MOV qword ptr [RBP + -0x59], RCX,0x1401f55fc: MOV RAX, qword ptr [RAX + 0x10],0x1401f5600: MOV qword ptr [RBP + -0x51], RAX,0x1401f5604: LEA RDX, [RBP + -0x59],0x1401f5608: LEA RCX, [RBP + -0x29],0x1401f560c: CALL 0x140028d00,0x1401f5611: NOP,0x1401f5612: XORPS XMM0, XMM0,0x1401f5615: MOVUPS xmmword ptr [RBP + -0x49], XMM0,0x1401f5619: MOV qword ptr [RBP + -0x39], RSI,0x1401f561d: MOV qword ptr [RBP + -0x31], RSI,0x1401f5621: MOVUPS XMM0, xmmword ptr [RAX],0x1401f5624: MOVUPS xmmword ptr [RBP + -0x49], XMM0,0x1401f5628: MOVUPS XMM1, xmmword ptr [RAX + 0x10],0x1401f562c: MOVUPS xmmword ptr [RBP + -0x39], XMM1,0x1401f5630: MOV qword ptr [RAX + 0x10], RSI,0x1401f5634: MOV qword ptr [RAX + 0x18], 0x7,0x1401f563c: MOV word ptr [RAX], SI,0x1401f563f: LEA R8, [RBP + -0x49],0x1401f5643: LEA RDX, [RBP + 0x17],0x1401f5647: MOV RCX, RBX,0x1401f564a: CALL 0x14002bae0,0x1401f564f: NOP,0x1401f5650: MOV R8, qword ptr [RBP + -0x31],0x1401f5654: CMP R8, 0x7,0x1401f5658: JBE 0x1401f5694,0x1401f565a: LEA RDX, [0x2 + R8*0x2],0x1401f5662: MOV RCX, qword ptr [RBP + -0x49],0x1401f5666: CMP RDX, 0x1000,0x1401f566d: JC 0x1401f568f,0x1401f566f: MOV RAX, qword ptr [RCX + -0x8],0x1401f5673: SUB RCX, RAX,0x1401f5676: SUB RCX, 0x8,0x1401f567a: CMP RCX, 0x1f,0x1401f567e: JA 0x1401f576a,0x1401f5684: LEA RDX, [0x29 + R8*0x2],0x1401f568c: MOV RCX, RAX,0x1401f568f: CALL 0x1403272f0,0x1401f5694: MOV qword ptr [RBP + -0x39], RSI,0x1401f5698: MOV qword ptr [RBP + -0x31], 0x7,0x1401f56a0: MOV word ptr [RBP + -0x49], SI,0x1401f56a4: MOV RAX, qword ptr [RBP + -0x11],0x1401f56a8: CMP RAX, 0x7,0x1401f56ac: JBE 0x1401f56e8,0x1401f56ae: LEA RDX, [0x2 + RAX*0x2],0x1401f56b6: MOV RCX, qword ptr [RBP + -0x29],0x1401f56ba: CMP RDX, 0x1000,0x1401f56c1: JC 0x1401f56e3,0x1401f56c3: MOV R8, qword ptr [RCX + -0x8],0x1401f56c7: SUB RCX, R8,0x1401f56ca: SUB RCX, 0x8,0x1401f56ce: CMP RCX, 0x1f,0x1401f56d2: JA 0x1401f5771,0x1401f56d8: LEA RDX, [0x29 + RAX*0x2],0x1401f56e0: MOV RCX, R8,0x1401f56e3: CALL 0x1403272f0,0x1401f56e8: MOV qword ptr [RBP + -0x19], RSI,0x1401f56ec: MOV qword ptr [RBP + -0x11], 0x7,0x1401f56f4: MOV word ptr [RBP + -0x29], SI,0x1401f56f8: MOV RDX, qword ptr [RBP + 0xf],0x1401f56fc: CMP RDX, 0xf,0x1401f5700: JBE 0x1401f572f,0x1401f5702: INC RDX,0x1401f5705: MOV RCX, qword ptr [RBP + -0x9],0x1401f5709: CMP RDX, 0x1000,0x1401f5710: JC 0x1401f572a,0x1401f5712: MOV RAX, qword ptr [RCX + -0x8],0x1401f5716: SUB RCX, RAX,0x1401f5719: SUB RCX, 0x8,0x1401f571d: CMP RCX, 0x1f,0x1401f5721: JA 0x1401f5778,0x1401f5723: ADD RDX, 0x27,0x1401f5727: MOV RCX, RAX,0x1401f572a: CALL 0x1403272f0,0x1401f572f: MOV qword ptr [RBP + 0x7], RSI,0x1401f5733: MOV qword ptr [RBP + 0xf], 0xf,0x1401f573b: MOV byte ptr [RBP + -0x9], 0x0,0x1401f573f: LEA RCX, [RBP + 0x17],0x1401f5743: CALL 0x1400055b0,0x1401f5748: MOV RAX, RBX,0x1401f574b: MOV RCX, qword ptr [RBP + 0x37],0x1401f574f: XOR RCX, RSP,0x1401f5752: CALL 0x140327740,0x1401f5757: MOV RBX, qword ptr [RSP + 0x100],0x1401f575f: ADD RSP, 0xd0,0x1401f5766: POP RDI,0x1401f5767: POP RSI,0x1401f5768: POP RBP,0x1401f5769: RET,0x1401f576a: MOV ECX, 0x5,0x1401f576f: INT 0x29,0x1401f5771: MOV ECX, 0x5,0x1401f5776: INT 0x29,0x1401f5778: MOV ECX, 0x5,0x1401f577d: INT 0x29,0x1401f577f: INT3

## normalized_result.basic_blocks

| end         | start       | successors              |
|-------------|-------------|-------------------------|
| 0x1401f55be | 0x1401f5580 | 0x1401f55be,0x1401f55dc |
| 0x1401f55dc | 0x1401f55be | 0x1401f573f             |
| 0x1401f55f0 | 0x1401f55dc | 0x1401f55f0,0x1401f55f5 |
| 0x1401f55f5 | 0x1401f55f0 | 0x1401f55f8             |
| 0x1401f55f8 | 0x1401f55f5 | 0x1401f55f8             |
| 0x1401f565a | 0x1401f55f8 | 0x1401f565a,0x1401f5694 |
| 0x1401f566f | 0x1401f565a | 0x1401f566f,0x1401f568f |
| 0x1401f5684 | 0x1401f566f | 0x1401f5684,0x1401f576a |
| 0x1401f568f | 0x1401f5684 | 0x1401f568f             |
| 0x1401f5694 | 0x1401f568f | 0x1401f5694             |
| 0x1401f56ae | 0x1401f5694 | 0x1401f56ae,0x1401f56e8 |
| 0x1401f56c3 | 0x1401f56ae | 0x1401f56c3,0x1401f56e3 |
| 0x1401f56d8 | 0x1401f56c3 | 0x1401f56d8,0x1401f5771 |
| 0x1401f56e3 | 0x1401f56d8 | 0x1401f56e3             |
| 0x1401f56e8 | 0x1401f56e3 | 0x1401f56e8             |
| 0x1401f5702 | 0x1401f56e8 | 0x1401f5702,0x1401f572f |
| 0x1401f5712 | 0x1401f5702 | 0x1401f5712,0x1401f572a |
| 0x1401f5723 | 0x1401f5712 | 0x1401f5723,0x1401f5778 |
| 0x1401f572a | 0x1401f5723 | 0x1401f572a             |
| 0x1401f572f | 0x1401f572a | 0x1401f572f             |
| 0x1401f573f | 0x1401f572f | 0x1401f573f             |
| 0x1401f576a | 0x1401f573f |                         |
| 0x1401f5771 | 0x1401f576a | 0x1401f5771             |
| 0x1401f5778 | 0x1401f5771 | 0x1401f5778             |
| 0x1401f5780 | 0x1401f5778 |                         |

## normalized_result.callees

| address     | body            | classification  | name                    |
|-------------|-----------------|-----------------|-------------------------|
| 0x1400055b0 | [object Object] | [object Object] | FUN_1400055b0           |
| 0x140028d00 | [object Object] | [object Object] | FUN_140028d00           |
| 0x14002bae0 | [object Object] | [object Object] | FUN_14002bae0           |
| 0x1401f5440 | [object Object] | [object Object] | FUN_1401f5440           |
| 0x14030bba0 | [object Object] | [object Object] | FUN_14030bba0           |
| 0x1403272f0 | [object Object] | [object Object] | thunk_FUN_140327e20     |
| 0x140327740 | [object Object] | [object Object] | __security_check_cookie |

## normalized_result.callers

| address     | body            | classification  | name          |
|-------------|-----------------|-----------------|---------------|
| 0x1401f3e30 | [object Object] | [object Object] | FUN_1401f3e30 |
| 0x1401f3e90 | [object Object] | [object Object] | FUN_1401f3e90 |
| 0x1401f5c80 | [object Object] | [object Object] | FUN_1401f5c80 |
| 0x1401f6280 | [object Object] | [object Object] | FUN_1401f6280 |

## normalized_result.comments



## normalized_result.incoming_references

| kind            | source_address | source_procedure | target_address | target_procedure |
|-----------------|----------------|------------------|----------------|------------------|
| [object Object] | 0x1401f3e4d    | [object Object]  | 0x1401f5580    | [object Object]  |
| [object Object] | 0x1401f435b    | [object Object]  | 0x1401f5580    | [object Object]  |
| [object Object] | 0x1401f5d61    | [object Object]  | 0x1401f5580    | [object Object]  |
| [object Object] | 0x1401f6a53    | [object Object]  | 0x1401f5580    | [object Object]  |
| [object Object] | 0x1404dfa38    |                  | 0x1401f5580    | [object Object]  |

## normalized_result.limitations

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x1401f577f with no resolved callee; its no-return basis is unknown.

## normalized_result.native_api.available

true

## normalized_result.native_api.calling_convention

__fastcall

## normalized_result.native_api.decompiler_artifacts

recovered-signature,register-and-stack-variables,compiler-generated-control-flow,pointer-arithmetic,pseudocode

## normalized_result.native_api.jump_tables



## normalized_result.native_api.limitations

Types and calling conventions are Ghidra decompiler observations, not source declarations.,Register variables, compiler-generated blocks, and pointer arithmetic remain decompiler artifacts.,Pseudocode is neither original source nor guaranteed to compile.

## normalized_result.native_api.parameters

| confidence | data_type    | decompiler_artifacts                                                      | evidence                        | name    | ordinal | role      | size_bytes | storage |
|------------|--------------|---------------------------------------------------------------------------|---------------------------------|---------|---------|-----------|------------|---------|
| low        | undefined8 * | recovered-signature,register-or-stack-storage,compiler-generated-variable | [object Object],[object Object] | param_1 | 0       | parameter | 8          | RCX:8   |
| low        | undefined8   | recovered-signature,register-or-stack-storage,compiler-generated-variable | [object Object],[object Object] | param_2 | 1       | parameter | 8          | RDX:8   |

## normalized_result.native_api.provenance

ghidra-high-function

## normalized_result.native_api.pseudocode

| Key            | Value                           |
|----------------|---------------------------------|
| classification | decompiler-generated-non-source |
| compilable     | false                           |

## normalized_result.native_api.return_type.confidence

low

## normalized_result.native_api.return_type.data_type

undefined8 *

## normalized_result.native_api.return_type.decompiler_artifacts

recovered-signature,register-or-stack-storage

## normalized_result.native_api.return_type.evidence

| detail                                         | kind             | source                  |
|------------------------------------------------|------------------|-------------------------|
| Function signature source is default.          | signature-source | ghidra-function-manager |
| HighFunction recovered data type undefined8 *. | decompiler-type  | ghidra-high-function    |

## normalized_result.native_api.return_type.name

null

## normalized_result.native_api.return_type.ordinal

null

## normalized_result.native_api.return_type.role

return

## normalized_result.native_api.return_type.size_bytes

8

## normalized_result.native_api.return_type.storage

RAX:8

## normalized_result.native_api.signature_source

default

## normalized_result.native_value_flow.available

true

## normalized_result.native_value_flow.def_use

| definition       | input_index | use              |
|------------------|-------------|------------------|
| 0x1401f559b#1591 | 1           | 0x1401f559b#26   |
| 0x1401f558d#1563 | 0           | 0x1401f559b#1591 |
| 0x1401f55ae#1564 | 1           | 0x1401f55b2#55   |
| 0x1401f55b2#1590 | 0           | 0x1401f55b2#1185 |
| 0x1401f559b#26   | 0           | 0x1401f55b2#1475 |
| 0x1401f55b2#1457 | 0           | 0x1401f55b8#63   |
| 0x1401f55b8#63   | 1           | 0x1401f55bc#69   |
| 0x1401f55c1#1565 | 1           | 0x1401f55c1#1106 |
| 0x1401f55c1#1566 | 1           | 0x1401f55c1#1107 |
| 0x1401f55b2#1119 | 0           | 0x1401f55c1#1139 |
| 0x1401f55c1#1139 | 0           | 0x1401f55c1#1140 |
| 0x1401f55c5#1567 | 1           | 0x1401f55c5#1112 |
| 0x1401f55c1#1140 | 0           | 0x1401f55c5#1141 |
| 0x1401f55c5#1141 | 0           | 0x1401f55c5#1142 |
| 0x1401f55c8#1568 | 1           | 0x1401f55c8#81   |
| 0x1401f55c5#1142 | 0           | 0x1401f55c8#1133 |
| 0x1401f55cc#1569 | 1           | 0x1401f55cc#84   |
| 0x1401f55c8#1133 | 0           | 0x1401f55cc#1134 |
| 0x1401f55d4#1592 | 1           | 0x1401f55d4#86   |
| 0x1401f55cc#1134 | 0           | 0x1401f55d4#1135 |
| 0x1401f55df#1570 | 1           | 0x1401f55e3#141  |
| 0x1401f55b2#1119 | 0           | 0x1401f55e3#1120 |
| 0x1401f55b2#1185 | 0           | 0x1401f55e3#1186 |
| 0x1401f55b2#1312 | 0           | 0x1401f55e3#1313 |
| 0x1401f55b2#1330 | 0           | 0x1401f55e3#1331 |
| 0x1401f55b2#1348 | 0           | 0x1401f55e3#1349 |
| 0x1401f55b2#1366 | 0           | 0x1401f55e3#1367 |
| 0x1401f55b2#1385 | 0           | 0x1401f55e3#1386 |
| 0x1401f55b2#1403 | 0           | 0x1401f55e3#1404 |
| 0x1401f55b2#1439 | 0           | 0x1401f55e3#1440 |
| 0x1401f55b2#1475 | 0           | 0x1401f55e3#1476 |
| 0x1401f55e3#141  | 0           | 0x1401f55e3#1593 |
| 0x1401f55e9#1571 | 1           | 0x1401f55e9#143  |
| 0x1401f55e3#1593 | 0           | 0x1401f55e9#1571 |
| 0x1401f55ee#1594 | 1           | 0x1401f55ee#154  |
| 0x1401f55ee#154  | 1           | 0x1401f55ee#155  |
| 0x1401f55e3#1593 | 0           | 0x1401f55ee#1589 |
| 0x1401f55e9#143  | 0           | 0x1401f55ee#1594 |
| 0x1401f55e3#1593 | 1           | 0x1401f55f0#156  |
| 0x1401f55f0#156  | 0           | 0x1401f55f0#1595 |
| 0x1401f55f0#1595 | 0           | 0x1401f55f3#1588 |
| 0x1401f55f3#1588 | 0           | 0x1401f55f8#706  |
| 0x1401f55ee#1589 | 1           | 0x1401f55f8#706  |
| 0x1401f55fc#1572 | 1           | 0x1401f55fc#163  |
| 0x1401f55e3#1593 | 0           | 0x1401f55fc#1572 |
| 0x1401f5608#1574 | 1           | 0x1401f560c#174  |
| 0x1401f5604#1573 | 2           | 0x1401f560c#174  |
| 0x1401f55e3#1120 | 0           | 0x1401f560c#1121 |
| 0x1401f55f8#706  | 0           | 0x1401f560c#1187 |
| 0x1401f55fc#163  | 0           | 0x1401f560c#1205 |
| 0x1401f55e3#1313 | 0           | 0x1401f560c#1314 |
| 0x1401f55e3#1331 | 0           | 0x1401f560c#1332 |
| 0x1401f55e3#1349 | 0           | 0x1401f560c#1350 |
| 0x1401f55e3#1367 | 0           | 0x1401f560c#1368 |
| 0x1401f55e3#1386 | 0           | 0x1401f560c#1387 |
| 0x1401f55e3#1404 | 0           | 0x1401f560c#1405 |
| 0x1401f55e3#1440 | 0           | 0x1401f560c#1441 |
| 0x1401f55e3#1476 | 0           | 0x1401f560c#1477 |
| 0x1401f560c#174  | 0           | 0x1401f560c#1596 |
| 0x1401f560c#1596 | 1           | 0x1401f5621#1559 |
| 0x1401f5621#1575 | 1           | 0x1401f5621#1560 |
| 0x1401f560c#1596 | 0           | 0x1401f5621#1575 |
| 0x1401f5628#1576 | 1           | 0x1401f5628#1561 |
| 0x1401f5628#1577 | 1           | 0x1401f5628#1562 |
| 0x1401f560c#1596 | 0           | 0x1401f5628#1576 |
| 0x1401f560c#1596 | 0           | 0x1401f5628#1577 |
| 0x1401f5630#1578 | 1           | 0x1401f5630#209  |
| 0x1401f560c#1121 | 0           | 0x1401f5630#1136 |
| 0x1401f560c#1596 | 0           | 0x1401f5630#1578 |
| 0x1401f5634#1579 | 1           | 0x1401f5634#212  |
| 0x1401f5630#1136 | 0           | 0x1401f5634#1137 |
| 0x1401f560c#1596 | 0           | 0x1401f5634#1579 |
| 0x1401f563c#1597 | 1           | 0x1401f563c#214  |
| 0x1401f5634#1137 | 0           | 0x1401f563c#1138 |
| 0x1401f560c#1596 | 0           | 0x1401f563c#1597 |
| 0x1401f5643#1581 | 2           | 0x1401f564a#222  |
| 0x1401f563f#1580 | 3           | 0x1401f564a#222  |
| 0x1401f563c#1138 | 0           | 0x1401f564a#1122 |
| 0x1401f560c#1187 | 0           | 0x1401f564a#1188 |
| 0x1401f560c#1205 | 0           | 0x1401f564a#1206 |
| 0x1401f5621#1559 | 0           | 0x1401f564a#1230 |
| 0x1401f5621#1560 | 0           | 0x1401f564a#1252 |
| 0x1401f5628#1561 | 0           | 0x1401f564a#1274 |
| 0x1401f5628#1562 | 0           | 0x1401f564a#1296 |
| 0x1401f560c#1314 | 0           | 0x1401f564a#1315 |
| 0x1401f560c#1332 | 0           | 0x1401f564a#1333 |
| 0x1401f560c#1350 | 0           | 0x1401f564a#1351 |
| 0x1401f560c#1368 | 0           | 0x1401f564a#1369 |
| 0x1401f560c#1387 | 0           | 0x1401f564a#1388 |
| 0x1401f560c#1405 | 0           | 0x1401f564a#1406 |
| 0x1401f560c#1441 | 0           | 0x1401f564a#1442 |
| 0x1401f560c#1477 | 0           | 0x1401f564a#1478 |
| 0x1401f564a#1296 | 0           | 0x1401f5658#236  |
| 0x1401f5658#236  | 1           | 0x1401f5658#237  |
| 0x1401f564a#1296 | 0           | 0x1401f565a#238  |
| 0x1401f565a#238  | 0           | 0x1401f565a#239  |
| 0x1401f565a#239  | 0           | 0x1401f5666#245  |
| 0x1401f5666#245  | 1           | 0x1401f566d#254  |
| 0x1401f564a#1230 | 0           | 0x1401f566d#1587 |
| 0x1401f564a#1230 | 0           | 0x1401f566f#255  |
| 0x1401f566f#1598 | 1           | 0x1401f566f#256  |
| 0x1401f566f#255  | 0           | 0x1401f566f#1598 |
| 0x1401f564a#1230 | 0           | 0x1401f5673#260  |
| 0x1401f566f#256  | 1           | 0x1401f5673#260  |
| 0x1401f5673#260  | 0           | 0x1401f5676#269  |
| 0x1401f5676#269  | 0           | 0x1401f567e#286  |
| 0x1401f567e#286  | 1           | 0x1401f567e#288  |
| 0x1401f564a#1296 | 0           | 0x1401f5684#289  |
| 0x1401f5684#289  | 0           | 0x1401f5684#290  |
| 0x1401f568f#704  | 1           | 0x1401f568f#295  |
| 0x1401f568f#726  | 2           | 0x1401f568f#295  |
| 0x1401f566d#1587 | 0           | 0x1401f568f#704  |
| 0x1401f566f#256  | 1           | 0x1401f568f#704  |
| 0x1401f565a#239  | 0           | 0x1401f568f#726  |
| 0x1401f5684#290  | 1           | 0x1401f568f#726  |
| 0x1401f564a#1122 | 0           | 0x1401f568f#1124 |
| 0x1401f564a#1188 | 0           | 0x1401f568f#1190 |
| 0x1401f564a#1206 | 0           | 0x1401f568f#1208 |
| 0x1401f564a#1230 | 0           | 0x1401f568f#1232 |
| 0x1401f564a#1252 | 0           | 0x1401f568f#1254 |
| 0x1401f564a#1274 | 0           | 0x1401f568f#1276 |
| 0x1401f564a#1296 | 0           | 0x1401f568f#1298 |
| 0x1401f564a#1315 | 0           | 0x1401f568f#1317 |
| 0x1401f564a#1333 | 0           | 0x1401f568f#1335 |
| 0x1401f564a#1351 | 0           | 0x1401f568f#1353 |
| 0x1401f564a#1369 | 0           | 0x1401f568f#1371 |
| 0x1401f564a#1388 | 0           | 0x1401f568f#1390 |
| 0x1401f564a#1406 | 0           | 0x1401f568f#1408 |
| 0x1401f564a#1442 | 0           | 0x1401f568f#1444 |
| 0x1401f564a#1478 | 0           | 0x1401f568f#1480 |
| 0x1401f564a#1122 | 0           | 0x1401f5694#1148 |
| 0x1401f568f#1124 | 1           | 0x1401f5694#1148 |
| 0x1401f564a#1188 | 0           | 0x1401f5694#1202 |
| 0x1401f568f#1190 | 1           | 0x1401f5694#1202 |
| 0x1401f564a#1206 | 0           | 0x1401f5694#1220 |
| 0x1401f568f#1208 | 1           | 0x1401f5694#1220 |
| 0x1401f564a#1230 | 0           | 0x1401f5694#1244 |
| 0x1401f568f#1232 | 1           | 0x1401f5694#1244 |
| 0x1401f564a#1252 | 0           | 0x1401f5694#1266 |
| 0x1401f568f#1254 | 1           | 0x1401f5694#1266 |
| 0x1401f564a#1315 | 0           | 0x1401f5694#1328 |
| 0x1401f568f#1317 | 1           | 0x1401f5694#1328 |
| 0x1401f564a#1333 | 0           | 0x1401f5694#1347 |
| 0x1401f568f#1335 | 1           | 0x1401f5694#1347 |
| 0x1401f564a#1351 | 0           | 0x1401f5694#1364 |
| 0x1401f568f#1353 | 1           | 0x1401f5694#1364 |
| 0x1401f564a#1369 | 0           | 0x1401f5694#1382 |
| 0x1401f568f#1371 | 1           | 0x1401f5694#1382 |
| 0x1401f564a#1388 | 0           | 0x1401f5694#1402 |
| 0x1401f568f#1390 | 1           | 0x1401f5694#1402 |
| 0x1401f564a#1406 | 0           | 0x1401f5694#1420 |
| 0x1401f568f#1408 | 1           | 0x1401f5694#1420 |
| 0x1401f564a#1442 | 0           | 0x1401f5694#1456 |
| 0x1401f568f#1444 | 1           | 0x1401f5694#1456 |
| 0x1401f564a#1478 | 0           | 0x1401f5694#1492 |
| 0x1401f568f#1480 | 1           | 0x1401f5694#1492 |
| 0x1401f5694#1244 | 0           | 0x1401f56a0#1222 |
| 0x1401f5694#1382 | 1           | 0x1401f56ac#318  |
| 0x1401f56ac#318  | 1           | 0x1401f56ac#319  |
| 0x1401f5694#1382 | 0           | 0x1401f56ae#320  |
| 0x1401f56ae#320  | 0           | 0x1401f56ae#321  |
| 0x1401f5694#1347 | 0           | 0x1401f56b6#1311 |
| 0x1401f5694#1328 | 1           | 0x1401f56b6#1311 |
| 0x1401f56ae#321  | 1           | 0x1401f56ba#327  |
| 0x1401f56ba#327  | 1           | 0x1401f56c1#336  |
| 0x1401f56b6#1311 | 0           | 0x1401f56c1#1586 |
| 0x1401f56b6#1311 | 0           | 0x1401f56c3#337  |
| 0x1401f56c3#1600 | 1           | 0x1401f56c3#338  |
| 0x1401f56c3#337  | 0           | 0x1401f56c3#1600 |
| 0x1401f56b6#1311 | 0           | 0x1401f56c7#342  |
| 0x1401f56c3#338  | 1           | 0x1401f56c7#342  |
| 0x1401f56c7#342  | 0           | 0x1401f56ca#351  |
| 0x1401f56ca#351  | 1           | 0x1401f56d2#368  |
| 0x1401f56d2#368  | 1           | 0x1401f56d2#370  |
| 0x1401f5694#1382 | 0           | 0x1401f56d8#371  |
| 0x1401f56d8#371  | 0           | 0x1401f56d8#372  |
| 0x1401f56e3#700  | 1           | 0x1401f56e3#377  |
| 0x1401f56e3#721  | 2           | 0x1401f56e3#377  |
| 0x1401f56c1#1586 | 0           | 0x1401f56e3#700  |
| 0x1401f56c3#338  | 1           | 0x1401f56e3#700  |
| 0x1401f56ae#321  | 0           | 0x1401f56e3#721  |
| 0x1401f56d8#372  | 1           | 0x1401f56e3#721  |
| 0x1401f5694#1148 | 0           | 0x1401f56e3#1126 |
| 0x1401f5694#1202 | 0           | 0x1401f56e3#1192 |
| 0x1401f5694#1220 | 0           | 0x1401f56e3#1210 |
| 0x1401f56a0#1222 | 0           | 0x1401f56e3#1234 |
| 0x1401f5694#1266 | 0           | 0x1401f56e3#1256 |
| 0x1401f5694#298  | 0           | 0x1401f56e3#1278 |
| 0x1401f5698#301  | 0           | 0x1401f56e3#1300 |
| 0x1401f5694#1402 | 0           | 0x1401f56e3#1392 |
| 0x1401f5694#1420 | 0           | 0x1401f56e3#1410 |
| 0x1401f5694#1456 | 0           | 0x1401f56e3#1446 |
| 0x1401f5694#1492 | 0           | 0x1401f56e3#1482 |
| 0x1401f5694#1148 | 0           | 0x1401f56e8#1145 |
| 0x1401f56e3#1126 | 1           | 0x1401f56e8#1145 |
| 0x1401f5694#1202 | 0           | 0x1401f56e8#1199 |
| 0x1401f56e3#1192 | 1           | 0x1401f56e8#1199 |
| 0x1401f5694#1220 | 0           | 0x1401f56e8#1217 |
| 0x1401f56e3#1210 | 1           | 0x1401f56e8#1217 |
| 0x1401f56a0#1222 | 0           | 0x1401f56e8#1241 |
| 0x1401f56e3#1234 | 1           | 0x1401f56e8#1241 |
| 0x1401f5694#1266 | 0           | 0x1401f56e8#1263 |
| 0x1401f56e3#1256 | 1           | 0x1401f56e8#1263 |
| 0x1401f5694#298  | 0           | 0x1401f56e8#1285 |
| 0x1401f56e3#1278 | 1           | 0x1401f56e8#1285 |
| 0x1401f5698#301  | 0           | 0x1401f56e8#1307 |
| 0x1401f56e3#1300 | 1           | 0x1401f56e8#1307 |
| 0x1401f5694#1402 | 0           | 0x1401f56e8#1398 |
| 0x1401f56e3#1392 | 1           | 0x1401f56e8#1398 |
| 0x1401f5694#1420 | 0           | 0x1401f56e8#1417 |
| 0x1401f56e3#1410 | 1           | 0x1401f56e8#1417 |
| 0x1401f5694#1456 | 0           | 0x1401f56e8#1452 |
| 0x1401f56e3#1446 | 1           | 0x1401f56e8#1452 |
| 0x1401f5694#1492 | 0           | 0x1401f56e8#1489 |
| 0x1401f56e3#1482 | 1           | 0x1401f56e8#1489 |
| 0x1401f56e8#1452 | 1           | 0x1401f5700#400  |
| 0x1401f5700#400  | 1           | 0x1401f5700#401  |
| 0x1401f56e8#1452 | 0           | 0x1401f5702#403  |
| 0x1401f56e8#1417 | 0           | 0x1401f5705#1384 |
| 0x1401f56e8#1398 | 1           | 0x1401f5705#1384 |
| 0x1401f5702#403  | 1           | 0x1401f5709#414  |
| 0x1401f5709#414  | 1           | 0x1401f5710#423  |
| 0x1401f5705#1384 | 0           | 0x1401f5710#1585 |
| 0x1401f5705#1384 | 0           | 0x1401f5712#424  |
| 0x1401f5712#1602 | 1           | 0x1401f5712#425  |
| 0x1401f5712#424  | 0           | 0x1401f5712#1602 |
| 0x1401f5705#1384 | 0           | 0x1401f5716#429  |
| 0x1401f5712#425  | 1           | 0x1401f5716#429  |
| 0x1401f5716#429  | 0           | 0x1401f5719#438  |
| 0x1401f5719#438  | 1           | 0x1401f5721#455  |
| 0x1401f5721#455  | 1           | 0x1401f5721#457  |
| 0x1401f56e8#1452 | 0           | 0x1401f5723#460  |
| 0x1401f572a#697  | 1           | 0x1401f572a#470  |
| 0x1401f572a#719  | 2           | 0x1401f572a#470  |
| 0x1401f5710#1585 | 0           | 0x1401f572a#697  |
| 0x1401f5712#425  | 1           | 0x1401f572a#697  |
| 0x1401f5702#403  | 0           | 0x1401f572a#719  |
| 0x1401f5723#460  | 1           | 0x1401f572a#719  |
| 0x1401f56e8#1145 | 0           | 0x1401f572a#1129 |
| 0x1401f56e8#1199 | 0           | 0x1401f572a#1195 |
| 0x1401f56e8#1217 | 0           | 0x1401f572a#1213 |
| 0x1401f56e8#1241 | 0           | 0x1401f572a#1237 |
| 0x1401f56e8#1263 | 0           | 0x1401f572a#1259 |
| 0x1401f56e8#1285 | 0           | 0x1401f572a#1281 |
| 0x1401f56e8#1307 | 0           | 0x1401f572a#1303 |
| 0x1401f56f4#386  | 0           | 0x1401f572a#1322 |
| 0x1401f56e8#380  | 0           | 0x1401f572a#1358 |
| 0x1401f56ec#383  | 0           | 0x1401f572a#1376 |
| 0x1401f56e8#1489 | 0           | 0x1401f572a#1485 |
| 0x1401f56e8#1145 | 0           | 0x1401f572f#1143 |
| 0x1401f572a#1129 | 1           | 0x1401f572f#1143 |
| 0x1401f56e8#1199 | 0           | 0x1401f572f#1197 |
| 0x1401f572a#1195 | 1           | 0x1401f572f#1197 |
| 0x1401f56e8#1217 | 0           | 0x1401f572f#1215 |
| 0x1401f572a#1213 | 1           | 0x1401f572f#1215 |
| 0x1401f56e8#1241 | 0           | 0x1401f572f#1239 |
| 0x1401f572a#1237 | 1           | 0x1401f572f#1239 |
| 0x1401f56e8#1263 | 0           | 0x1401f572f#1261 |
| 0x1401f572a#1259 | 1           | 0x1401f572f#1261 |
| 0x1401f56e8#1285 | 0           | 0x1401f572f#1283 |
| 0x1401f572a#1281 | 1           | 0x1401f572f#1283 |
| 0x1401f56e8#1307 | 0           | 0x1401f572f#1305 |
| 0x1401f572a#1303 | 1           | 0x1401f572f#1305 |
| 0x1401f56f4#386  | 0           | 0x1401f572f#1324 |
| 0x1401f572a#1322 | 1           | 0x1401f572f#1324 |
| 0x1401f56e8#380  | 0           | 0x1401f572f#1360 |
| 0x1401f572a#1358 | 1           | 0x1401f572f#1360 |
| 0x1401f56ec#383  | 0           | 0x1401f572f#1378 |
| 0x1401f572a#1376 | 1           | 0x1401f572f#1378 |
| 0x1401f56e8#1489 | 0           | 0x1401f572f#1487 |
| 0x1401f572a#1485 | 1           | 0x1401f572f#1487 |
| 0x1401f55d4#1135 | 0           | 0x1401f573f#1144 |
| 0x1401f572f#1143 | 1           | 0x1401f573f#1144 |
| 0x1401f55b2#1185 | 0           | 0x1401f573f#1198 |
| 0x1401f572f#1197 | 1           | 0x1401f573f#1198 |
| 0x1401f55b2#1203 | 0           | 0x1401f573f#1216 |
| 0x1401f572f#1215 | 1           | 0x1401f573f#1216 |
| 0x1401f55b2#1227 | 0           | 0x1401f573f#1240 |
| 0x1401f572f#1239 | 1           | 0x1401f573f#1240 |
| 0x1401f55b2#1249 | 0           | 0x1401f573f#1262 |
| 0x1401f572f#1261 | 1           | 0x1401f573f#1262 |
| 0x1401f55b2#1271 | 0           | 0x1401f573f#1284 |
| 0x1401f572f#1283 | 1           | 0x1401f573f#1284 |
| 0x1401f55b2#1293 | 0           | 0x1401f573f#1306 |
| 0x1401f572f#1305 | 1           | 0x1401f573f#1306 |
| 0x1401f55b2#1312 | 0           | 0x1401f573f#1325 |
| 0x1401f572f#1324 | 1           | 0x1401f573f#1325 |
| 0x1401f55b2#1348 | 0           | 0x1401f573f#1361 |
| 0x1401f572f#1360 | 1           | 0x1401f573f#1361 |
| 0x1401f55b2#1366 | 0           | 0x1401f573f#1379 |
| 0x1401f572f#1378 | 1           | 0x1401f573f#1379 |
| 0x1401f55b2#1385 | 0           | 0x1401f573f#1400 |
| 0x1401f573b#479  | 1           | 0x1401f573f#1400 |
| 0x1401f55b2#1421 | 0           | 0x1401f573f#1436 |
| 0x1401f572f#473  | 1           | 0x1401f573f#1436 |
| 0x1401f55b2#1439 | 0           | 0x1401f573f#1454 |
| 0x1401f5733#476  | 1           | 0x1401f573f#1454 |
| 0x1401f55b2#1475 | 0           | 0x1401f573f#1488 |
| 0x1401f572f#1487 | 1           | 0x1401f573f#1488 |
| 0x1401f573f#1582 | 1           | 0x1401f5743#92   |
| 0x1401f573f#1144 | 0           | 0x1401f5743#1130 |
| 0x1401f573f#1198 | 0           | 0x1401f5743#1196 |
| 0x1401f573f#1216 | 0           | 0x1401f5743#1214 |
| 0x1401f573f#1240 | 0           | 0x1401f5743#1238 |
| 0x1401f573f#1262 | 0           | 0x1401f5743#1260 |
| 0x1401f573f#1284 | 0           | 0x1401f5743#1282 |
| 0x1401f573f#1306 | 0           | 0x1401f5743#1304 |
| 0x1401f573f#1325 | 0           | 0x1401f5743#1323 |
| 0x1401f573f#1361 | 0           | 0x1401f5743#1359 |
| 0x1401f573f#1379 | 0           | 0x1401f5743#1377 |
| 0x1401f573f#1400 | 0           | 0x1401f5743#1396 |
| 0x1401f573f#1436 | 0           | 0x1401f5743#1432 |
| 0x1401f573f#1454 | 0           | 0x1401f5743#1450 |
| 0x1401f573f#1488 | 0           | 0x1401f5743#1486 |
| 0x1401f5748#93   | 1           | 0x1401f5769#135  |
| 0x1401f5743#1130 | 0           | 0x1401f5769#1131 |
| 0x1401f576f#1599 | 0           | 0x1401f576f#491  |
| 0x1401f564a#1122 | 0           | 0x1401f576f#1123 |
| 0x1401f564a#1188 | 0           | 0x1401f576f#1189 |
| 0x1401f564a#1206 | 0           | 0x1401f576f#1207 |
| 0x1401f564a#1230 | 0           | 0x1401f576f#1231 |
| 0x1401f564a#1252 | 0           | 0x1401f576f#1253 |
| 0x1401f564a#1274 | 0           | 0x1401f576f#1275 |
| 0x1401f564a#1296 | 0           | 0x1401f576f#1297 |
| 0x1401f564a#1315 | 0           | 0x1401f576f#1316 |
| 0x1401f564a#1351 | 0           | 0x1401f576f#1352 |
| 0x1401f564a#1369 | 0           | 0x1401f576f#1370 |
| 0x1401f564a#1478 | 0           | 0x1401f576f#1479 |
| 0x1401f576f#490  | 0           | 0x1401f576f#1599 |
| 0x1401f5694#1148 | 0           | 0x1401f5771#1146 |
| 0x1401f576f#1123 | 1           | 0x1401f5771#1146 |
| 0x1401f5694#1202 | 0           | 0x1401f5771#1200 |
| 0x1401f576f#1189 | 1           | 0x1401f5771#1200 |
| 0x1401f5694#1220 | 0           | 0x1401f5771#1218 |
| 0x1401f576f#1207 | 1           | 0x1401f5771#1218 |
| 0x1401f56a0#1222 | 0           | 0x1401f5771#1242 |
| 0x1401f576f#1231 | 1           | 0x1401f5771#1242 |
| 0x1401f5694#1266 | 0           | 0x1401f5771#1264 |
| 0x1401f576f#1253 | 1           | 0x1401f5771#1264 |
| 0x1401f5694#298  | 0           | 0x1401f5771#1286 |
| 0x1401f576f#1275 | 1           | 0x1401f5771#1286 |
| 0x1401f5698#301  | 0           | 0x1401f5771#1308 |
| 0x1401f576f#1297 | 1           | 0x1401f5771#1308 |
| 0x1401f5694#1328 | 0           | 0x1401f5771#1327 |
| 0x1401f576f#1316 | 1           | 0x1401f5771#1327 |
| 0x1401f5694#1364 | 0           | 0x1401f5771#1363 |
| 0x1401f576f#1352 | 1           | 0x1401f5771#1363 |
| 0x1401f5694#1382 | 0           | 0x1401f5771#1381 |
| 0x1401f576f#1370 | 1           | 0x1401f5771#1381 |
| 0x1401f5694#1492 | 0           | 0x1401f5771#1490 |
| 0x1401f576f#1479 | 1           | 0x1401f5771#1490 |
| 0x1401f5776#1601 | 0           | 0x1401f5776#488  |
| 0x1401f5771#1146 | 0           | 0x1401f5776#1125 |
| 0x1401f5771#1200 | 0           | 0x1401f5776#1191 |
| 0x1401f5771#1218 | 0           | 0x1401f5776#1209 |
| 0x1401f5771#1242 | 0           | 0x1401f5776#1233 |
| 0x1401f5771#1264 | 0           | 0x1401f5776#1255 |
| 0x1401f5771#1286 | 0           | 0x1401f5776#1277 |
| 0x1401f5771#1308 | 0           | 0x1401f5776#1299 |
| 0x1401f5771#1327 | 0           | 0x1401f5776#1318 |
| 0x1401f5771#1363 | 0           | 0x1401f5776#1354 |
| 0x1401f5771#1381 | 0           | 0x1401f5776#1372 |
| 0x1401f5771#1490 | 0           | 0x1401f5776#1481 |
| 0x1401f5776#487  | 0           | 0x1401f5776#1601 |
| 0x1401f56e8#1145 | 0           | 0x1401f5778#1147 |
| 0x1401f5776#1125 | 1           | 0x1401f5778#1147 |
| 0x1401f56e8#1199 | 0           | 0x1401f5778#1201 |
| 0x1401f5776#1191 | 1           | 0x1401f5778#1201 |
| 0x1401f56e8#1217 | 0           | 0x1401f5778#1219 |
| 0x1401f5776#1209 | 1           | 0x1401f5778#1219 |
| 0x1401f56e8#1241 | 0           | 0x1401f5778#1243 |
| 0x1401f5776#1233 | 1           | 0x1401f5778#1243 |
| 0x1401f56e8#1263 | 0           | 0x1401f5778#1265 |
| 0x1401f5776#1255 | 1           | 0x1401f5778#1265 |
| 0x1401f56e8#1285 | 0           | 0x1401f5778#1287 |
| 0x1401f5776#1277 | 1           | 0x1401f5778#1287 |
| 0x1401f56e8#1307 | 0           | 0x1401f5778#1309 |
| 0x1401f5776#1299 | 1           | 0x1401f5778#1309 |
| 0x1401f56f4#386  | 0           | 0x1401f5778#1329 |
| 0x1401f5776#1318 | 1           | 0x1401f5778#1329 |
| 0x1401f56e8#380  | 0           | 0x1401f5778#1365 |
| 0x1401f5776#1354 | 1           | 0x1401f5778#1365 |
| 0x1401f56ec#383  | 0           | 0x1401f5778#1383 |
| 0x1401f5776#1372 | 1           | 0x1401f5778#1383 |
| 0x1401f56e8#1489 | 0           | 0x1401f5778#1491 |
| 0x1401f5776#1481 | 1           | 0x1401f5778#1491 |
| 0x1401f577d#1603 | 0           | 0x1401f577d#482  |
| 0x1401f5778#1147 | 0           | 0x1401f577d#1127 |
| 0x1401f5778#1201 | 0           | 0x1401f577d#1193 |
| 0x1401f5778#1219 | 0           | 0x1401f577d#1211 |
| 0x1401f5778#1243 | 0           | 0x1401f577d#1235 |
| 0x1401f5778#1265 | 0           | 0x1401f577d#1257 |
| 0x1401f5778#1287 | 0           | 0x1401f577d#1279 |
| 0x1401f5778#1309 | 0           | 0x1401f577d#1301 |
| 0x1401f5778#1329 | 0           | 0x1401f577d#1320 |
| 0x1401f5778#1365 | 0           | 0x1401f577d#1356 |
| 0x1401f5778#1383 | 0           | 0x1401f577d#1374 |
| 0x1401f5778#1491 | 0           | 0x1401f577d#1483 |
| 0x1401f577d#481  | 0           | 0x1401f577d#1603 |
| 0x1401f577f#1604 | 0           | 0x1401f577f#484  |
| 0x1401f577f#1605 | 1           | 0x1401f577f#485  |
| 0x1401f577d#1127 | 0           | 0x1401f577f#1128 |
| 0x1401f577f#1128 | 0           | 0x1401f577f#1132 |
| 0x1401f577d#1193 | 0           | 0x1401f577f#1194 |
| 0x1401f577d#1211 | 0           | 0x1401f577f#1212 |
| 0x1401f577d#1235 | 0           | 0x1401f577f#1236 |
| 0x1401f577d#1257 | 0           | 0x1401f577f#1258 |
| 0x1401f577d#1279 | 0           | 0x1401f577f#1280 |
| 0x1401f577d#1301 | 0           | 0x1401f577f#1302 |
| 0x1401f577d#1320 | 0           | 0x1401f577f#1321 |
| 0x1401f577d#1356 | 0           | 0x1401f577f#1357 |
| 0x1401f577d#1374 | 0           | 0x1401f577f#1375 |
| 0x1401f577d#1483 | 0           | 0x1401f577f#1484 |
| 0x1401f577f#483  | 0           | 0x1401f577f#1604 |
| 0x1401f577f#484  | 0           | 0x1401f577f#1605 |

## normalized_result.native_value_flow.effects

| kind               | operand_input | operation        | value_input |
|--------------------|---------------|------------------|-------------|
| direct_call        | 0             | 0x1401f55b2#55   |             |
| conditional_branch |               | 0x1401f55bc#69   | 1           |
| memory_write       | 1             | 0x1401f55c1#1106 | 2           |
| memory_write       | 1             | 0x1401f55c1#1107 | 2           |
| memory_write       | 1             | 0x1401f55c5#1111 | 2           |
| memory_write       | 1             | 0x1401f55c5#1112 | 2           |
| memory_write       | 1             | 0x1401f55c8#81   | 2           |
| memory_write       | 1             | 0x1401f55cc#84   | 2           |
| memory_write       | 1             | 0x1401f55d4#86   | 2           |
| direct_call        | 0             | 0x1401f55e3#141  |             |
| memory_read        | 1             | 0x1401f55e9#143  |             |
| conditional_branch |               | 0x1401f55ee#155  | 1           |
| memory_read        | 1             | 0x1401f55f0#156  |             |
| memory_read        | 1             | 0x1401f55fc#163  |             |
| direct_call        | 0             | 0x1401f560c#174  |             |
| memory_read        | 1             | 0x1401f5621#1559 |             |
| memory_read        | 1             | 0x1401f5621#1560 |             |
| memory_read        | 1             | 0x1401f5628#1561 |             |
| memory_read        | 1             | 0x1401f5628#1562 |             |
| memory_write       | 1             | 0x1401f5630#209  | 2           |
| memory_write       | 1             | 0x1401f5634#212  | 2           |
| memory_write       | 1             | 0x1401f563c#214  | 2           |
| direct_call        | 0             | 0x1401f564a#222  |             |
| conditional_branch |               | 0x1401f5658#237  | 1           |
| conditional_branch |               | 0x1401f566d#254  | 1           |
| memory_read        | 1             | 0x1401f566f#256  |             |
| conditional_branch |               | 0x1401f567e#288  | 1           |
| direct_call        | 0             | 0x1401f568f#295  |             |
| conditional_branch |               | 0x1401f56ac#319  | 1           |
| conditional_branch |               | 0x1401f56c1#336  | 1           |
| memory_read        | 1             | 0x1401f56c3#338  |             |
| conditional_branch |               | 0x1401f56d2#370  | 1           |
| direct_call        | 0             | 0x1401f56e3#377  |             |
| conditional_branch |               | 0x1401f5700#401  | 1           |
| conditional_branch |               | 0x1401f5710#423  | 1           |
| memory_read        | 1             | 0x1401f5712#425  |             |
| conditional_branch |               | 0x1401f5721#457  | 1           |
| direct_call        | 0             | 0x1401f572a#470  |             |
| direct_call        | 0             | 0x1401f5743#92   |             |
| indirect_call      | 0             | 0x1401f576f#491  |             |
| indirect_call      | 0             | 0x1401f5776#488  |             |
| indirect_call      | 0             | 0x1401f577d#482  |             |
| indirect_call      | 0             | 0x1401f577f#484  |             |

## normalized_result.native_value_flow.known_omitted_edges

0

## normalized_result.native_value_flow.known_omitted_inputs

0

## normalized_result.native_value_flow.limitations

High p-code is decompiler-derived, not original source or runtime behavior. is_dead preserves the Java AST flag; decoded block members can retain that flag, so block_membership separately reports actual syntax-tree membership.,Def-use links do not cross function boundaries and may omit memory aliasing, call side effects, or unresolved indirect flow.,Memory read/write effects include stack and temporary memory operations; they do not identify persistent state or business meaning.,Operation, input, and def-use limits can truncate large functions; inspect truncation, omitted lower bounds, and known omitted counts before drawing conclusions.,Known omitted-edge counts cover links omitted from retained operations; omitted operations may contain additional uncounted links.

## normalized_result.native_value_flow.omitted_operations_lower_bound

0

## normalized_result.native_value_flow.operations

| address     | block_membership | id               | inputs                                                          | is_dead | opcode     | output          | sequence |
|-------------|------------------|------------------|-----------------------------------------------------------------|---------|------------|-----------------|----------|
| 0x1401f558d | member           | 0x1401f558d#1563 | [object Object],[object Object]                                 | true    | PTRSUB     | [object Object] | 1563     |
| 0x1401f559b | member           | 0x1401f559b#26   | [object Object],[object Object]                                 | true    | INT_XOR    | [object Object] | 26       |
| 0x1401f559b | member           | 0x1401f559b#1591 | [object Object]                                                 | true    | CAST       | [object Object] | 1591     |
| 0x1401f55ae | member           | 0x1401f55ae#1564 | [object Object],[object Object]                                 | true    | PTRSUB     | [object Object] | 1564     |
| 0x1401f55b2 | member           | 0x1401f55b2#55   | [object Object],[object Object]                                 | true    | CALL       |                 | 55       |
| 0x1401f55b2 | member           | 0x1401f55b2#1119 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1119     |
| 0x1401f55b2 | member           | 0x1401f55b2#1185 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1185     |
| 0x1401f55b2 | member           | 0x1401f55b2#1203 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1203     |
| 0x1401f55b2 | member           | 0x1401f55b2#1227 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1227     |
| 0x1401f55b2 | member           | 0x1401f55b2#1249 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1249     |
| 0x1401f55b2 | member           | 0x1401f55b2#1271 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1271     |
| 0x1401f55b2 | member           | 0x1401f55b2#1293 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1293     |
| 0x1401f55b2 | member           | 0x1401f55b2#1312 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1312     |
| 0x1401f55b2 | member           | 0x1401f55b2#1330 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1330     |
| 0x1401f55b2 | member           | 0x1401f55b2#1348 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1348     |
| 0x1401f55b2 | member           | 0x1401f55b2#1366 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1366     |
| 0x1401f55b2 | member           | 0x1401f55b2#1385 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1385     |
| 0x1401f55b2 | member           | 0x1401f55b2#1403 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1403     |
| 0x1401f55b2 | member           | 0x1401f55b2#1421 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1421     |
| 0x1401f55b2 | member           | 0x1401f55b2#1439 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1439     |
| 0x1401f55b2 | member           | 0x1401f55b2#1457 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1457     |
| 0x1401f55b2 | member           | 0x1401f55b2#1475 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1475     |
| 0x1401f55b2 | member           | 0x1401f55b2#1590 | [object Object]                                                 | true    | COPY       | [object Object] | 1590     |
| 0x1401f55b8 | member           | 0x1401f55b8#63   | [object Object],[object Object]                                 | true    | INT_EQUAL  | [object Object] | 63       |
| 0x1401f55bc | member           | 0x1401f55bc#69   | [object Object],[object Object]                                 | true    | CBRANCH    |                 | 69       |
| 0x1401f55c1 | member           | 0x1401f55c1#1106 | [object Object],[object Object],[object Object]                 | true    | STORE      |                 | 1106     |
| 0x1401f55c1 | member           | 0x1401f55c1#1107 | [object Object],[object Object],[object Object]                 | true    | STORE      |                 | 1107     |
| 0x1401f55c1 | member           | 0x1401f55c1#1139 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1139     |
| 0x1401f55c1 | member           | 0x1401f55c1#1140 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1140     |
| 0x1401f55c1 | member           | 0x1401f55c1#1565 | [object Object],[object Object],[object Object]                 | true    | PTRADD     | [object Object] | 1565     |
| 0x1401f55c1 | member           | 0x1401f55c1#1566 | [object Object],[object Object],[object Object]                 | true    | PTRADD     | [object Object] | 1566     |
| 0x1401f55c5 | member           | 0x1401f55c5#1111 | [object Object],[object Object],[object Object]                 | true    | STORE      |                 | 1111     |
| 0x1401f55c5 | member           | 0x1401f55c5#1112 | [object Object],[object Object],[object Object]                 | true    | STORE      |                 | 1112     |
| 0x1401f55c5 | member           | 0x1401f55c5#1141 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1141     |
| 0x1401f55c5 | member           | 0x1401f55c5#1142 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1142     |
| 0x1401f55c5 | member           | 0x1401f55c5#1567 | [object Object],[object Object],[object Object]                 | true    | PTRADD     | [object Object] | 1567     |
| 0x1401f55c8 | member           | 0x1401f55c8#81   | [object Object],[object Object],[object Object]                 | true    | STORE      |                 | 81       |
| 0x1401f55c8 | member           | 0x1401f55c8#1133 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1133     |
| 0x1401f55c8 | member           | 0x1401f55c8#1568 | [object Object],[object Object],[object Object]                 | true    | PTRADD     | [object Object] | 1568     |
| 0x1401f55cc | member           | 0x1401f55cc#84   | [object Object],[object Object],[object Object]                 | true    | STORE      |                 | 84       |
| 0x1401f55cc | member           | 0x1401f55cc#1134 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1134     |
| 0x1401f55cc | member           | 0x1401f55cc#1569 | [object Object],[object Object],[object Object]                 | true    | PTRADD     | [object Object] | 1569     |
| 0x1401f55d4 | member           | 0x1401f55d4#86   | [object Object],[object Object],[object Object]                 | true    | STORE      |                 | 86       |
| 0x1401f55d4 | member           | 0x1401f55d4#1135 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1135     |
| 0x1401f55d4 | member           | 0x1401f55d4#1592 | [object Object]                                                 | true    | CAST       | [object Object] | 1592     |
| 0x1401f55d7 | member           | 0x1401f55d7#87   | [object Object]                                                 | true    | BRANCH     |                 | 87       |
| 0x1401f55df | member           | 0x1401f55df#1570 | [object Object],[object Object]                                 | true    | PTRSUB     | [object Object] | 1570     |
| 0x1401f55e3 | member           | 0x1401f55e3#141  | [object Object],[object Object],[object Object]                 | true    | CALL       | [object Object] | 141      |
| 0x1401f55e3 | member           | 0x1401f55e3#1120 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1120     |
| 0x1401f55e3 | member           | 0x1401f55e3#1186 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1186     |
| 0x1401f55e3 | member           | 0x1401f55e3#1313 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1313     |
| 0x1401f55e3 | member           | 0x1401f55e3#1331 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1331     |
| 0x1401f55e3 | member           | 0x1401f55e3#1349 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1349     |
| 0x1401f55e3 | member           | 0x1401f55e3#1367 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1367     |
| 0x1401f55e3 | member           | 0x1401f55e3#1386 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1386     |
| 0x1401f55e3 | member           | 0x1401f55e3#1404 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1404     |
| 0x1401f55e3 | member           | 0x1401f55e3#1440 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1440     |
| 0x1401f55e3 | member           | 0x1401f55e3#1476 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1476     |
| 0x1401f55e3 | member           | 0x1401f55e3#1593 | [object Object]                                                 | true    | CAST       | [object Object] | 1593     |
| 0x1401f55e9 | member           | 0x1401f55e9#143  | [object Object],[object Object]                                 | true    | LOAD       | [object Object] | 143      |
| 0x1401f55e9 | member           | 0x1401f55e9#1571 | [object Object],[object Object],[object Object]                 | true    | PTRADD     | [object Object] | 1571     |
| 0x1401f55ee | member           | 0x1401f55ee#154  | [object Object],[object Object]                                 | true    | INT_LESS   | [object Object] | 154      |
| 0x1401f55ee | member           | 0x1401f55ee#155  | [object Object],[object Object]                                 | true    | CBRANCH    |                 | 155      |
| 0x1401f55ee | member           | 0x1401f55ee#1589 | [object Object]                                                 | true    | COPY       | [object Object] | 1589     |
| 0x1401f55ee | member           | 0x1401f55ee#1594 | [object Object]                                                 | true    | CAST       | [object Object] | 1594     |
| 0x1401f55f0 | member           | 0x1401f55f0#156  | [object Object],[object Object]                                 | true    | LOAD       | [object Object] | 156      |
| 0x1401f55f0 | member           | 0x1401f55f0#1595 | [object Object]                                                 | true    | CAST       | [object Object] | 1595     |
| 0x1401f55f3 | member           | 0x1401f55f3#158  | [object Object]                                                 | true    | BRANCH     |                 | 158      |
| 0x1401f55f3 | member           | 0x1401f55f3#1588 | [object Object]                                                 | true    | COPY       | [object Object] | 1588     |
| 0x1401f55f8 | member           | 0x1401f55f8#706  | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 706      |
| 0x1401f55fc | member           | 0x1401f55fc#163  | [object Object],[object Object]                                 | true    | LOAD       | [object Object] | 163      |
| 0x1401f55fc | member           | 0x1401f55fc#1572 | [object Object],[object Object],[object Object]                 | true    | PTRADD     | [object Object] | 1572     |
| 0x1401f5604 | member           | 0x1401f5604#1573 | [object Object],[object Object]                                 | true    | PTRSUB     | [object Object] | 1573     |
| 0x1401f5608 | member           | 0x1401f5608#1574 | [object Object],[object Object]                                 | true    | PTRSUB     | [object Object] | 1574     |
| 0x1401f560c | member           | 0x1401f560c#174  | [object Object],[object Object],[object Object]                 | true    | CALL       | [object Object] | 174      |
| 0x1401f560c | member           | 0x1401f560c#1121 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1121     |
| 0x1401f560c | member           | 0x1401f560c#1187 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1187     |
| 0x1401f560c | member           | 0x1401f560c#1205 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1205     |
| 0x1401f560c | member           | 0x1401f560c#1314 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1314     |
| 0x1401f560c | member           | 0x1401f560c#1332 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1332     |
| 0x1401f560c | member           | 0x1401f560c#1350 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1350     |
| 0x1401f560c | member           | 0x1401f560c#1368 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1368     |
| 0x1401f560c | member           | 0x1401f560c#1387 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1387     |
| 0x1401f560c | member           | 0x1401f560c#1405 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1405     |
| 0x1401f560c | member           | 0x1401f560c#1441 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1441     |
| 0x1401f560c | member           | 0x1401f560c#1477 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1477     |
| 0x1401f560c | member           | 0x1401f560c#1596 | [object Object]                                                 | true    | CAST       | [object Object] | 1596     |
| 0x1401f5621 | member           | 0x1401f5621#1559 | [object Object],[object Object]                                 | true    | LOAD       | [object Object] | 1559     |
| 0x1401f5621 | member           | 0x1401f5621#1560 | [object Object],[object Object]                                 | true    | LOAD       | [object Object] | 1560     |
| 0x1401f5621 | member           | 0x1401f5621#1575 | [object Object],[object Object],[object Object]                 | true    | PTRADD     | [object Object] | 1575     |
| 0x1401f5628 | member           | 0x1401f5628#1561 | [object Object],[object Object]                                 | true    | LOAD       | [object Object] | 1561     |
| 0x1401f5628 | member           | 0x1401f5628#1562 | [object Object],[object Object]                                 | true    | LOAD       | [object Object] | 1562     |
| 0x1401f5628 | member           | 0x1401f5628#1576 | [object Object],[object Object],[object Object]                 | true    | PTRADD     | [object Object] | 1576     |
| 0x1401f5628 | member           | 0x1401f5628#1577 | [object Object],[object Object],[object Object]                 | true    | PTRADD     | [object Object] | 1577     |
| 0x1401f5630 | member           | 0x1401f5630#209  | [object Object],[object Object],[object Object]                 | true    | STORE      |                 | 209      |
| 0x1401f5630 | member           | 0x1401f5630#1136 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1136     |
| 0x1401f5630 | member           | 0x1401f5630#1578 | [object Object],[object Object],[object Object]                 | true    | PTRADD     | [object Object] | 1578     |
| 0x1401f5634 | member           | 0x1401f5634#212  | [object Object],[object Object],[object Object]                 | true    | STORE      |                 | 212      |
| 0x1401f5634 | member           | 0x1401f5634#1137 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1137     |
| 0x1401f5634 | member           | 0x1401f5634#1579 | [object Object],[object Object],[object Object]                 | true    | PTRADD     | [object Object] | 1579     |
| 0x1401f563c | member           | 0x1401f563c#214  | [object Object],[object Object],[object Object]                 | true    | STORE      |                 | 214      |
| 0x1401f563c | member           | 0x1401f563c#1138 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1138     |
| 0x1401f563c | member           | 0x1401f563c#1597 | [object Object]                                                 | true    | CAST       | [object Object] | 1597     |
| 0x1401f563f | member           | 0x1401f563f#1580 | [object Object],[object Object]                                 | true    | PTRSUB     | [object Object] | 1580     |
| 0x1401f5643 | member           | 0x1401f5643#1581 | [object Object],[object Object]                                 | true    | PTRSUB     | [object Object] | 1581     |
| 0x1401f564a | member           | 0x1401f564a#222  | [object Object],[object Object],[object Object],[object Object] | true    | CALL       |                 | 222      |
| 0x1401f564a | member           | 0x1401f564a#1122 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1122     |
| 0x1401f564a | member           | 0x1401f564a#1188 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1188     |
| 0x1401f564a | member           | 0x1401f564a#1206 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1206     |
| 0x1401f564a | member           | 0x1401f564a#1230 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1230     |
| 0x1401f564a | member           | 0x1401f564a#1252 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1252     |
| 0x1401f564a | member           | 0x1401f564a#1274 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1274     |
| 0x1401f564a | member           | 0x1401f564a#1296 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1296     |
| 0x1401f564a | member           | 0x1401f564a#1315 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1315     |
| 0x1401f564a | member           | 0x1401f564a#1333 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1333     |
| 0x1401f564a | member           | 0x1401f564a#1351 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1351     |
| 0x1401f564a | member           | 0x1401f564a#1369 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1369     |
| 0x1401f564a | member           | 0x1401f564a#1388 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1388     |
| 0x1401f564a | member           | 0x1401f564a#1406 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1406     |
| 0x1401f564a | member           | 0x1401f564a#1442 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1442     |
| 0x1401f564a | member           | 0x1401f564a#1478 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1478     |
| 0x1401f5658 | member           | 0x1401f5658#236  | [object Object],[object Object]                                 | true    | INT_LESS   | [object Object] | 236      |
| 0x1401f5658 | member           | 0x1401f5658#237  | [object Object],[object Object]                                 | true    | CBRANCH    |                 | 237      |
| 0x1401f565a | member           | 0x1401f565a#238  | [object Object],[object Object]                                 | true    | INT_MULT   | [object Object] | 238      |
| 0x1401f565a | member           | 0x1401f565a#239  | [object Object],[object Object]                                 | true    | INT_ADD    | [object Object] | 239      |
| 0x1401f5666 | member           | 0x1401f5666#245  | [object Object],[object Object]                                 | true    | INT_LESS   | [object Object] | 245      |
| 0x1401f566d | member           | 0x1401f566d#254  | [object Object],[object Object]                                 | true    | CBRANCH    |                 | 254      |
| 0x1401f566d | member           | 0x1401f566d#1587 | [object Object]                                                 | true    | COPY       | [object Object] | 1587     |
| 0x1401f566f | member           | 0x1401f566f#255  | [object Object],[object Object]                                 | true    | INT_SUB    | [object Object] | 255      |
| 0x1401f566f | member           | 0x1401f566f#256  | [object Object],[object Object]                                 | true    | LOAD       | [object Object] | 256      |
| 0x1401f566f | member           | 0x1401f566f#1598 | [object Object]                                                 | true    | CAST       | [object Object] | 1598     |
| 0x1401f5673 | member           | 0x1401f5673#260  | [object Object],[object Object]                                 | true    | INT_SUB    | [object Object] | 260      |
| 0x1401f5676 | member           | 0x1401f5676#269  | [object Object],[object Object]                                 | true    | INT_SUB    | [object Object] | 269      |
| 0x1401f567e | member           | 0x1401f567e#286  | [object Object],[object Object]                                 | true    | INT_LESS   | [object Object] | 286      |
| 0x1401f567e | member           | 0x1401f567e#288  | [object Object],[object Object]                                 | true    | CBRANCH    |                 | 288      |
| 0x1401f5684 | member           | 0x1401f5684#289  | [object Object],[object Object]                                 | true    | INT_MULT   | [object Object] | 289      |
| 0x1401f5684 | member           | 0x1401f5684#290  | [object Object],[object Object]                                 | true    | INT_ADD    | [object Object] | 290      |
| 0x1401f568f | member           | 0x1401f568f#295  | [object Object],[object Object],[object Object]                 | true    | CALL       |                 | 295      |
| 0x1401f568f | member           | 0x1401f568f#704  | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 704      |
| 0x1401f568f | member           | 0x1401f568f#726  | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 726      |
| 0x1401f568f | member           | 0x1401f568f#1124 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1124     |
| 0x1401f568f | member           | 0x1401f568f#1190 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1190     |
| 0x1401f568f | member           | 0x1401f568f#1208 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1208     |
| 0x1401f568f | member           | 0x1401f568f#1232 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1232     |
| 0x1401f568f | member           | 0x1401f568f#1254 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1254     |
| 0x1401f568f | member           | 0x1401f568f#1276 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1276     |
| 0x1401f568f | member           | 0x1401f568f#1298 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1298     |
| 0x1401f568f | member           | 0x1401f568f#1317 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1317     |
| 0x1401f568f | member           | 0x1401f568f#1335 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1335     |
| 0x1401f568f | member           | 0x1401f568f#1353 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1353     |
| 0x1401f568f | member           | 0x1401f568f#1371 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1371     |
| 0x1401f568f | member           | 0x1401f568f#1390 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1390     |
| 0x1401f568f | member           | 0x1401f568f#1408 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1408     |
| 0x1401f568f | member           | 0x1401f568f#1444 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1444     |
| 0x1401f568f | member           | 0x1401f568f#1480 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1480     |
| 0x1401f5694 | member           | 0x1401f5694#298  | [object Object]                                                 | true    | COPY       | [object Object] | 298      |
| 0x1401f5694 | member           | 0x1401f5694#1148 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1148     |
| 0x1401f5694 | member           | 0x1401f5694#1202 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1202     |
| 0x1401f5694 | member           | 0x1401f5694#1220 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1220     |
| 0x1401f5694 | member           | 0x1401f5694#1244 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1244     |
| 0x1401f5694 | member           | 0x1401f5694#1266 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1266     |
| 0x1401f5694 | member           | 0x1401f5694#1328 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1328     |
| 0x1401f5694 | member           | 0x1401f5694#1347 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1347     |
| 0x1401f5694 | member           | 0x1401f5694#1364 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1364     |
| 0x1401f5694 | member           | 0x1401f5694#1382 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1382     |
| 0x1401f5694 | member           | 0x1401f5694#1402 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1402     |
| 0x1401f5694 | member           | 0x1401f5694#1420 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1420     |
| 0x1401f5694 | member           | 0x1401f5694#1456 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1456     |
| 0x1401f5694 | member           | 0x1401f5694#1492 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1492     |
| 0x1401f5698 | member           | 0x1401f5698#301  | [object Object]                                                 | true    | COPY       | [object Object] | 301      |
| 0x1401f56a0 | member           | 0x1401f56a0#1222 | [object Object],[object Object]                                 | true    | INT_AND    | [object Object] | 1222     |
| 0x1401f56ac | member           | 0x1401f56ac#318  | [object Object],[object Object]                                 | true    | INT_LESS   | [object Object] | 318      |
| 0x1401f56ac | member           | 0x1401f56ac#319  | [object Object],[object Object]                                 | true    | CBRANCH    |                 | 319      |
| 0x1401f56ae | member           | 0x1401f56ae#320  | [object Object],[object Object]                                 | true    | INT_MULT   | [object Object] | 320      |
| 0x1401f56ae | member           | 0x1401f56ae#321  | [object Object],[object Object]                                 | true    | INT_ADD    | [object Object] | 321      |
| 0x1401f56b6 | member           | 0x1401f56b6#1311 | [object Object],[object Object]                                 | true    | PIECE      | [object Object] | 1311     |
| 0x1401f56ba | member           | 0x1401f56ba#327  | [object Object],[object Object]                                 | true    | INT_LESS   | [object Object] | 327      |
| 0x1401f56c1 | member           | 0x1401f56c1#336  | [object Object],[object Object]                                 | true    | CBRANCH    |                 | 336      |
| 0x1401f56c1 | member           | 0x1401f56c1#1586 | [object Object]                                                 | true    | COPY       | [object Object] | 1586     |
| 0x1401f56c3 | member           | 0x1401f56c3#337  | [object Object],[object Object]                                 | true    | INT_ADD    | [object Object] | 337      |
| 0x1401f56c3 | member           | 0x1401f56c3#338  | [object Object],[object Object]                                 | true    | LOAD       | [object Object] | 338      |
| 0x1401f56c3 | member           | 0x1401f56c3#1600 | [object Object]                                                 | true    | CAST       | [object Object] | 1600     |
| 0x1401f56c7 | member           | 0x1401f56c7#342  | [object Object],[object Object]                                 | true    | INT_SUB    | [object Object] | 342      |
| 0x1401f56ca | member           | 0x1401f56ca#351  | [object Object],[object Object]                                 | true    | INT_SUB    | [object Object] | 351      |
| 0x1401f56d2 | member           | 0x1401f56d2#368  | [object Object],[object Object]                                 | true    | INT_LESS   | [object Object] | 368      |
| 0x1401f56d2 | member           | 0x1401f56d2#370  | [object Object],[object Object]                                 | true    | CBRANCH    |                 | 370      |
| 0x1401f56d8 | member           | 0x1401f56d8#371  | [object Object],[object Object]                                 | true    | INT_MULT   | [object Object] | 371      |
| 0x1401f56d8 | member           | 0x1401f56d8#372  | [object Object],[object Object]                                 | true    | INT_ADD    | [object Object] | 372      |
| 0x1401f56e3 | member           | 0x1401f56e3#377  | [object Object],[object Object],[object Object]                 | true    | CALL       |                 | 377      |
| 0x1401f56e3 | member           | 0x1401f56e3#700  | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 700      |
| 0x1401f56e3 | member           | 0x1401f56e3#721  | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 721      |
| 0x1401f56e3 | member           | 0x1401f56e3#1126 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1126     |
| 0x1401f56e3 | member           | 0x1401f56e3#1192 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1192     |
| 0x1401f56e3 | member           | 0x1401f56e3#1210 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1210     |
| 0x1401f56e3 | member           | 0x1401f56e3#1234 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1234     |
| 0x1401f56e3 | member           | 0x1401f56e3#1256 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1256     |
| 0x1401f56e3 | member           | 0x1401f56e3#1278 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1278     |
| 0x1401f56e3 | member           | 0x1401f56e3#1300 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1300     |
| 0x1401f56e3 | member           | 0x1401f56e3#1392 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1392     |
| 0x1401f56e3 | member           | 0x1401f56e3#1410 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1410     |
| 0x1401f56e3 | member           | 0x1401f56e3#1446 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1446     |
| 0x1401f56e3 | member           | 0x1401f56e3#1482 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1482     |
| 0x1401f56e8 | member           | 0x1401f56e8#380  | [object Object]                                                 | true    | COPY       | [object Object] | 380      |
| 0x1401f56e8 | member           | 0x1401f56e8#1145 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1145     |
| 0x1401f56e8 | member           | 0x1401f56e8#1199 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1199     |
| 0x1401f56e8 | member           | 0x1401f56e8#1217 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1217     |
| 0x1401f56e8 | member           | 0x1401f56e8#1241 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1241     |
| 0x1401f56e8 | member           | 0x1401f56e8#1263 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1263     |
| 0x1401f56e8 | member           | 0x1401f56e8#1285 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1285     |
| 0x1401f56e8 | member           | 0x1401f56e8#1307 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1307     |
| 0x1401f56e8 | member           | 0x1401f56e8#1398 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1398     |
| 0x1401f56e8 | member           | 0x1401f56e8#1417 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1417     |
| 0x1401f56e8 | member           | 0x1401f56e8#1452 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1452     |
| 0x1401f56e8 | member           | 0x1401f56e8#1489 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1489     |
| 0x1401f56ec | member           | 0x1401f56ec#383  | [object Object]                                                 | true    | COPY       | [object Object] | 383      |
| 0x1401f56f4 | member           | 0x1401f56f4#386  | [object Object]                                                 | true    | COPY       | [object Object] | 386      |
| 0x1401f5700 | member           | 0x1401f5700#400  | [object Object],[object Object]                                 | true    | INT_LESS   | [object Object] | 400      |
| 0x1401f5700 | member           | 0x1401f5700#401  | [object Object],[object Object]                                 | true    | CBRANCH    |                 | 401      |
| 0x1401f5702 | member           | 0x1401f5702#403  | [object Object],[object Object]                                 | true    | INT_ADD    | [object Object] | 403      |
| 0x1401f5705 | member           | 0x1401f5705#1384 | [object Object],[object Object]                                 | true    | PIECE      | [object Object] | 1384     |
| 0x1401f5709 | member           | 0x1401f5709#414  | [object Object],[object Object]                                 | true    | INT_LESS   | [object Object] | 414      |
| 0x1401f5710 | member           | 0x1401f5710#423  | [object Object],[object Object]                                 | true    | CBRANCH    |                 | 423      |
| 0x1401f5710 | member           | 0x1401f5710#1585 | [object Object]                                                 | true    | COPY       | [object Object] | 1585     |
| 0x1401f5712 | member           | 0x1401f5712#424  | [object Object],[object Object]                                 | true    | INT_ADD    | [object Object] | 424      |
| 0x1401f5712 | member           | 0x1401f5712#425  | [object Object],[object Object]                                 | true    | LOAD       | [object Object] | 425      |
| 0x1401f5712 | member           | 0x1401f5712#1602 | [object Object]                                                 | true    | CAST       | [object Object] | 1602     |
| 0x1401f5716 | member           | 0x1401f5716#429  | [object Object],[object Object]                                 | true    | INT_SUB    | [object Object] | 429      |
| 0x1401f5719 | member           | 0x1401f5719#438  | [object Object],[object Object]                                 | true    | INT_SUB    | [object Object] | 438      |
| 0x1401f5721 | member           | 0x1401f5721#455  | [object Object],[object Object]                                 | true    | INT_LESS   | [object Object] | 455      |
| 0x1401f5721 | member           | 0x1401f5721#457  | [object Object],[object Object]                                 | true    | CBRANCH    |                 | 457      |
| 0x1401f5723 | member           | 0x1401f5723#460  | [object Object],[object Object]                                 | true    | INT_ADD    | [object Object] | 460      |
| 0x1401f572a | member           | 0x1401f572a#470  | [object Object],[object Object],[object Object]                 | true    | CALL       |                 | 470      |
| 0x1401f572a | member           | 0x1401f572a#697  | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 697      |
| 0x1401f572a | member           | 0x1401f572a#719  | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 719      |
| 0x1401f572a | member           | 0x1401f572a#1129 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1129     |
| 0x1401f572a | member           | 0x1401f572a#1195 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1195     |
| 0x1401f572a | member           | 0x1401f572a#1213 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1213     |
| 0x1401f572a | member           | 0x1401f572a#1237 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1237     |
| 0x1401f572a | member           | 0x1401f572a#1259 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1259     |
| 0x1401f572a | member           | 0x1401f572a#1281 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1281     |
| 0x1401f572a | member           | 0x1401f572a#1303 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1303     |
| 0x1401f572a | member           | 0x1401f572a#1322 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1322     |
| 0x1401f572a | member           | 0x1401f572a#1358 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1358     |
| 0x1401f572a | member           | 0x1401f572a#1376 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1376     |
| 0x1401f572a | member           | 0x1401f572a#1485 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1485     |
| 0x1401f572f | member           | 0x1401f572f#473  | [object Object]                                                 | true    | COPY       | [object Object] | 473      |
| 0x1401f572f | member           | 0x1401f572f#1143 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1143     |
| 0x1401f572f | member           | 0x1401f572f#1197 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1197     |
| 0x1401f572f | member           | 0x1401f572f#1215 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1215     |
| 0x1401f572f | member           | 0x1401f572f#1239 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1239     |
| 0x1401f572f | member           | 0x1401f572f#1261 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1261     |
| 0x1401f572f | member           | 0x1401f572f#1283 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1283     |
| 0x1401f572f | member           | 0x1401f572f#1305 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1305     |
| 0x1401f572f | member           | 0x1401f572f#1324 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1324     |
| 0x1401f572f | member           | 0x1401f572f#1360 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1360     |
| 0x1401f572f | member           | 0x1401f572f#1378 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1378     |
| 0x1401f572f | member           | 0x1401f572f#1487 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1487     |
| 0x1401f5733 | member           | 0x1401f5733#476  | [object Object]                                                 | true    | COPY       | [object Object] | 476      |
| 0x1401f573b | member           | 0x1401f573b#479  | [object Object]                                                 | true    | COPY       | [object Object] | 479      |
| 0x1401f573f | member           | 0x1401f573f#1144 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1144     |
| 0x1401f573f | member           | 0x1401f573f#1198 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1198     |
| 0x1401f573f | member           | 0x1401f573f#1216 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1216     |
| 0x1401f573f | member           | 0x1401f573f#1240 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1240     |
| 0x1401f573f | member           | 0x1401f573f#1262 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1262     |
| 0x1401f573f | member           | 0x1401f573f#1284 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1284     |
| 0x1401f573f | member           | 0x1401f573f#1306 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1306     |
| 0x1401f573f | member           | 0x1401f573f#1325 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1325     |
| 0x1401f573f | member           | 0x1401f573f#1361 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1361     |
| 0x1401f573f | member           | 0x1401f573f#1379 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1379     |
| 0x1401f573f | member           | 0x1401f573f#1400 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1400     |
| 0x1401f573f | member           | 0x1401f573f#1436 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1436     |
| 0x1401f573f | member           | 0x1401f573f#1454 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1454     |
| 0x1401f573f | member           | 0x1401f573f#1488 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1488     |
| 0x1401f573f | member           | 0x1401f573f#1582 | [object Object],[object Object]                                 | true    | PTRSUB     | [object Object] | 1582     |
| 0x1401f5743 | member           | 0x1401f5743#92   | [object Object],[object Object]                                 | true    | CALL       |                 | 92       |
| 0x1401f5743 | member           | 0x1401f5743#1130 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1130     |
| 0x1401f5743 | member           | 0x1401f5743#1196 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1196     |
| 0x1401f5743 | member           | 0x1401f5743#1214 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1214     |
| 0x1401f5743 | member           | 0x1401f5743#1238 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1238     |
| 0x1401f5743 | member           | 0x1401f5743#1260 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1260     |
| 0x1401f5743 | member           | 0x1401f5743#1282 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1282     |
| 0x1401f5743 | member           | 0x1401f5743#1304 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1304     |
| 0x1401f5743 | member           | 0x1401f5743#1323 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1323     |
| 0x1401f5743 | member           | 0x1401f5743#1359 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1359     |
| 0x1401f5743 | member           | 0x1401f5743#1377 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1377     |
| 0x1401f5743 | member           | 0x1401f5743#1396 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1396     |
| 0x1401f5743 | member           | 0x1401f5743#1432 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1432     |
| 0x1401f5743 | member           | 0x1401f5743#1450 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1450     |
| 0x1401f5743 | member           | 0x1401f5743#1486 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1486     |
| 0x1401f5748 | member           | 0x1401f5748#93   | [object Object]                                                 | true    | COPY       | [object Object] | 93       |
| 0x1401f5769 | member           | 0x1401f5769#135  | [object Object],[object Object]                                 | true    | RETURN     |                 | 135      |
| 0x1401f5769 | member           | 0x1401f5769#1131 | [object Object]                                                 | true    | COPY       | [object Object] | 1131     |
| 0x1401f576f | member           | 0x1401f576f#490  | [object Object],[object Object]                                 | true    | CALLOTHER  | [object Object] | 490      |
| 0x1401f576f | member           | 0x1401f576f#491  | [object Object],[object Object]                                 | true    | CALLIND    |                 | 491      |
| 0x1401f576f | member           | 0x1401f576f#1123 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1123     |
| 0x1401f576f | member           | 0x1401f576f#1189 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1189     |
| 0x1401f576f | member           | 0x1401f576f#1207 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1207     |
| 0x1401f576f | member           | 0x1401f576f#1231 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1231     |
| 0x1401f576f | member           | 0x1401f576f#1253 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1253     |
| 0x1401f576f | member           | 0x1401f576f#1275 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1275     |
| 0x1401f576f | member           | 0x1401f576f#1297 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1297     |
| 0x1401f576f | member           | 0x1401f576f#1316 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1316     |
| 0x1401f576f | member           | 0x1401f576f#1352 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1352     |
| 0x1401f576f | member           | 0x1401f576f#1370 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1370     |
| 0x1401f576f | member           | 0x1401f576f#1479 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1479     |
| 0x1401f576f | member           | 0x1401f576f#1599 | [object Object]                                                 | true    | CAST       | [object Object] | 1599     |
| 0x1401f5771 | member           | 0x1401f5771#1146 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1146     |
| 0x1401f5771 | member           | 0x1401f5771#1200 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1200     |
| 0x1401f5771 | member           | 0x1401f5771#1218 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1218     |
| 0x1401f5771 | member           | 0x1401f5771#1242 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1242     |
| 0x1401f5771 | member           | 0x1401f5771#1264 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1264     |
| 0x1401f5771 | member           | 0x1401f5771#1286 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1286     |
| 0x1401f5771 | member           | 0x1401f5771#1308 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1308     |
| 0x1401f5771 | member           | 0x1401f5771#1327 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1327     |
| 0x1401f5771 | member           | 0x1401f5771#1363 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1363     |
| 0x1401f5771 | member           | 0x1401f5771#1381 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1381     |
| 0x1401f5771 | member           | 0x1401f5771#1490 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1490     |
| 0x1401f5776 | member           | 0x1401f5776#487  | [object Object],[object Object]                                 | true    | CALLOTHER  | [object Object] | 487      |
| 0x1401f5776 | member           | 0x1401f5776#488  | [object Object],[object Object]                                 | true    | CALLIND    |                 | 488      |
| 0x1401f5776 | member           | 0x1401f5776#1125 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1125     |
| 0x1401f5776 | member           | 0x1401f5776#1191 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1191     |
| 0x1401f5776 | member           | 0x1401f5776#1209 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1209     |
| 0x1401f5776 | member           | 0x1401f5776#1233 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1233     |
| 0x1401f5776 | member           | 0x1401f5776#1255 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1255     |
| 0x1401f5776 | member           | 0x1401f5776#1277 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1277     |
| 0x1401f5776 | member           | 0x1401f5776#1299 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1299     |
| 0x1401f5776 | member           | 0x1401f5776#1318 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1318     |
| 0x1401f5776 | member           | 0x1401f5776#1354 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1354     |
| 0x1401f5776 | member           | 0x1401f5776#1372 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1372     |
| 0x1401f5776 | member           | 0x1401f5776#1481 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1481     |
| 0x1401f5776 | member           | 0x1401f5776#1601 | [object Object]                                                 | true    | CAST       | [object Object] | 1601     |
| 0x1401f5778 | member           | 0x1401f5778#1147 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1147     |
| 0x1401f5778 | member           | 0x1401f5778#1201 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1201     |
| 0x1401f5778 | member           | 0x1401f5778#1219 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1219     |
| 0x1401f5778 | member           | 0x1401f5778#1243 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1243     |
| 0x1401f5778 | member           | 0x1401f5778#1265 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1265     |
| 0x1401f5778 | member           | 0x1401f5778#1287 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1287     |
| 0x1401f5778 | member           | 0x1401f5778#1309 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1309     |
| 0x1401f5778 | member           | 0x1401f5778#1329 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1329     |
| 0x1401f5778 | member           | 0x1401f5778#1365 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1365     |
| 0x1401f5778 | member           | 0x1401f5778#1383 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1383     |
| 0x1401f5778 | member           | 0x1401f5778#1491 | [object Object],[object Object]                                 | true    | MULTIEQUAL | [object Object] | 1491     |
| 0x1401f577d | member           | 0x1401f577d#481  | [object Object],[object Object]                                 | true    | CALLOTHER  | [object Object] | 481      |
| 0x1401f577d | member           | 0x1401f577d#482  | [object Object],[object Object]                                 | true    | CALLIND    |                 | 482      |
| 0x1401f577d | member           | 0x1401f577d#1127 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1127     |
| 0x1401f577d | member           | 0x1401f577d#1193 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1193     |
| 0x1401f577d | member           | 0x1401f577d#1211 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1211     |
| 0x1401f577d | member           | 0x1401f577d#1235 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1235     |
| 0x1401f577d | member           | 0x1401f577d#1257 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1257     |
| 0x1401f577d | member           | 0x1401f577d#1279 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1279     |
| 0x1401f577d | member           | 0x1401f577d#1301 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1301     |
| 0x1401f577d | member           | 0x1401f577d#1320 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1320     |
| 0x1401f577d | member           | 0x1401f577d#1356 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1356     |
| 0x1401f577d | member           | 0x1401f577d#1374 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1374     |
| 0x1401f577d | member           | 0x1401f577d#1483 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1483     |
| 0x1401f577d | member           | 0x1401f577d#1603 | [object Object]                                                 | true    | CAST       | [object Object] | 1603     |
| 0x1401f577f | member           | 0x1401f577f#483  | [object Object],[object Object]                                 | true    | CALLOTHER  | [object Object] | 483      |
| 0x1401f577f | member           | 0x1401f577f#484  | [object Object]                                                 | true    | CALLIND    | [object Object] | 484      |
| 0x1401f577f | member           | 0x1401f577f#485  | [object Object],[object Object]                                 | true    | RETURN     |                 | 485      |
| 0x1401f577f | member           | 0x1401f577f#1128 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1128     |
| 0x1401f577f | member           | 0x1401f577f#1132 | [object Object]                                                 | true    | COPY       | [object Object] | 1132     |
| 0x1401f577f | member           | 0x1401f577f#1194 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1194     |
| 0x1401f577f | member           | 0x1401f577f#1212 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1212     |
| 0x1401f577f | member           | 0x1401f577f#1236 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1236     |
| 0x1401f577f | member           | 0x1401f577f#1258 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1258     |
| 0x1401f577f | member           | 0x1401f577f#1280 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1280     |
| 0x1401f577f | member           | 0x1401f577f#1302 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1302     |
| 0x1401f577f | member           | 0x1401f577f#1321 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1321     |
| 0x1401f577f | member           | 0x1401f577f#1357 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1357     |
| 0x1401f577f | member           | 0x1401f577f#1375 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1375     |
| 0x1401f577f | member           | 0x1401f577f#1484 | [object Object],[object Object]                                 | true    | INDIRECT   | [object Object] | 1484     |
| 0x1401f577f | member           | 0x1401f577f#1604 | [object Object]                                                 | true    | CAST       | [object Object] | 1604     |
| 0x1401f577f | member           | 0x1401f577f#1605 | [object Object]                                                 | true    | CAST       | [object Object] | 1605     |

## normalized_result.native_value_flow.parameter_uses

| input_index | ordinal | use              |
|-------------|---------|------------------|
| 0           | 0       | 0x1401f55b2#1590 |
| 0           | 0       | 0x1401f55c1#1565 |
| 0           | 0       | 0x1401f55c1#1566 |
| 1           | 0       | 0x1401f55c5#1111 |
| 0           | 0       | 0x1401f55c5#1567 |
| 0           | 0       | 0x1401f55c8#1568 |
| 0           | 0       | 0x1401f55cc#1569 |
| 0           | 0       | 0x1401f55d4#1592 |
| 2           | 1       | 0x1401f55e3#141  |
| 1           | 0       | 0x1401f564a#222  |
| 0           | 0       | 0x1401f5748#93   |

## normalized_result.native_value_flow.parameters

| data_type     | name    | ordinal |
|---------------|---------|---------|
| /undefined8 * | param_1 | 0       |
| /undefined8   | param_2 | 1       |

## normalized_result.native_value_flow.provenance

ghidra-high-pcode

## normalized_result.native_value_flow.truncated

false

## normalized_result.outgoing_references

| kind            | source_address | source_procedure | target_address           | target_procedure |
|-----------------|----------------|------------------|--------------------------|------------------|
| [object Object] | 0x1401f5580    | [object Object]  | stack:0x18               |                  |
| [object Object] | 0x1401f5588    | [object Object]  | stack:0xffffffffffffffa1 |                  |
| [object Object] | 0x1401f5594    | [object Object]  | 0x1404c7ac0              |                  |
| [object Object] | 0x1401f559e    | [object Object]  | stack:0xffffffffffffffd8 |                  |
| [object Object] | 0x1401f55a8    | [object Object]  | stack:0xffffffffffffff48 |                  |
| [object Object] | 0x1401f55ae    | [object Object]  | stack:0xffffffffffffffb8 |                  |
| [object Object] | 0x1401f55b2    | [object Object]  | 0x1401f5440              | [object Object]  |
| [object Object] | 0x1401f55b8    | [object Object]  | stack:0xffffffffffffffc8 |                  |
| [object Object] | 0x1401f55bc    | [object Object]  | 0x1401f55dc              | [object Object]  |
| [object Object] | 0x1401f55d7    | [object Object]  | 0x1401f573f              | [object Object]  |
| [object Object] | 0x1401f55df    | [object Object]  | stack:0xffffffffffffff98 |                  |
| [object Object] | 0x1401f55e3    | [object Object]  | 0x14030bba0              | [object Object]  |
| [object Object] | 0x1401f55ee    | [object Object]  | 0x1401f55f5              | [object Object]  |
| [object Object] | 0x1401f55f3    | [object Object]  | 0x1401f55f8              | [object Object]  |
| [object Object] | 0x1401f55f8    | [object Object]  | stack:0xffffffffffffff48 |                  |
| [object Object] | 0x1401f5600    | [object Object]  | stack:0xffffffffffffff50 |                  |
| [object Object] | 0x1401f5604    | [object Object]  | stack:0xffffffffffffff48 |                  |
| [object Object] | 0x1401f5608    | [object Object]  | stack:0xffffffffffffff78 |                  |
| [object Object] | 0x1401f560c    | [object Object]  | 0x140028d00              | [object Object]  |
| [object Object] | 0x1401f5615    | [object Object]  | stack:0xffffffffffffff58 |                  |
| [object Object] | 0x1401f5619    | [object Object]  | stack:0xffffffffffffff68 |                  |
| [object Object] | 0x1401f561d    | [object Object]  | stack:0xffffffffffffff70 |                  |
| [object Object] | 0x1401f5624    | [object Object]  | stack:0xffffffffffffff58 |                  |
| [object Object] | 0x1401f562c    | [object Object]  | stack:0xffffffffffffff68 |                  |
| [object Object] | 0x1401f563f    | [object Object]  | stack:0xffffffffffffff58 |                  |
| [object Object] | 0x1401f5643    | [object Object]  | stack:0xffffffffffffffb8 |                  |
| [object Object] | 0x1401f564a    | [object Object]  | 0x14002bae0              | [object Object]  |
| [object Object] | 0x1401f5650    | [object Object]  | stack:0xffffffffffffff70 |                  |
| [object Object] | 0x1401f5658    | [object Object]  | 0x1401f5694              | [object Object]  |
| [object Object] | 0x1401f5662    | [object Object]  | stack:0xffffffffffffff58 |                  |
| [object Object] | 0x1401f566d    | [object Object]  | 0x1401f568f              | [object Object]  |
| [object Object] | 0x1401f567e    | [object Object]  | 0x1401f576a              | [object Object]  |
| [object Object] | 0x1401f568f    | [object Object]  | 0x1403272f0              | [object Object]  |
| [object Object] | 0x1401f5694    | [object Object]  | stack:0xffffffffffffff68 |                  |
| [object Object] | 0x1401f5698    | [object Object]  | stack:0xffffffffffffff70 |                  |
| [object Object] | 0x1401f56a0    | [object Object]  | stack:0xffffffffffffff58 |                  |
| [object Object] | 0x1401f56a4    | [object Object]  | stack:0xffffffffffffff90 |                  |
| [object Object] | 0x1401f56ac    | [object Object]  | 0x1401f56e8              | [object Object]  |
| [object Object] | 0x1401f56b6    | [object Object]  | stack:0xffffffffffffff78 |                  |
| [object Object] | 0x1401f56c1    | [object Object]  | 0x1401f56e3              | [object Object]  |
| [object Object] | 0x1401f56d2    | [object Object]  | 0x1401f5771              | [object Object]  |
| [object Object] | 0x1401f56e3    | [object Object]  | 0x1403272f0              | [object Object]  |
| [object Object] | 0x1401f56e8    | [object Object]  | stack:0xffffffffffffff88 |                  |
| [object Object] | 0x1401f56ec    | [object Object]  | stack:0xffffffffffffff90 |                  |
| [object Object] | 0x1401f56f4    | [object Object]  | stack:0xffffffffffffff78 |                  |
| [object Object] | 0x1401f56f8    | [object Object]  | stack:0xffffffffffffffb0 |                  |
| [object Object] | 0x1401f5700    | [object Object]  | 0x1401f572f              | [object Object]  |
| [object Object] | 0x1401f5705    | [object Object]  | stack:0xffffffffffffff98 |                  |
| [object Object] | 0x1401f5710    | [object Object]  | 0x1401f572a              | [object Object]  |
| [object Object] | 0x1401f5721    | [object Object]  | 0x1401f5778              | [object Object]  |
| [object Object] | 0x1401f572a    | [object Object]  | 0x1403272f0              | [object Object]  |
| [object Object] | 0x1401f572f    | [object Object]  | stack:0xffffffffffffffa8 |                  |
| [object Object] | 0x1401f5733    | [object Object]  | stack:0xffffffffffffffb0 |                  |
| [object Object] | 0x1401f573b    | [object Object]  | stack:0xffffffffffffff98 |                  |
| [object Object] | 0x1401f573f    | [object Object]  | stack:0xffffffffffffffb8 |                  |
| [object Object] | 0x1401f5743    | [object Object]  | 0x1400055b0              | [object Object]  |
| [object Object] | 0x1401f574b    | [object Object]  | stack:0xffffffffffffffd8 |                  |
| [object Object] | 0x1401f5752    | [object Object]  | 0x140327740              | [object Object]  |
| [object Object] | 0x1401f5757    | [object Object]  | stack:0x10               |                  |

## normalized_result.procedure.address

0x1401f5580

## normalized_result.procedure.body.available

true

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.body.non_contiguous

false

## normalized_result.procedure.body.provenance

ghidra-function-body-address-set

## normalized_result.procedure.body.ranges

| end         | start       |
|-------------|-------------|
| 0x1401f577f | 0x1401f5580 |

## normalized_result.procedure.body.span_bytes

512

## normalized_result.procedure.body.total_bytes

512

## normalized_result.procedure.classification

| Key          | Value                   |
|--------------|-------------------------|
| external     | false                   |
| provenance   | ghidra-function-manager |
| thunk        | false                   |
| thunk_target | null                    |

## normalized_result.procedure.locals

| description                               | provenance               |
|-------------------------------------------|--------------------------|
| undefined8 local_28 @ Stack[-0x28]:8      | ghidra-function-database |
| undefined8 local_38 @ Stack[-0x38]:8      | ghidra-function-database |
| undefined local_48 @ Stack[-0x48]:1       | ghidra-function-database |
| undefined8 local_50 @ Stack[-0x50]:8      | ghidra-function-database |
| undefined8 local_58 @ Stack[-0x58]:8      | ghidra-function-database |
| undefined local_5f @ Stack[-0x5f]:1       | ghidra-function-database |
| undefined8 local_68 @ Stack[-0x68]:8      | ghidra-function-database |
| undefined8 local_70 @ Stack[-0x70]:8      | ghidra-function-database |
| undefined8 local_78 @ Stack[-0x78]:8      | ghidra-function-database |
| undefined8 local_88 @ Stack[-0x88]:8      | ghidra-function-database |
| undefined1[16] local_98 @ Stack[-0x98]:16 | ghidra-function-database |
| undefined1[16] local_a8 @ Stack[-0xa8]:16 | ghidra-function-database |
| undefined8 local_b0 @ Stack[-0xb0]:8      | ghidra-function-database |
| undefined8 local_b8 @ Stack[-0xb8]:8      | ghidra-function-database |
| undefined8 local_res10 @ Stack[0x10]:8    | ghidra-function-database |
| undefined8 local_res18 @ Stack[0x18]:8    | ghidra-function-database |

## normalized_result.procedure.name

FUN_1401f5580

## normalized_result.procedure.signature

undefined FUN_1401f5580()

## normalized_result.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1401f5580(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_e8 [48];
  undefined8 *local_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  undefined2 local_88;
  undefined6 uStack_86;
  undefined8 local_78;
  ulonglong local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  undefined8 local_58;
  ulonglong local_50;
  undefined1 local_48 [16];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_1404c7ac0 ^ (ulonglong)auStack_e8;
  local_b8 = param_1;
  FUN_1401f5440(local_48);
  if (local_38 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 7;
    *(undefined2 *)param_1 = 0;
    goto LAB_1401f573f;
  }
  puVar3 = (undefined8 *)FUN_14030bba0(&local_68,param_2);
  local_b8 = puVar3;
  if (0xf < (ulonglong)puVar3[3]) {
    local_b8 = (undefined8 *)*puVar3;
  }
  local_b0 = puVar3[2];
  puVar4 = (ulonglong *)FUN_140028d00(&local_88,&local_b8);
  local_a8 = *puVar4;
  uStack_a0 = puVar4[1];
  local_98 = puVar4[2];
  uStack_90 = puVar4[3];
  puVar4[2] = 0;
  puVar4[3] = 7;
  *(undefined2 *)puVar4 = 0;
  FUN_14002bae0(param_1,local_48,&local_a8);
  if (uStack_90 < 8) {
LAB_1401f5694:
    local_98 = 0;
    uStack_90 = 7;
    local_a8 = local_a8 & 0xffffffffffff0000;
    if (7 < local_70) {
      uVar7 = local_70 * 2 + 2;
      lVar2 = CONCAT62(uStack_86,local_88);
      lVar6 = lVar2;
      if (0xfff < uVar7) {
        lVar6 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar6) - 8U) goto LAB_1401f5771;
        uVar7 = local_70 * 2 + 0x29;
      }
      thunk_FUN_140327e20(lVar6,uVar7);
    }
    local_78 = 0;
    local_70 = 7;
    local_88 = 0;
    if (0xf < local_50) {
      uVar7 = local_50 + 1;
      lVar2 = CONCAT71(uStack_67,local_68);
      lVar6 = lVar2;
      if (0xfff < uVar7) {
        lVar6 = *(longlong *)(lVar2 + -8);
        if (0x1f < (lVar2 - lVar6) - 8U) goto LAB_1401f5778;
        uVar7 = local_50 + 0x28;
      }
      thunk_FUN_140327e20(lVar6,uVar7);
    }
    local_58 = 0;
    local_50 = 0xf;
    local_68 = 0;
LAB_1401f573f:
    FUN_1400055b0(local_48);
    return param_1;
  }
  uVar7 = uStack_90 * 2 + 2;
  uVar5 = local_a8;
  if (uVar7 < 0x1000) {
LAB_1401f568f:
    thunk_FUN_140327e20(uVar5,uVar7);
    goto LAB_1401f5694;
  }
  uVar5 = *(ulonglong *)(local_a8 - 8);
  if ((local_a8 - uVar5) - 8 < 0x20) {
    uVar7 = uStack_90 * 2 + 0x29;
    goto LAB_1401f568f;
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
LAB_1401f5771:
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
LAB_1401f5778:
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
  pcVar1 = (code *)swi(3);
  puVar3 = (undefined8 *)(*pcVar1)();
  return puVar3;
}



## normalized_result.referenced_names

| address     | source_address | value                   |
|-------------|----------------|-------------------------|
| 0x1400055b0 | 0x1401f5743    | FUN_1400055b0           |
| 0x140028d00 | 0x1401f560c    | FUN_140028d00           |
| 0x14002bae0 | 0x1401f564a    | FUN_14002bae0           |
| 0x1401f5440 | 0x1401f55b2    | FUN_1401f5440           |
| 0x1401f55dc | 0x1401f55bc    | LAB_1401f55dc           |
| 0x1401f55f5 | 0x1401f55ee    | LAB_1401f55f5           |
| 0x1401f55f8 | 0x1401f55f3    | LAB_1401f55f8           |
| 0x1401f568f | 0x1401f566d    | LAB_1401f568f           |
| 0x1401f5694 | 0x1401f5658    | LAB_1401f5694           |
| 0x1401f56e3 | 0x1401f56c1    | LAB_1401f56e3           |
| 0x1401f56e8 | 0x1401f56ac    | LAB_1401f56e8           |
| 0x1401f572a | 0x1401f5710    | LAB_1401f572a           |
| 0x1401f572f | 0x1401f5700    | LAB_1401f572f           |
| 0x1401f573f | 0x1401f55d7    | LAB_1401f573f           |
| 0x1401f576a | 0x1401f567e    | LAB_1401f576a           |
| 0x1401f5771 | 0x1401f56d2    | LAB_1401f5771           |
| 0x1401f5778 | 0x1401f5721    | LAB_1401f5778           |
| 0x14030bba0 | 0x1401f55e3    | FUN_14030bba0           |
| 0x1403272f0 | 0x1401f568f    | thunk_FUN_140327e20     |
| 0x1403272f0 | 0x1401f56e3    | thunk_FUN_140327e20     |
| 0x1403272f0 | 0x1401f572a    | thunk_FUN_140327e20     |
| 0x140327740 | 0x1401f5752    | __security_check_cookie |
| 0x1404c7ac0 | 0x1401f5594    | DAT_1404c7ac0           |

## normalized_result.referenced_strings



## confidence

observed

## authority

shipped-artifact

## environment

null

## limitations

The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.,The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.,Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.,Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.,References cover the complete Ghidra function-body AddressSet and exact entry. Dossier incoming edges omit sources owned by that function; procedure_references also retains those internal edges.,The dossier combines Ghidra FunctionManager, Listing, ReferenceManager, BasicBlockModel, and decompiler observations; provider-specific pseudocode and assembly are not cross-provider text invariants.,Resolved reference metadata identifies computed, indirect, external, call, jump, and data edges; unresolved targetless flows remain unknown, and function classifications distinguish thunks and externals.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,The Java bridge serializes one function request per Program and lets each decompilation run until it completes or the caller cancels.,Ghidra Listing reports a terminal call at 0x1401f577f with no resolved callee; its no-return basis is unknown.,Windows Ghidra P0 accepts approved native x86 and x86-64 PE applications and DLLs; managed, hostile, sensitive, and mutable-path targets are unsupported.,The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.,Windows sessions require the matching packaged Windows x64 native addon, local NTFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.

## locations



## evidence_links

