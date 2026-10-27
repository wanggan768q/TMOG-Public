## evidence_id

ev_4e49fc5e21780dd9e20a2913db849a9640750d245de30a05e2eacd492d9c5739

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
| procedure | 0x1401fa021 |

## raw_result.value.procedure.address

0x1401f9fb0

## raw_result.value.procedure.name

FUN_1401f9fb0

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
| 0x1401f9fb0 | 0x1401fa2b8 |

## raw_result.value.procedure.body.total_bytes

777

## raw_result.value.procedure.body.span_bytes

777

## raw_result.value.procedure.body.non_contiguous

false

## raw_result.value.procedure.body.contains_entry

true

## raw_result.value.procedure.signature

undefined FUN_1401f9fb0()

## raw_result.value.procedure.locals

| description                               | provenance               |
|-------------------------------------------|--------------------------|
| undefined8 local_38 @ Stack[-0x38]:8      | ghidra-function-database |
| undefined8 local_40 @ Stack[-0x40]:8      | ghidra-function-database |
| undefined8 local_58 @ Stack[-0x58]:8      | ghidra-function-database |
| undefined8 local_60 @ Stack[-0x60]:8      | ghidra-function-database |
| undefined8 local_68 @ Stack[-0x68]:8      | ghidra-function-database |
| undefined1[16] local_78 @ Stack[-0x78]:16 | ghidra-function-database |
| undefined8 local_80 @ Stack[-0x80]:8      | ghidra-function-database |
| undefined8 local_88 @ Stack[-0x88]:8      | ghidra-function-database |
| undefined8 local_90 @ Stack[-0x90]:8      | ghidra-function-database |
| undefined8 local_98 @ Stack[-0x98]:8      | ghidra-function-database |
| undefined local_a0 @ Stack[-0xa0]:1       | ghidra-function-database |
| undefined8 local_a8 @ Stack[-0xa8]:8      | ghidra-function-database |
| undefined8 local_b0 @ Stack[-0xb0]:8      | ghidra-function-database |

## raw_result.value.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1401f9fb0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  BOOL BVar4;
  undefined8 ****ppppuVar5;
  ulonglong uVar6;
  wchar_t *pwVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined1 auStack_d8 [40];
  undefined8 ***local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [8];
  undefined8 ***local_98;
  undefined1 *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 ***local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 ***local_58 [3];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1404c7ac0 ^ (ulonglong)auStack_d8;
  if (*(HMENU *)(param_1 + 0x1f60) != (HMENU)0x0) {
    iVar3 = GetMenuItemCount(*(HMENU *)(param_1 + 0x1f60));
    while ((0 < iVar3 && (BVar4 = DeleteMenu(*(HMENU *)(param_1 + 0x1f60),0,0x400), BVar4 != 0))) {
      iVar3 = GetMenuItemCount(*(HMENU *)(param_1 + 0x1f60));
    }
    cVar2 = FUN_1401f4920(param_1 + 0x1a38);
    if (cVar2 == '\0') {
      FUN_14003a410(*(undefined8 *)(param_1 + 0x1f60),0,0x1bb,&DAT_1403efe68);
      uVar8 = 0x1bc;
      puVar9 = &DAT_1403f0458;
    }
    else {
      uVar8 = 0x1bd;
      puVar9 = &DAT_1403f0110;
    }
    FUN_14003a410(*(undefined8 *)(param_1 + 0x1f60),0,uVar8,puVar9);
    FUN_14003a410(*(undefined8 *)(param_1 + 0x1f60),0x800,0,0);
    FUN_14003a410(*(undefined8 *)(param_1 + 0x1f60),*(char *)(param_1 + 0x1f59) != '\0',0x1be,
                  &DAT_1403fbd50);
    FUN_14003a410(*(undefined8 *)(param_1 + 0x1f60),0x800,0,0);
    FUN_14003a410(*(undefined8 *)(param_1 + 0x1f60),0,0x1b8,&DAT_1403f0ed8);
    FUN_14003a410(*(undefined8 *)(param_1 + 0x1f60),0,0x1bf,&DAT_1404052d8);
    FUN_14003a410(*(undefined8 *)(param_1 + 0x1f60),0,0x1b9,&DAT_140416888);
    FUN_14003a410(*(undefined8 *)(param_1 + 0x1f60),0x800,0,0);
    cVar2 = FUN_1401f5c70(param_1 + 0x1a38);
    pwVar7 = L"Task Manager TMOG";
    if (cVar2 != '\0') {
      pwVar7 = L"Task Manager TMOG PRO";
    }
    local_78 = (undefined8 ****)0x0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    uVar8 = FUN_140335100(pwVar7);
    FUN_1400017a0(&local_78,pwVar7,uVar8);
    local_b0 = &local_78;
    if (7 < local_60) {
      local_b0 = local_78;
    }
    local_a8 = local_68;
    local_98 = &local_b0;
    local_90 = local_a0;
    local_88 = &DAT_1403ef9b0;
    local_80 = 10;
    FUN_14003a830(local_58,&local_88,&local_98);
    if (7 < local_60) {
      uVar6 = local_60 * 2 + 2;
      ppppuVar5 = (undefined8 ****)local_78;
      if (0xfff < uVar6) {
        ppppuVar5 = (undefined8 ****)local_78[-1];
        if (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)ppppuVar5))) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          goto LAB_1401fa2b1;
        }
        uVar6 = local_60 * 2 + 0x29;
      }
      thunk_FUN_140327e20(ppppuVar5,uVar6);
    }
    local_68 = 0;
    local_60 = 7;
    local_78 = (undefined8 ***)((ulonglong)local_78 & 0xffffffffffff0000);
    ppppuVar5 = local_58;
    if (7 < local_40) {
      ppppuVar5 = (undefined8 ****)local_58[0];
    }
    FUN_14003a410(*(undefined8 *)(param_1 + 0x1f60),0,0x1ba,ppppuVar5);
    if ((*(HWND *)(param_1 + 0x230) != (HWND)0x0) && (*(longlong *)(param_1 + 0x150) != 0)) {
      DrawMenuBar(*(HWND *)(param_1 + 0x230));
    }
    if (7 < local_40) {
      uVar6 = local_40 * 2 + 2;
      ppppuVar5 = (undefined8 ****)local_58[0];
      if (0xfff < uVar6) {
        ppppuVar5 = (undefined8 ****)local_58[0][-1];
        if (0x1f < (ulonglong)((longlong)local_58[0] + (-8 - (longlong)ppppuVar5))) {
LAB_1401fa2b1:
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar6 = local_40 * 2 + 0x29;
      }
      thunk_FUN_140327e20(ppppuVar5,uVar6);
    }
  }
  return;
}



## raw_result.value.assembly

0x1401f9fb0: PUSH RBP,0x1401f9fb2: PUSH RBX,0x1401f9fb3: PUSH RSI,0x1401f9fb4: PUSH RDI,0x1401f9fb5: LEA RBP, [RSP + -0x3f],0x1401f9fba: SUB RSP, 0xb8,0x1401f9fc1: MOV RAX, qword ptr [0x1404c7ac0],0x1401f9fc8: XOR RAX, RSP,0x1401f9fcb: MOV qword ptr [RBP + 0x27], RAX,0x1401f9fcf: MOV RBX, RCX,0x1401f9fd2: XOR ESI, ESI,0x1401f9fd4: MOV RCX, qword ptr [RCX + 0x1f60],0x1401f9fdb: TEST RCX, RCX,0x1401f9fde: JZ 0x1401fa292,0x1401f9fe4: CALL qword ptr [0x14037acd8],0x1401f9fea: TEST EAX, EAX,0x1401f9fec: JLE 0x1401fa01a,0x1401f9fee: NOP,0x1401f9ff0: XOR EDX, EDX,0x1401f9ff2: MOV R8D, 0x400,0x1401f9ff8: MOV RCX, qword ptr [RBX + 0x1f60],0x1401f9fff: CALL qword ptr [0x14037ace8],0x1401fa005: TEST EAX, EAX,0x1401fa007: JZ 0x1401fa01a,0x1401fa009: MOV RCX, qword ptr [RBX + 0x1f60],0x1401fa010: CALL qword ptr [0x14037acd8],0x1401fa016: TEST EAX, EAX,0x1401fa018: JG 0x1401f9ff0,0x1401fa01a: LEA RCX, [RBX + 0x1a38],0x1401fa021: CALL 0x1401f4920,0x1401fa026: TEST AL, AL,0x1401fa028: JZ 0x1401fa039,0x1401fa02a: MOV R8D, 0x1bd,0x1401fa030: LEA R9, [0x1403f0110],0x1401fa037: JMP 0x1401fa061,0x1401fa039: LEA R9, [0x1403efe68],0x1401fa040: XOR EDX, EDX,0x1401fa042: MOV R8D, 0x1bb,0x1401fa048: MOV RCX, qword ptr [RBX + 0x1f60],0x1401fa04f: CALL 0x14003a410,0x1401fa054: MOV R8D, 0x1bc,0x1401fa05a: LEA R9, [0x1403f0458],0x1401fa061: XOR EDX, EDX,0x1401fa063: MOV RCX, qword ptr [RBX + 0x1f60],0x1401fa06a: CALL 0x14003a410,0x1401fa06f: XOR R9D, R9D,0x1401fa072: XOR R8D, R8D,0x1401fa075: MOV EDX, 0x800,0x1401fa07a: MOV RCX, qword ptr [RBX + 0x1f60],0x1401fa081: CALL 0x14003a410,0x1401fa086: MOV EDX, ESI,0x1401fa088: CMP byte ptr [RBX + 0x1f59], DL,0x1401fa08e: SETNZ DL,0x1401fa091: LEA R9, [0x1403fbd50],0x1401fa098: MOV R8D, 0x1be,0x1401fa09e: MOV RCX, qword ptr [RBX + 0x1f60],0x1401fa0a5: CALL 0x14003a410,0x1401fa0aa: XOR R9D, R9D,0x1401fa0ad: XOR R8D, R8D,0x1401fa0b0: MOV EDX, 0x800,0x1401fa0b5: MOV RCX, qword ptr [RBX + 0x1f60],0x1401fa0bc: CALL 0x14003a410,0x1401fa0c1: LEA R9, [0x1403f0ed8],0x1401fa0c8: XOR EDX, EDX,0x1401fa0ca: MOV R8D, 0x1b8,0x1401fa0d0: MOV RCX, qword ptr [RBX + 0x1f60],0x1401fa0d7: CALL 0x14003a410,0x1401fa0dc: LEA R9, [0x1404052d8],0x1401fa0e3: XOR EDX, EDX,0x1401fa0e5: MOV R8D, 0x1bf,0x1401fa0eb: MOV RCX, qword ptr [RBX + 0x1f60],0x1401fa0f2: CALL 0x14003a410,0x1401fa0f7: LEA R9, [0x140416888],0x1401fa0fe: XOR EDX, EDX,0x1401fa100: MOV R8D, 0x1b9,0x1401fa106: MOV RCX, qword ptr [RBX + 0x1f60],0x1401fa10d: CALL 0x14003a410,0x1401fa112: XOR R9D, R9D,0x1401fa115: XOR R8D, R8D,0x1401fa118: MOV EDX, 0x800,0x1401fa11d: MOV RCX, qword ptr [RBX + 0x1f60],0x1401fa124: CALL 0x14003a410,0x1401fa129: LEA RCX, [RBX + 0x1a38],0x1401fa130: CALL 0x1401f5c70,0x1401fa135: LEA RCX, [0x14041cbe0],0x1401fa13c: LEA RDI, [0x14037c310],0x1401fa143: TEST AL, AL,0x1401fa145: CMOVNZ RDI, RCX,0x1401fa149: XORPS XMM0, XMM0,0x1401fa14c: MOVUPS xmmword ptr [RBP + -0x19], XMM0,0x1401fa150: MOV qword ptr [RBP + -0x9], RSI,0x1401fa154: MOV qword ptr [RBP + -0x1], RSI,0x1401fa158: MOV RCX, RDI,0x1401fa15b: CALL 0x140335100,0x1401fa160: MOV R8, RAX,0x1401fa163: MOV RDX, RDI,0x1401fa166: LEA RCX, [RBP + -0x19],0x1401fa16a: CALL 0x1400017a0,0x1401fa16f: NOP,0x1401fa170: LEA RAX, [RBP + -0x19],0x1401fa174: CMP qword ptr [RBP + -0x1], 0x7,0x1401fa179: CMOVA RAX, qword ptr [RBP + -0x19],0x1401fa17e: MOV qword ptr [RBP + -0x51], RAX,0x1401fa182: MOV RAX, qword ptr [RBP + -0x9],0x1401fa186: MOV qword ptr [RBP + -0x49], RAX,0x1401fa18a: LEA RAX, [RBP + -0x51],0x1401fa18e: MOV qword ptr [RBP + -0x39], RAX,0x1401fa192: LEA RAX, [RBP + -0x41],0x1401fa196: MOV qword ptr [RBP + -0x31], RAX,0x1401fa19a: LEA RAX, [0x1403ef9b0],0x1401fa1a1: MOV qword ptr [RBP + -0x29], RAX,0x1401fa1a5: MOV qword ptr [RBP + -0x21], 0xa,0x1401fa1ad: LEA R8, [RBP + -0x39],0x1401fa1b1: LEA RDX, [RBP + -0x29],0x1401fa1b5: LEA RCX, [RBP + 0x7],0x1401fa1b9: CALL 0x14003a830,0x1401fa1be: NOP,0x1401fa1bf: MOV R8, qword ptr [RBP + -0x1],0x1401fa1c3: CMP R8, 0x7,0x1401fa1c7: JBE 0x1401fa203,0x1401fa1c9: LEA RDX, [0x2 + R8*0x2],0x1401fa1d1: MOV RCX, qword ptr [RBP + -0x19],0x1401fa1d5: CMP RDX, 0x1000,0x1401fa1dc: JC 0x1401fa1fe,0x1401fa1de: MOV RAX, qword ptr [RCX + -0x8],0x1401fa1e2: SUB RCX, RAX,0x1401fa1e5: SUB RCX, 0x8,0x1401fa1e9: CMP RCX, 0x1f,0x1401fa1ed: JA 0x1401fa2aa,0x1401fa1f3: LEA RDX, [0x29 + R8*0x2],0x1401fa1fb: MOV RCX, RAX,0x1401fa1fe: CALL 0x1403272f0,0x1401fa203: MOV qword ptr [RBP + -0x9], RSI,0x1401fa207: MOV qword ptr [RBP + -0x1], 0x7,0x1401fa20f: MOV word ptr [RBP + -0x19], SI,0x1401fa213: LEA R9, [RBP + 0x7],0x1401fa217: CMP qword ptr [RBP + 0x1f], 0x7,0x1401fa21c: CMOVA R9, qword ptr [RBP + 0x7],0x1401fa221: XOR EDX, EDX,0x1401fa223: MOV R8D, 0x1ba,0x1401fa229: MOV RCX, qword ptr [RBX + 0x1f60],0x1401fa230: CALL 0x14003a410,0x1401fa235: MOV RCX, qword ptr [RBX + 0x230],0x1401fa23c: TEST RCX, RCX,0x1401fa23f: JZ 0x1401fa252,0x1401fa241: CMP qword ptr [RBX + 0x150], 0x0,0x1401fa249: JZ 0x1401fa252,0x1401fa24b: CALL qword ptr [0x14037ac50],0x1401fa251: NOP,0x1401fa252: MOV RAX, qword ptr [RBP + 0x1f],0x1401fa256: CMP RAX, 0x7,0x1401fa25a: JBE 0x1401fa292,0x1401fa25c: LEA RDX, [0x2 + RAX*0x2],0x1401fa264: MOV RCX, qword ptr [RBP + 0x7],0x1401fa268: CMP RDX, 0x1000,0x1401fa26f: JC 0x1401fa28d,0x1401fa271: MOV R8, qword ptr [RCX + -0x8],0x1401fa275: SUB RCX, R8,0x1401fa278: SUB RCX, 0x8,0x1401fa27c: CMP RCX, 0x1f,0x1401fa280: JA 0x1401fa2b1,0x1401fa282: LEA RDX, [0x29 + RAX*0x2],0x1401fa28a: MOV RCX, R8,0x1401fa28d: CALL 0x1403272f0,0x1401fa292: MOV RCX, qword ptr [RBP + 0x27],0x1401fa296: XOR RCX, RSP,0x1401fa299: CALL 0x140327740,0x1401fa29e: ADD RSP, 0xb8,0x1401fa2a5: POP RDI,0x1401fa2a6: POP RSI,0x1401fa2a7: POP RBX,0x1401fa2a8: POP RBP,0x1401fa2a9: RET,0x1401fa2aa: MOV ECX, 0x5,0x1401fa2af: INT 0x29,0x1401fa2b1: MOV ECX, 0x5,0x1401fa2b6: INT 0x29,0x1401fa2b8: INT3

## raw_result.value.comments



## raw_result.value.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x14007bd50 | FUN_14007bd50 | [object Object] | [object Object] |
| 0x1400e3a30 | FUN_1400e3a30 | [object Object] | [object Object] |
| 0x1401e59c0 | FUN_1401e59c0 | [object Object] | [object Object] |

## raw_result.value.callees

| address        | name                         | classification  | body            |
|----------------|------------------------------|-----------------|-----------------|
| EXTERNAL:0x129 | USER32.DLL::DrawMenuBar      | [object Object] | [object Object] |
| EXTERNAL:0x13a | USER32.DLL::GetMenuItemCount | [object Object] | [object Object] |
| EXTERNAL:0x13c | USER32.DLL::DeleteMenu       | [object Object] | [object Object] |
| 0x1400017a0    | FUN_1400017a0                | [object Object] | [object Object] |
| 0x14003a410    | FUN_14003a410                | [object Object] | [object Object] |
| 0x14003a830    | FUN_14003a830                | [object Object] | [object Object] |
| 0x1401f4920    | FUN_1401f4920                | [object Object] | [object Object] |
| 0x1401f5c70    | FUN_1401f5c70                | [object Object] | [object Object] |
| 0x1403272f0    | thunk_FUN_140327e20          | [object Object] | [object Object] |
| 0x140327740    | __security_check_cookie      | [object Object] | [object Object] |
| 0x140335100    | FUN_140335100                | [object Object] | [object Object] |

## raw_result.value.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x14007be18    | 0x1401f9fb0    | [object Object]  | [object Object]  | [object Object] |
| 0x1400e3f9e    | 0x1401f9fb0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401e677d    | 0x1401f9fb0    | [object Object]  | [object Object]  | [object Object] |
| 0x1404dfc78    | 0x1401f9fb0    |                  | [object Object]  | [object Object] |

## raw_result.value.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1401f9fb5    | stack:0xffffffffffffffa1 | [object Object]  |                  | [object Object] |
| 0x1401f9fc1    | 0x1404c7ac0              | [object Object]  |                  | [object Object] |
| 0x1401f9fcb    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f9fde    | 0x1401fa292              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f9fe4    | EXTERNAL:0x13a           | [object Object]  | [object Object]  | [object Object] |
| 0x1401f9fe4    | 0x14037acd8              | [object Object]  |                  | [object Object] |
| 0x1401f9fec    | 0x1401fa01a              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f9fff    | EXTERNAL:0x13c           | [object Object]  | [object Object]  | [object Object] |
| 0x1401f9fff    | 0x14037ace8              | [object Object]  |                  | [object Object] |
| 0x1401fa007    | 0x1401fa01a              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa010    | EXTERNAL:0x13a           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa010    | 0x14037acd8              | [object Object]  |                  | [object Object] |
| 0x1401fa018    | 0x1401f9ff0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa021    | 0x1401f4920              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa028    | 0x1401fa039              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa030    | 0x1403f0110              | [object Object]  |                  | [object Object] |
| 0x1401fa037    | 0x1401fa061              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa039    | 0x1403efe68              | [object Object]  |                  | [object Object] |
| 0x1401fa04f    | 0x14003a410              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa05a    | 0x1403f0458              | [object Object]  |                  | [object Object] |
| 0x1401fa06a    | 0x14003a410              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa081    | 0x14003a410              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa091    | 0x1403fbd50              | [object Object]  |                  | [object Object] |
| 0x1401fa0a5    | 0x14003a410              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa0bc    | 0x14003a410              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa0c1    | 0x1403f0ed8              | [object Object]  |                  | [object Object] |
| 0x1401fa0d7    | 0x14003a410              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa0dc    | 0x1404052d8              | [object Object]  |                  | [object Object] |
| 0x1401fa0f2    | 0x14003a410              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa0f7    | 0x140416888              | [object Object]  |                  | [object Object] |
| 0x1401fa10d    | 0x14003a410              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa124    | 0x14003a410              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa130    | 0x1401f5c70              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa135    | 0x14041cbe0              | [object Object]  |                  | [object Object] |
| 0x1401fa13c    | 0x14037c310              | [object Object]  |                  | [object Object] |
| 0x1401fa14c    | stack:0xffffffffffffff88 | [object Object]  |                  | [object Object] |
| 0x1401fa150    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x1401fa154    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401fa158    | 0x14037c310              | [object Object]  |                  | [object Object] |
| 0x1401fa158    | 0x14041cbe0              | [object Object]  |                  | [object Object] |
| 0x1401fa15b    | 0x140335100              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa163    | 0x14041cbe0              | [object Object]  |                  | [object Object] |
| 0x1401fa166    | stack:0xffffffffffffff88 | [object Object]  |                  | [object Object] |
| 0x1401fa16a    | 0x1400017a0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa170    | stack:0xffffffffffffff88 | [object Object]  |                  | [object Object] |
| 0x1401fa174    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401fa179    | stack:0xffffffffffffff88 | [object Object]  |                  | [object Object] |
| 0x1401fa17e    | stack:0xffffffffffffff50 | [object Object]  |                  | [object Object] |
| 0x1401fa182    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x1401fa186    | stack:0xffffffffffffff58 | [object Object]  |                  | [object Object] |
| 0x1401fa18a    | stack:0xffffffffffffff50 | [object Object]  |                  | [object Object] |
| 0x1401fa18e    | stack:0xffffffffffffff68 | [object Object]  |                  | [object Object] |
| 0x1401fa192    | stack:0xffffffffffffff60 | [object Object]  |                  | [object Object] |
| 0x1401fa196    | stack:0xffffffffffffff70 | [object Object]  |                  | [object Object] |
| 0x1401fa19a    | 0x1403ef9b0              | [object Object]  |                  | [object Object] |
| 0x1401fa1a1    | stack:0xffffffffffffff78 | [object Object]  |                  | [object Object] |
| 0x1401fa1a1    | 0x1403ef9b0              | [object Object]  |                  | [object Object] |
| 0x1401fa1a5    | stack:0xffffffffffffff80 | [object Object]  |                  | [object Object] |
| 0x1401fa1ad    | stack:0xffffffffffffff68 | [object Object]  |                  | [object Object] |
| 0x1401fa1b1    | stack:0xffffffffffffff78 | [object Object]  |                  | [object Object] |
| 0x1401fa1b5    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401fa1b9    | 0x14003a830              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa1bf    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401fa1c7    | 0x1401fa203              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa1d1    | stack:0xffffffffffffff88 | [object Object]  |                  | [object Object] |
| 0x1401fa1dc    | 0x1401fa1fe              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa1ed    | 0x1401fa2aa              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa1fe    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa203    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x1401fa207    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401fa20f    | stack:0xffffffffffffff88 | [object Object]  |                  | [object Object] |
| 0x1401fa213    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401fa217    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401fa21c    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401fa230    | 0x14003a410              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa23f    | 0x1401fa252              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa249    | 0x1401fa252              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa24b    | EXTERNAL:0x129           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa24b    | 0x14037ac50              | [object Object]  |                  | [object Object] |
| 0x1401fa252    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401fa25a    | 0x1401fa292              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa264    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401fa26f    | 0x1401fa28d              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa280    | 0x1401fa2b1              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa28d    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa292    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401fa299    | 0x140327740              | [object Object]  | [object Object]  | [object Object] |

## raw_result.value.referenced_strings

| address     | value                 | source_address |
|-------------|-----------------------|----------------|
| 0x14037c310 | Task Manager TMOG     | 0x1401fa13c    |
| 0x14037c310 | Task Manager TMOG     | 0x1401fa158    |
| 0x14041cbe0 | Task Manager TMOG PRO | 0x1401fa135    |
| 0x14041cbe0 | Task Manager TMOG PRO | 0x1401fa158    |
| 0x14041cbe0 | Task Manager TMOG PRO | 0x1401fa163    |

## raw_result.value.referenced_names

| address        | value                             | source_address |
|----------------|-----------------------------------|----------------|
| 0x1400017a0    | FUN_1400017a0                     | 0x1401fa16a    |
| 0x14003a410    | FUN_14003a410                     | 0x1401fa04f    |
| 0x14003a410    | FUN_14003a410                     | 0x1401fa06a    |
| 0x14003a410    | FUN_14003a410                     | 0x1401fa081    |
| 0x14003a410    | FUN_14003a410                     | 0x1401fa0a5    |
| 0x14003a410    | FUN_14003a410                     | 0x1401fa0bc    |
| 0x14003a410    | FUN_14003a410                     | 0x1401fa0d7    |
| 0x14003a410    | FUN_14003a410                     | 0x1401fa0f2    |
| 0x14003a410    | FUN_14003a410                     | 0x1401fa10d    |
| 0x14003a410    | FUN_14003a410                     | 0x1401fa124    |
| 0x14003a410    | FUN_14003a410                     | 0x1401fa230    |
| 0x14003a830    | FUN_14003a830                     | 0x1401fa1b9    |
| 0x1401f4920    | FUN_1401f4920                     | 0x1401fa021    |
| 0x1401f5c70    | FUN_1401f5c70                     | 0x1401fa130    |
| 0x1401f9ff0    | LAB_1401f9ff0                     | 0x1401fa018    |
| 0x1401fa01a    | LAB_1401fa01a                     | 0x1401f9fec    |
| 0x1401fa01a    | LAB_1401fa01a                     | 0x1401fa007    |
| 0x1401fa039    | LAB_1401fa039                     | 0x1401fa028    |
| 0x1401fa061    | LAB_1401fa061                     | 0x1401fa037    |
| 0x1401fa1fe    | LAB_1401fa1fe                     | 0x1401fa1dc    |
| 0x1401fa203    | LAB_1401fa203                     | 0x1401fa1c7    |
| 0x1401fa252    | LAB_1401fa252                     | 0x1401fa23f    |
| 0x1401fa252    | LAB_1401fa252                     | 0x1401fa249    |
| 0x1401fa28d    | LAB_1401fa28d                     | 0x1401fa26f    |
| 0x1401fa292    | LAB_1401fa292                     | 0x1401f9fde    |
| 0x1401fa292    | LAB_1401fa292                     | 0x1401fa25a    |
| 0x1401fa2aa    | LAB_1401fa2aa                     | 0x1401fa1ed    |
| 0x1401fa2b1    | LAB_1401fa2b1                     | 0x1401fa280    |
| 0x1403272f0    | thunk_FUN_140327e20               | 0x1401fa1fe    |
| 0x1403272f0    | thunk_FUN_140327e20               | 0x1401fa28d    |
| 0x140327740    | __security_check_cookie           | 0x1401fa299    |
| 0x140335100    | FUN_140335100                     | 0x1401fa15b    |
| 0x14037ac50    | PTR_DrawMenuBar_14037ac50         | 0x1401fa24b    |
| 0x14037acd8    | PTR_GetMenuItemCount_14037acd8    | 0x1401f9fe4    |
| 0x14037acd8    | PTR_GetMenuItemCount_14037acd8    | 0x1401fa010    |
| 0x14037ace8    | PTR_DeleteMenu_14037ace8          | 0x1401f9fff    |
| 0x14037c310    | u_Task_Manager_TMOG_14037c310     | 0x1401fa13c    |
| 0x14037c310    | u_Task_Manager_TMOG_14037c310     | 0x1401fa158    |
| 0x1403ef9b0    | DAT_1403ef9b0                     | 0x1401fa19a    |
| 0x1403ef9b0    | DAT_1403ef9b0                     | 0x1401fa1a1    |
| 0x1403efe68    | DAT_1403efe68                     | 0x1401fa039    |
| 0x1403f0110    | DAT_1403f0110                     | 0x1401fa030    |
| 0x1403f0458    | DAT_1403f0458                     | 0x1401fa05a    |
| 0x1403f0ed8    | DAT_1403f0ed8                     | 0x1401fa0c1    |
| 0x1403fbd50    | DAT_1403fbd50                     | 0x1401fa091    |
| 0x1404052d8    | DAT_1404052d8                     | 0x1401fa0dc    |
| 0x140416888    | DAT_140416888                     | 0x1401fa0f7    |
| 0x14041cbe0    | u_Task_Manager_TMOG_PRO_14041cbe0 | 0x1401fa135    |
| 0x14041cbe0    | u_Task_Manager_TMOG_PRO_14041cbe0 | 0x1401fa158    |
| 0x14041cbe0    | u_Task_Manager_TMOG_PRO_14041cbe0 | 0x1401fa163    |
| 0x1404c7ac0    | DAT_1404c7ac0                     | 0x1401f9fc1    |
| EXTERNAL:0x129 | USER32.DLL::DrawMenuBar           | 0x1401fa24b    |
| EXTERNAL:0x13a | USER32.DLL::GetMenuItemCount      | 0x1401f9fe4    |
| EXTERNAL:0x13a | USER32.DLL::GetMenuItemCount      | 0x1401fa010    |
| EXTERNAL:0x13c | USER32.DLL::DeleteMenu            | 0x1401f9fff    |

## raw_result.value.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1401f9fb0 | 0x1401f9fe4 | 0x1401f9fe4,0x1401fa292 |
| 0x1401f9fe4 | 0x1401f9fee | 0x1401f9fee,0x1401fa01a |
| 0x1401f9fee | 0x1401f9ff0 | 0x1401f9ff0             |
| 0x1401f9ff0 | 0x1401fa009 | 0x1401fa009,0x1401fa01a |
| 0x1401fa009 | 0x1401fa01a | 0x1401f9ff0,0x1401fa01a |
| 0x1401fa01a | 0x1401fa02a | 0x1401fa02a,0x1401fa039 |
| 0x1401fa02a | 0x1401fa039 | 0x1401fa061             |
| 0x1401fa039 | 0x1401fa061 | 0x1401fa061             |
| 0x1401fa061 | 0x1401fa1c9 | 0x1401fa1c9,0x1401fa203 |
| 0x1401fa1c9 | 0x1401fa1de | 0x1401fa1de,0x1401fa1fe |
| 0x1401fa1de | 0x1401fa1f3 | 0x1401fa1f3,0x1401fa2aa |
| 0x1401fa1f3 | 0x1401fa1fe | 0x1401fa1fe             |
| 0x1401fa1fe | 0x1401fa203 | 0x1401fa203             |
| 0x1401fa203 | 0x1401fa241 | 0x1401fa241,0x1401fa252 |
| 0x1401fa241 | 0x1401fa24b | 0x1401fa24b,0x1401fa252 |
| 0x1401fa24b | 0x1401fa252 | 0x1401fa252             |
| 0x1401fa252 | 0x1401fa25c | 0x1401fa25c,0x1401fa292 |
| 0x1401fa25c | 0x1401fa271 | 0x1401fa271,0x1401fa28d |
| 0x1401fa271 | 0x1401fa282 | 0x1401fa282,0x1401fa2b1 |
| 0x1401fa282 | 0x1401fa28d | 0x1401fa28d             |
| 0x1401fa28d | 0x1401fa292 | 0x1401fa292             |
| 0x1401fa292 | 0x1401fa2aa |                         |
| 0x1401fa2aa | 0x1401fa2b1 | 0x1401fa2b1             |
| 0x1401fa2b1 | 0x1401fa2b9 |                         |

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

| id               | address     | sequence | opcode       | is_dead | block_membership | inputs                                                                          | output          |
|------------------|-------------|----------|--------------|---------|------------------|---------------------------------------------------------------------------------|-----------------|
| 0x1401f9fba#2283 | 0x1401f9fba | 2283     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9fc8#26   | 0x1401f9fc8 | 26       | INT_XOR      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9fc8#2302 | 0x1401f9fc8 | 2302     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f9fd4#47   | 0x1401f9fd4 | 47       | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9fd4#48   | 0x1401f9fd4 | 48       | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9fd4#2303 | 0x1401f9fd4 | 2303     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f9fdb#54   | 0x1401f9fdb | 54       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9fde#59   | 0x1401f9fde | 59       | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f9fe4#63   | 0x1401f9fe4 | 63       | CALL         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9fe4#1665 | 0x1401f9fe4 | 1665     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9fe4#2041 | 0x1401f9fe4 | 2041     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9fe4#2072 | 0x1401f9fe4 | 2072     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9fe4#2103 | 0x1401f9fe4 | 2103     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9fec#74   | 0x1401f9fec | 74       | INT_SLESS    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9fec#75   | 0x1401f9fec | 75       | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f9fec#2271 | 0x1401f9fec | 2271     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9fec#2272 | 0x1401f9fec | 2272     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9fec#2273 | 0x1401f9fec | 2273     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9fec#2274 | 0x1401f9fec | 2274     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9fec#2275 | 0x1401f9fec | 2275     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9ff8#87   | 0x1401f9ff8 | 87       | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9ff8#88   | 0x1401f9ff8 | 88       | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9ff8#2304 | 0x1401f9ff8 | 2304     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f9fff#93   | 0x1401f9fff | 93       | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f9fff#1666 | 0x1401f9fff | 1666     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9fff#2042 | 0x1401f9fff | 2042     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9fff#2073 | 0x1401f9fff | 2073     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9fff#2104 | 0x1401f9fff | 2104     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa005#98   | 0x1401fa005 | 98       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa007#103  | 0x1401fa007 | 103      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401fa009#104  | 0x1401fa009 | 104      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa009#105  | 0x1401fa009 | 105      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa009#2305 | 0x1401fa009 | 2305     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa010#110  | 0x1401fa010 | 110      | CALL         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa010#1667 | 0x1401fa010 | 1667     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa010#2043 | 0x1401fa010 | 2043     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa010#2074 | 0x1401fa010 | 2074     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa010#2105 | 0x1401fa010 | 2105     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa01a#124  | 0x1401fa01a | 124      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa01a#1697 | 0x1401fa01a | 1697     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa01a#2071 | 0x1401fa01a | 2071     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa01a#2102 | 0x1401fa01a | 2102     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa01a#2133 | 0x1401fa01a | 2133     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa021#128  | 0x1401fa021 | 128      | CALL         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa021#1668 | 0x1401fa021 | 1668     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa021#2044 | 0x1401fa021 | 2044     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa021#2075 | 0x1401fa021 | 2075     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa021#2106 | 0x1401fa021 | 2106     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa026#133  | 0x1401fa026 | 133      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa028#138  | 0x1401fa028 | 138      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401fa02a#139  | 0x1401fa02a | 139      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa030#140  | 0x1401fa030 | 140      | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa037#141  | 0x1401fa037 | 141      | BRANCH       | true    | member           | [object Object]                                                                 |                 |
| 0x1401fa048#707  | 0x1401fa048 | 707      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa048#708  | 0x1401fa048 | 708      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa048#2306 | 0x1401fa048 | 2306     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa04f#712  | 0x1401fa04f | 712      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401fa04f#1669 | 0x1401fa04f | 1669     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa04f#2045 | 0x1401fa04f | 2045     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa04f#2076 | 0x1401fa04f | 2076     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa04f#2107 | 0x1401fa04f | 2107     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa04f#2278 | 0x1401fa04f | 2278     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa054#713  | 0x1401fa054 | 713      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa05a#714  | 0x1401fa05a | 714      | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa061#1220 | 0x1401fa061 | 1220     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa061#1276 | 0x1401fa061 | 1276     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa061#1695 | 0x1401fa061 | 1695     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa061#2069 | 0x1401fa061 | 2069     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa061#2100 | 0x1401fa061 | 2100     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa061#2131 | 0x1401fa061 | 2131     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa063#152  | 0x1401fa063 | 152      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa063#153  | 0x1401fa063 | 153      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa063#2307 | 0x1401fa063 | 2307     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa06a#157  | 0x1401fa06a | 157      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401fa06a#1670 | 0x1401fa06a | 1670     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa06a#2046 | 0x1401fa06a | 2046     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa06a#2077 | 0x1401fa06a | 2077     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa06a#2108 | 0x1401fa06a | 2108     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa07a#179  | 0x1401fa07a | 179      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa07a#180  | 0x1401fa07a | 180      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa07a#2308 | 0x1401fa07a | 2308     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa081#184  | 0x1401fa081 | 184      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401fa081#1671 | 0x1401fa081 | 1671     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa081#2047 | 0x1401fa081 | 2047     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa081#2078 | 0x1401fa081 | 2078     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa081#2109 | 0x1401fa081 | 2109     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa088#187  | 0x1401fa088 | 187      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa088#188  | 0x1401fa088 | 188      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa088#194  | 0x1401fa088 | 194      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa088#2309 | 0x1401fa088 | 2309     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa09e#203  | 0x1401fa09e | 203      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa09e#204  | 0x1401fa09e | 204      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa09e#2310 | 0x1401fa09e | 2310     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa0a5#208  | 0x1401fa0a5 | 208      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401fa0a5#1672 | 0x1401fa0a5 | 1672     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0a5#2048 | 0x1401fa0a5 | 2048     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0a5#2079 | 0x1401fa0a5 | 2079     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0a5#2110 | 0x1401fa0a5 | 2110     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0a5#2280 | 0x1401fa0a5 | 2280     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0b5#230  | 0x1401fa0b5 | 230      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0b5#231  | 0x1401fa0b5 | 231      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0b5#2311 | 0x1401fa0b5 | 2311     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa0bc#235  | 0x1401fa0bc | 235      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401fa0bc#1673 | 0x1401fa0bc | 1673     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0bc#2049 | 0x1401fa0bc | 2049     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0bc#2080 | 0x1401fa0bc | 2080     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0bc#2111 | 0x1401fa0bc | 2111     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0d0#248  | 0x1401fa0d0 | 248      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0d0#249  | 0x1401fa0d0 | 249      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0d0#2312 | 0x1401fa0d0 | 2312     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa0d7#253  | 0x1401fa0d7 | 253      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401fa0d7#1674 | 0x1401fa0d7 | 1674     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0d7#2050 | 0x1401fa0d7 | 2050     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0d7#2081 | 0x1401fa0d7 | 2081     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0d7#2112 | 0x1401fa0d7 | 2112     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0d7#2279 | 0x1401fa0d7 | 2279     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0eb#266  | 0x1401fa0eb | 266      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0eb#267  | 0x1401fa0eb | 267      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0eb#2313 | 0x1401fa0eb | 2313     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa0f2#271  | 0x1401fa0f2 | 271      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401fa0f2#1675 | 0x1401fa0f2 | 1675     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0f2#2051 | 0x1401fa0f2 | 2051     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0f2#2082 | 0x1401fa0f2 | 2082     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0f2#2113 | 0x1401fa0f2 | 2113     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0f2#2281 | 0x1401fa0f2 | 2281     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa106#284  | 0x1401fa106 | 284      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa106#285  | 0x1401fa106 | 285      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa106#2314 | 0x1401fa106 | 2314     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa10d#289  | 0x1401fa10d | 289      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401fa10d#1676 | 0x1401fa10d | 1676     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa10d#2052 | 0x1401fa10d | 2052     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa10d#2083 | 0x1401fa10d | 2083     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa10d#2114 | 0x1401fa10d | 2114     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa10d#2282 | 0x1401fa10d | 2282     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa11d#311  | 0x1401fa11d | 311      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa11d#312  | 0x1401fa11d | 312      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa11d#2315 | 0x1401fa11d | 2315     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa124#316  | 0x1401fa124 | 316      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401fa124#1677 | 0x1401fa124 | 1677     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa124#2053 | 0x1401fa124 | 2053     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa124#2084 | 0x1401fa124 | 2084     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa124#2115 | 0x1401fa124 | 2115     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa129#317  | 0x1401fa129 | 317      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa130#321  | 0x1401fa130 | 321      | CALL         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa130#1678 | 0x1401fa130 | 1678     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa130#2054 | 0x1401fa130 | 2054     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa130#2085 | 0x1401fa130 | 2085     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa130#2116 | 0x1401fa130 | 2116     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa13c#323  | 0x1401fa13c | 323      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa143#328  | 0x1401fa143 | 328      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa145#336  | 0x1401fa145 | 336      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401fa145#337  | 0x1401fa145 | 337      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa149#1163 | 0x1401fa149 | 1163     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa14c#1660 | 0x1401fa14c | 1660     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa14c#1661 | 0x1401fa14c | 1661     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa150#347  | 0x1401fa150 | 347      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa154#350  | 0x1401fa154 | 350      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa15b#354  | 0x1401fa15b | 354      | CALL         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa15b#1679 | 0x1401fa15b | 1679     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa15b#1931 | 0x1401fa15b | 1931     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa15b#1962 | 0x1401fa15b | 1962     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa15b#1993 | 0x1401fa15b | 1993     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa15b#2024 | 0x1401fa15b | 2024     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa15b#2055 | 0x1401fa15b | 2055     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa15b#2086 | 0x1401fa15b | 2086     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa15b#2117 | 0x1401fa15b | 2117     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa166#2284 | 0x1401fa166 | 2284     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa16a#361  | 0x1401fa16a | 361      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object]                 |                 |
| 0x1401fa16a#1680 | 0x1401fa16a | 1680     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa16a#1932 | 0x1401fa16a | 1932     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa16a#1963 | 0x1401fa16a | 1963     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa16a#1994 | 0x1401fa16a | 1994     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa16a#2025 | 0x1401fa16a | 2025     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa16a#2056 | 0x1401fa16a | 2056     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa16a#2087 | 0x1401fa16a | 2087     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa16a#2118 | 0x1401fa16a | 2118     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa170#2285 | 0x1401fa170 | 2285     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa179#377  | 0x1401fa179 | 377      | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa179#382  | 0x1401fa179 | 382      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401fa179#2296 | 0x1401fa179 | 2296     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa179#2297 | 0x1401fa179 | 2297     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa17e#1012 | 0x1401fa17e | 1012     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa186#392  | 0x1401fa186 | 392      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa18a#2286 | 0x1401fa18a | 2286     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa192#2287 | 0x1401fa192 | 2287     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1a1#406  | 0x1401fa1a1 | 406      | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1a5#409  | 0x1401fa1a5 | 409      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa1ad#2288 | 0x1401fa1ad | 2288     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1b1#2289 | 0x1401fa1b1 | 2289     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1b5#2290 | 0x1401fa1b5 | 2290     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1b9#418  | 0x1401fa1b9 | 418      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object]                 |                 |
| 0x1401fa1b9#1681 | 0x1401fa1b9 | 1681     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1b9#1745 | 0x1401fa1b9 | 1745     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1b9#1776 | 0x1401fa1b9 | 1776     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1b9#1807 | 0x1401fa1b9 | 1807     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1b9#1838 | 0x1401fa1b9 | 1838     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1b9#1869 | 0x1401fa1b9 | 1869     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1b9#1900 | 0x1401fa1b9 | 1900     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1b9#1933 | 0x1401fa1b9 | 1933     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1b9#1964 | 0x1401fa1b9 | 1964     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1b9#1995 | 0x1401fa1b9 | 1995     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1b9#2026 | 0x1401fa1b9 | 2026     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1b9#2057 | 0x1401fa1b9 | 2057     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1b9#2088 | 0x1401fa1b9 | 2088     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1b9#2119 | 0x1401fa1b9 | 2119     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1c7#432  | 0x1401fa1c7 | 432      | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1c7#433  | 0x1401fa1c7 | 433      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401fa1c9#434  | 0x1401fa1c9 | 434      | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1c9#435  | 0x1401fa1c9 | 435      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1d5#441  | 0x1401fa1d5 | 441      | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1dc#450  | 0x1401fa1dc | 450      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401fa1dc#2299 | 0x1401fa1dc | 2299     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa1dc#2316 | 0x1401fa1dc | 2316     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa1de#452  | 0x1401fa1de | 452      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1de#2291 | 0x1401fa1de | 2291     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401fa1de#2317 | 0x1401fa1de | 2317     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa1e5#465  | 0x1401fa1e5 | 465      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1e5#2292 | 0x1401fa1e5 | 2292     | INT_SUB      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1e5#2318 | 0x1401fa1e5 | 2318     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa1e5#2319 | 0x1401fa1e5 | 2319     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa1ed#482  | 0x1401fa1ed | 482      | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1ed#484  | 0x1401fa1ed | 484      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401fa1ed#2320 | 0x1401fa1ed | 2320     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa1f3#485  | 0x1401fa1f3 | 485      | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1f3#486  | 0x1401fa1f3 | 486      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1fe#491  | 0x1401fa1fe | 491      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401fa1fe#1044 | 0x1401fa1fe | 1044     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1fe#1141 | 0x1401fa1fe | 1141     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1fe#1683 | 0x1401fa1fe | 1683     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1fe#1747 | 0x1401fa1fe | 1747     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1fe#1778 | 0x1401fa1fe | 1778     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1fe#1809 | 0x1401fa1fe | 1809     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1fe#1840 | 0x1401fa1fe | 1840     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1fe#1871 | 0x1401fa1fe | 1871     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1fe#1902 | 0x1401fa1fe | 1902     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1fe#1935 | 0x1401fa1fe | 1935     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1fe#1966 | 0x1401fa1fe | 1966     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1fe#1997 | 0x1401fa1fe | 1997     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1fe#2028 | 0x1401fa1fe | 2028     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1fe#2059 | 0x1401fa1fe | 2059     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1fe#2090 | 0x1401fa1fe | 2090     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1fe#2121 | 0x1401fa1fe | 2121     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa203#494  | 0x1401fa203 | 494      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa203#1694 | 0x1401fa203 | 1694     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa203#1756 | 0x1401fa203 | 1756     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa203#1787 | 0x1401fa203 | 1787     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa203#1818 | 0x1401fa203 | 1818     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa203#1849 | 0x1401fa203 | 1849     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa203#1880 | 0x1401fa203 | 1880     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa203#1911 | 0x1401fa203 | 1911     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa203#1944 | 0x1401fa203 | 1944     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa203#1975 | 0x1401fa203 | 1975     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa203#2068 | 0x1401fa203 | 2068     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa203#2099 | 0x1401fa203 | 2099     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa203#2130 | 0x1401fa203 | 2130     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa207#497  | 0x1401fa207 | 497      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa20f#1916 | 0x1401fa20f | 1916     | INT_AND      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa20f#2322 | 0x1401fa20f | 2322     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa20f#2323 | 0x1401fa20f | 2323     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa213#2293 | 0x1401fa213 | 2293     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa21c#516  | 0x1401fa21c | 516      | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa21c#521  | 0x1401fa21c | 521      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401fa21c#2300 | 0x1401fa21c | 2300     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa21c#2301 | 0x1401fa21c | 2301     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa21c#2324 | 0x1401fa21c | 2324     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa221#1273 | 0x1401fa221 | 1273     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa229#534  | 0x1401fa229 | 534      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa229#535  | 0x1401fa229 | 535      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa229#2325 | 0x1401fa229 | 2325     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa230#539  | 0x1401fa230 | 539      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401fa230#1684 | 0x1401fa230 | 1684     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa230#1748 | 0x1401fa230 | 1748     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa230#1779 | 0x1401fa230 | 1779     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa230#1810 | 0x1401fa230 | 1810     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa230#1841 | 0x1401fa230 | 1841     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa230#1872 | 0x1401fa230 | 1872     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa230#1903 | 0x1401fa230 | 1903     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa230#1936 | 0x1401fa230 | 1936     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa230#1967 | 0x1401fa230 | 1967     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa230#1998 | 0x1401fa230 | 1998     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa230#2029 | 0x1401fa230 | 2029     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa230#2060 | 0x1401fa230 | 2060     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa230#2091 | 0x1401fa230 | 2091     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa230#2122 | 0x1401fa230 | 2122     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa235#540  | 0x1401fa235 | 540      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa235#541  | 0x1401fa235 | 541      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa235#2326 | 0x1401fa235 | 2326     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa23c#547  | 0x1401fa23c | 547      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa23f#552  | 0x1401fa23f | 552      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401fa241#553  | 0x1401fa241 | 553      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa241#554  | 0x1401fa241 | 554      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa241#560  | 0x1401fa241 | 560      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa241#2327 | 0x1401fa241 | 2327     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa249#565  | 0x1401fa249 | 565      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401fa24b#569  | 0x1401fa24b | 569      | CALL         | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401fa24b#1685 | 0x1401fa24b | 1685     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa24b#1749 | 0x1401fa24b | 1749     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa24b#1780 | 0x1401fa24b | 1780     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa24b#1811 | 0x1401fa24b | 1811     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa24b#1842 | 0x1401fa24b | 1842     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa24b#1873 | 0x1401fa24b | 1873     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa24b#1904 | 0x1401fa24b | 1904     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa24b#1937 | 0x1401fa24b | 1937     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa24b#1968 | 0x1401fa24b | 1968     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa24b#1999 | 0x1401fa24b | 1999     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa24b#2030 | 0x1401fa24b | 2030     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa24b#2061 | 0x1401fa24b | 2061     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa24b#2092 | 0x1401fa24b | 2092     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa24b#2123 | 0x1401fa24b | 2123     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa252#1692 | 0x1401fa252 | 1692     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401fa252#1754 | 0x1401fa252 | 1754     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401fa252#1785 | 0x1401fa252 | 1785     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401fa252#1816 | 0x1401fa252 | 1816     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401fa252#1847 | 0x1401fa252 | 1847     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401fa252#1878 | 0x1401fa252 | 1878     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401fa252#1909 | 0x1401fa252 | 1909     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401fa252#1942 | 0x1401fa252 | 1942     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401fa252#1973 | 0x1401fa252 | 1973     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401fa252#2004 | 0x1401fa252 | 2004     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401fa252#2035 | 0x1401fa252 | 2035     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401fa252#2066 | 0x1401fa252 | 2066     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401fa252#2097 | 0x1401fa252 | 2097     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401fa252#2128 | 0x1401fa252 | 2128     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401fa25a#583  | 0x1401fa25a | 583      | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa25a#584  | 0x1401fa25a | 584      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401fa25c#585  | 0x1401fa25c | 585      | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa25c#586  | 0x1401fa25c | 586      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa268#592  | 0x1401fa268 | 592      | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa26f#601  | 0x1401fa26f | 601      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401fa26f#2298 | 0x1401fa26f | 2298     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa26f#2328 | 0x1401fa26f | 2328     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa271#603  | 0x1401fa271 | 603      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa271#2294 | 0x1401fa271 | 2294     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401fa271#2329 | 0x1401fa271 | 2329     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa278#616  | 0x1401fa278 | 616      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa278#2295 | 0x1401fa278 | 2295     | INT_SUB      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa278#2330 | 0x1401fa278 | 2330     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa278#2331 | 0x1401fa278 | 2331     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa280#633  | 0x1401fa280 | 633      | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa280#635  | 0x1401fa280 | 635      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401fa280#2332 | 0x1401fa280 | 2332     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa282#636  | 0x1401fa282 | 636      | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa282#637  | 0x1401fa282 | 637      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa28d#642  | 0x1401fa28d | 642      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401fa28d#1040 | 0x1401fa28d | 1040     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa28d#1137 | 0x1401fa28d | 1137     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa28d#1688 | 0x1401fa28d | 1688     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa28d#1752 | 0x1401fa28d | 1752     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa28d#1783 | 0x1401fa28d | 1783     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa28d#1814 | 0x1401fa28d | 1814     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa28d#1845 | 0x1401fa28d | 1845     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa28d#1876 | 0x1401fa28d | 1876     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa28d#1907 | 0x1401fa28d | 1907     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa28d#1940 | 0x1401fa28d | 1940     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa28d#1971 | 0x1401fa28d | 1971     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa28d#2002 | 0x1401fa28d | 2002     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa28d#2033 | 0x1401fa28d | 2033     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa28d#2126 | 0x1401fa28d | 2126     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa292#1691 | 0x1401fa292 | 1691     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401fa2a9#685  | 0x1401fa2a9 | 685      | RETURN       | true    | member           | [object Object]                                                                 |                 |
| 0x1401fa2a9#1689 | 0x1401fa2a9 | 1689     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa2af#693  | 0x1401fa2af | 693      | CALLOTHER    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2af#694  | 0x1401fa2af | 694      | CALLIND      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401fa2af#1682 | 0x1401fa2af | 1682     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2af#1746 | 0x1401fa2af | 1746     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2af#1777 | 0x1401fa2af | 1777     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2af#1808 | 0x1401fa2af | 1808     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2af#1839 | 0x1401fa2af | 1839     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2af#1870 | 0x1401fa2af | 1870     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2af#1901 | 0x1401fa2af | 1901     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2af#1934 | 0x1401fa2af | 1934     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2af#1965 | 0x1401fa2af | 1965     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2af#1996 | 0x1401fa2af | 1996     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2af#2027 | 0x1401fa2af | 2027     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2af#2120 | 0x1401fa2af | 2120     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2af#2321 | 0x1401fa2af | 2321     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa2b1#1693 | 0x1401fa2b1 | 1693     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b1#1755 | 0x1401fa2b1 | 1755     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b1#1786 | 0x1401fa2b1 | 1786     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b1#1817 | 0x1401fa2b1 | 1817     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b1#1848 | 0x1401fa2b1 | 1848     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b1#1879 | 0x1401fa2b1 | 1879     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b1#1910 | 0x1401fa2b1 | 1910     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b1#1943 | 0x1401fa2b1 | 1943     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b1#1974 | 0x1401fa2b1 | 1974     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b1#2005 | 0x1401fa2b1 | 2005     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b1#2036 | 0x1401fa2b1 | 2036     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b1#2129 | 0x1401fa2b1 | 2129     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b6#687  | 0x1401fa2b6 | 687      | CALLOTHER    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b6#688  | 0x1401fa2b6 | 688      | CALLIND      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401fa2b6#1686 | 0x1401fa2b6 | 1686     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b6#1750 | 0x1401fa2b6 | 1750     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b6#1781 | 0x1401fa2b6 | 1781     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b6#1812 | 0x1401fa2b6 | 1812     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b6#1843 | 0x1401fa2b6 | 1843     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b6#1874 | 0x1401fa2b6 | 1874     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b6#1905 | 0x1401fa2b6 | 1905     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b6#1938 | 0x1401fa2b6 | 1938     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b6#1969 | 0x1401fa2b6 | 1969     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b6#2000 | 0x1401fa2b6 | 2000     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b6#2031 | 0x1401fa2b6 | 2031     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b6#2124 | 0x1401fa2b6 | 2124     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b6#2333 | 0x1401fa2b6 | 2333     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa2b8#689  | 0x1401fa2b8 | 689      | CALLOTHER    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b8#690  | 0x1401fa2b8 | 690      | CALLIND      | true    | member           | [object Object]                                                                 |                 |
| 0x1401fa2b8#691  | 0x1401fa2b8 | 691      | RETURN       | true    | member           | [object Object]                                                                 |                 |
| 0x1401fa2b8#1687 | 0x1401fa2b8 | 1687     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b8#1690 | 0x1401fa2b8 | 1690     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa2b8#1751 | 0x1401fa2b8 | 1751     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b8#1782 | 0x1401fa2b8 | 1782     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b8#1813 | 0x1401fa2b8 | 1813     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b8#1844 | 0x1401fa2b8 | 1844     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b8#1875 | 0x1401fa2b8 | 1875     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b8#1906 | 0x1401fa2b8 | 1906     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b8#1939 | 0x1401fa2b8 | 1939     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b8#1970 | 0x1401fa2b8 | 1970     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b8#2001 | 0x1401fa2b8 | 2001     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b8#2032 | 0x1401fa2b8 | 2032     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b8#2125 | 0x1401fa2b8 | 2125     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b8#2334 | 0x1401fa2b8 | 2334     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |

## raw_result.value.native_value_flow.def_use

| definition       | use              | input_index |
|------------------|------------------|-------------|
| 0x1401f9fc8#2302 | 0x1401f9fc8#26   | 1           |
| 0x1401f9fba#2283 | 0x1401f9fc8#2302 | 0           |
| 0x1401f9fd4#2303 | 0x1401f9fd4#48   | 1           |
| 0x1401f9fd4#47   | 0x1401f9fd4#2303 | 0           |
| 0x1401f9fd4#48   | 0x1401f9fdb#54   | 0           |
| 0x1401f9fdb#54   | 0x1401f9fde#59   | 1           |
| 0x1401f9fd4#48   | 0x1401f9fe4#63   | 1           |
| 0x1401f9fc8#26   | 0x1401f9fe4#2103 | 0           |
| 0x1401f9fec#2275 | 0x1401f9fec#74   | 1           |
| 0x1401f9fec#74   | 0x1401f9fec#75   | 1           |
| 0x1401f9fe4#1665 | 0x1401f9fec#2271 | 0           |
| 0x1401fa010#1667 | 0x1401f9fec#2271 | 1           |
| 0x1401f9fe4#2041 | 0x1401f9fec#2272 | 0           |
| 0x1401fa010#2043 | 0x1401f9fec#2272 | 1           |
| 0x1401f9fe4#2072 | 0x1401f9fec#2273 | 0           |
| 0x1401fa010#2074 | 0x1401f9fec#2273 | 1           |
| 0x1401f9fe4#2103 | 0x1401f9fec#2274 | 0           |
| 0x1401fa010#2105 | 0x1401f9fec#2274 | 1           |
| 0x1401f9fe4#63   | 0x1401f9fec#2275 | 0           |
| 0x1401fa010#110  | 0x1401f9fec#2275 | 1           |
| 0x1401f9ff8#2304 | 0x1401f9ff8#88   | 1           |
| 0x1401f9ff8#87   | 0x1401f9ff8#2304 | 0           |
| 0x1401f9ff8#88   | 0x1401f9fff#93   | 1           |
| 0x1401f9fec#2271 | 0x1401f9fff#1666 | 0           |
| 0x1401f9fec#2272 | 0x1401f9fff#2042 | 0           |
| 0x1401f9fec#2273 | 0x1401f9fff#2073 | 0           |
| 0x1401f9fec#2274 | 0x1401f9fff#2104 | 0           |
| 0x1401f9fff#93   | 0x1401fa005#98   | 0           |
| 0x1401fa005#98   | 0x1401fa007#103  | 1           |
| 0x1401fa009#2305 | 0x1401fa009#105  | 1           |
| 0x1401fa009#104  | 0x1401fa009#2305 | 0           |
| 0x1401fa009#105  | 0x1401fa010#110  | 1           |
| 0x1401f9fff#1666 | 0x1401fa010#1667 | 0           |
| 0x1401f9fff#2042 | 0x1401fa010#2043 | 0           |
| 0x1401f9fff#2073 | 0x1401fa010#2074 | 0           |
| 0x1401f9fff#2104 | 0x1401fa010#2105 | 0           |
| 0x1401f9fec#2271 | 0x1401fa01a#1697 | 0           |
| 0x1401f9fff#1666 | 0x1401fa01a#1697 | 1           |
| 0x1401f9fec#2272 | 0x1401fa01a#2071 | 0           |
| 0x1401f9fff#2042 | 0x1401fa01a#2071 | 1           |
| 0x1401f9fec#2273 | 0x1401fa01a#2102 | 0           |
| 0x1401f9fff#2073 | 0x1401fa01a#2102 | 1           |
| 0x1401f9fec#2274 | 0x1401fa01a#2133 | 0           |
| 0x1401f9fff#2104 | 0x1401fa01a#2133 | 1           |
| 0x1401fa01a#124  | 0x1401fa021#128  | 1           |
| 0x1401fa01a#1697 | 0x1401fa021#1668 | 0           |
| 0x1401fa01a#2071 | 0x1401fa021#2044 | 0           |
| 0x1401fa01a#2102 | 0x1401fa021#2075 | 0           |
| 0x1401fa01a#2133 | 0x1401fa021#2106 | 0           |
| 0x1401fa021#128  | 0x1401fa026#133  | 0           |
| 0x1401fa026#133  | 0x1401fa028#138  | 1           |
| 0x1401fa048#2306 | 0x1401fa048#708  | 1           |
| 0x1401fa048#707  | 0x1401fa048#2306 | 0           |
| 0x1401fa048#708  | 0x1401fa04f#712  | 1           |
| 0x1401fa04f#2278 | 0x1401fa04f#712  | 4           |
| 0x1401fa021#1668 | 0x1401fa04f#1669 | 0           |
| 0x1401fa021#2044 | 0x1401fa04f#2045 | 0           |
| 0x1401fa021#2075 | 0x1401fa04f#2076 | 0           |
| 0x1401fa021#2106 | 0x1401fa04f#2107 | 0           |
| 0x1401fa02a#139  | 0x1401fa061#1220 | 0           |
| 0x1401fa054#713  | 0x1401fa061#1220 | 1           |
| 0x1401fa030#140  | 0x1401fa061#1276 | 0           |
| 0x1401fa05a#714  | 0x1401fa061#1276 | 1           |
| 0x1401fa021#1668 | 0x1401fa061#1695 | 0           |
| 0x1401fa04f#1669 | 0x1401fa061#1695 | 1           |
| 0x1401fa021#2044 | 0x1401fa061#2069 | 0           |
| 0x1401fa04f#2045 | 0x1401fa061#2069 | 1           |
| 0x1401fa021#2075 | 0x1401fa061#2100 | 0           |
| 0x1401fa04f#2076 | 0x1401fa061#2100 | 1           |
| 0x1401fa021#2106 | 0x1401fa061#2131 | 0           |
| 0x1401fa04f#2107 | 0x1401fa061#2131 | 1           |
| 0x1401fa063#2307 | 0x1401fa063#153  | 1           |
| 0x1401fa063#152  | 0x1401fa063#2307 | 0           |
| 0x1401fa063#153  | 0x1401fa06a#157  | 1           |
| 0x1401fa061#1220 | 0x1401fa06a#157  | 3           |
| 0x1401fa061#1276 | 0x1401fa06a#157  | 4           |
| 0x1401fa061#1695 | 0x1401fa06a#1670 | 0           |
| 0x1401fa061#2069 | 0x1401fa06a#2046 | 0           |
| 0x1401fa061#2100 | 0x1401fa06a#2077 | 0           |
| 0x1401fa061#2131 | 0x1401fa06a#2108 | 0           |
| 0x1401fa07a#2308 | 0x1401fa07a#180  | 1           |
| 0x1401fa07a#179  | 0x1401fa07a#2308 | 0           |
| 0x1401fa07a#180  | 0x1401fa081#184  | 1           |
| 0x1401fa06a#1670 | 0x1401fa081#1671 | 0           |
| 0x1401fa06a#2046 | 0x1401fa081#2047 | 0           |
| 0x1401fa06a#2077 | 0x1401fa081#2078 | 0           |
| 0x1401fa06a#2108 | 0x1401fa081#2109 | 0           |
| 0x1401fa088#2309 | 0x1401fa088#188  | 1           |
| 0x1401fa088#188  | 0x1401fa088#194  | 0           |
| 0x1401fa088#187  | 0x1401fa088#2309 | 0           |
| 0x1401fa09e#2310 | 0x1401fa09e#204  | 1           |
| 0x1401fa09e#203  | 0x1401fa09e#2310 | 0           |
| 0x1401fa09e#204  | 0x1401fa0a5#208  | 1           |
| 0x1401fa088#194  | 0x1401fa0a5#208  | 2           |
| 0x1401fa0a5#2280 | 0x1401fa0a5#208  | 4           |
| 0x1401fa081#1671 | 0x1401fa0a5#1672 | 0           |
| 0x1401fa081#2047 | 0x1401fa0a5#2048 | 0           |
| 0x1401fa081#2078 | 0x1401fa0a5#2079 | 0           |
| 0x1401fa081#2109 | 0x1401fa0a5#2110 | 0           |
| 0x1401fa0b5#2311 | 0x1401fa0b5#231  | 1           |
| 0x1401fa0b5#230  | 0x1401fa0b5#2311 | 0           |
| 0x1401fa0b5#231  | 0x1401fa0bc#235  | 1           |
| 0x1401fa0a5#1672 | 0x1401fa0bc#1673 | 0           |
| 0x1401fa0a5#2048 | 0x1401fa0bc#2049 | 0           |
| 0x1401fa0a5#2079 | 0x1401fa0bc#2080 | 0           |
| 0x1401fa0a5#2110 | 0x1401fa0bc#2111 | 0           |
| 0x1401fa0d0#2312 | 0x1401fa0d0#249  | 1           |
| 0x1401fa0d0#248  | 0x1401fa0d0#2312 | 0           |
| 0x1401fa0d0#249  | 0x1401fa0d7#253  | 1           |
| 0x1401fa0d7#2279 | 0x1401fa0d7#253  | 4           |
| 0x1401fa0bc#1673 | 0x1401fa0d7#1674 | 0           |
| 0x1401fa0bc#2049 | 0x1401fa0d7#2050 | 0           |
| 0x1401fa0bc#2080 | 0x1401fa0d7#2081 | 0           |
| 0x1401fa0bc#2111 | 0x1401fa0d7#2112 | 0           |
| 0x1401fa0eb#2313 | 0x1401fa0eb#267  | 1           |
| 0x1401fa0eb#266  | 0x1401fa0eb#2313 | 0           |
| 0x1401fa0eb#267  | 0x1401fa0f2#271  | 1           |
| 0x1401fa0f2#2281 | 0x1401fa0f2#271  | 4           |
| 0x1401fa0d7#1674 | 0x1401fa0f2#1675 | 0           |
| 0x1401fa0d7#2050 | 0x1401fa0f2#2051 | 0           |
| 0x1401fa0d7#2081 | 0x1401fa0f2#2082 | 0           |
| 0x1401fa0d7#2112 | 0x1401fa0f2#2113 | 0           |
| 0x1401fa106#2314 | 0x1401fa106#285  | 1           |
| 0x1401fa106#284  | 0x1401fa106#2314 | 0           |
| 0x1401fa106#285  | 0x1401fa10d#289  | 1           |
| 0x1401fa10d#2282 | 0x1401fa10d#289  | 4           |
| 0x1401fa0f2#1675 | 0x1401fa10d#1676 | 0           |
| 0x1401fa0f2#2051 | 0x1401fa10d#2052 | 0           |
| 0x1401fa0f2#2082 | 0x1401fa10d#2083 | 0           |
| 0x1401fa0f2#2113 | 0x1401fa10d#2114 | 0           |
| 0x1401fa11d#2315 | 0x1401fa11d#312  | 1           |
| 0x1401fa11d#311  | 0x1401fa11d#2315 | 0           |
| 0x1401fa11d#312  | 0x1401fa124#316  | 1           |
| 0x1401fa10d#1676 | 0x1401fa124#1677 | 0           |
| 0x1401fa10d#2052 | 0x1401fa124#2053 | 0           |
| 0x1401fa10d#2083 | 0x1401fa124#2084 | 0           |
| 0x1401fa10d#2114 | 0x1401fa124#2115 | 0           |
| 0x1401fa129#317  | 0x1401fa130#321  | 1           |
| 0x1401fa124#1677 | 0x1401fa130#1678 | 0           |
| 0x1401fa124#2053 | 0x1401fa130#2054 | 0           |
| 0x1401fa124#2084 | 0x1401fa130#2085 | 0           |
| 0x1401fa124#2115 | 0x1401fa130#2116 | 0           |
| 0x1401fa130#321  | 0x1401fa143#328  | 0           |
| 0x1401fa143#328  | 0x1401fa145#336  | 1           |
| 0x1401fa13c#323  | 0x1401fa149#1163 | 0           |
| 0x1401fa145#337  | 0x1401fa149#1163 | 1           |
| 0x1401fa149#1163 | 0x1401fa15b#354  | 1           |
| 0x1401fa130#1678 | 0x1401fa15b#1679 | 0           |
| 0x1401fa14c#1660 | 0x1401fa15b#1931 | 0           |
| 0x1401fa14c#1661 | 0x1401fa15b#1962 | 0           |
| 0x1401fa150#347  | 0x1401fa15b#1993 | 0           |
| 0x1401fa154#350  | 0x1401fa15b#2024 | 0           |
| 0x1401fa130#2054 | 0x1401fa15b#2055 | 0           |
| 0x1401fa130#2085 | 0x1401fa15b#2086 | 0           |
| 0x1401fa130#2116 | 0x1401fa15b#2117 | 0           |
| 0x1401fa166#2284 | 0x1401fa16a#361  | 1           |
| 0x1401fa149#1163 | 0x1401fa16a#361  | 2           |
| 0x1401fa15b#354  | 0x1401fa16a#361  | 3           |
| 0x1401fa15b#1679 | 0x1401fa16a#1680 | 0           |
| 0x1401fa15b#1931 | 0x1401fa16a#1932 | 0           |
| 0x1401fa15b#1962 | 0x1401fa16a#1963 | 0           |
| 0x1401fa15b#1993 | 0x1401fa16a#1994 | 0           |
| 0x1401fa15b#2024 | 0x1401fa16a#2025 | 0           |
| 0x1401fa15b#2055 | 0x1401fa16a#2056 | 0           |
| 0x1401fa15b#2086 | 0x1401fa16a#2087 | 0           |
| 0x1401fa15b#2117 | 0x1401fa16a#2118 | 0           |
| 0x1401fa16a#2025 | 0x1401fa179#377  | 1           |
| 0x1401fa179#377  | 0x1401fa179#382  | 1           |
| 0x1401fa170#2285 | 0x1401fa179#2296 | 0           |
| 0x1401fa16a#1932 | 0x1401fa179#2297 | 0           |
| 0x1401fa179#2296 | 0x1401fa17e#1012 | 0           |
| 0x1401fa179#2297 | 0x1401fa17e#1012 | 1           |
| 0x1401fa16a#1994 | 0x1401fa186#392  | 0           |
| 0x1401fa1b5#2290 | 0x1401fa1b9#418  | 1           |
| 0x1401fa1b1#2289 | 0x1401fa1b9#418  | 2           |
| 0x1401fa1ad#2288 | 0x1401fa1b9#418  | 3           |
| 0x1401fa16a#1680 | 0x1401fa1b9#1681 | 0           |
| 0x1401fa17e#1012 | 0x1401fa1b9#1745 | 0           |
| 0x1401fa186#392  | 0x1401fa1b9#1776 | 0           |
| 0x1401fa18a#2286 | 0x1401fa1b9#1807 | 0           |
| 0x1401fa192#2287 | 0x1401fa1b9#1838 | 0           |
| 0x1401fa1a1#406  | 0x1401fa1b9#1869 | 0           |
| 0x1401fa1a5#409  | 0x1401fa1b9#1900 | 0           |
| 0x1401fa16a#1932 | 0x1401fa1b9#1933 | 0           |
| 0x1401fa16a#1963 | 0x1401fa1b9#1964 | 0           |
| 0x1401fa16a#1994 | 0x1401fa1b9#1995 | 0           |
| 0x1401fa16a#2025 | 0x1401fa1b9#2026 | 0           |
| 0x1401fa16a#2056 | 0x1401fa1b9#2057 | 0           |
| 0x1401fa16a#2087 | 0x1401fa1b9#2088 | 0           |
| 0x1401fa16a#2118 | 0x1401fa1b9#2119 | 0           |
| 0x1401fa1b9#2026 | 0x1401fa1c7#432  | 1           |
| 0x1401fa1c7#432  | 0x1401fa1c7#433  | 1           |
| 0x1401fa1b9#2026 | 0x1401fa1c9#434  | 0           |
| 0x1401fa1c9#434  | 0x1401fa1c9#435  | 0           |
| 0x1401fa1c9#435  | 0x1401fa1d5#441  | 1           |
| 0x1401fa1d5#441  | 0x1401fa1dc#450  | 1           |
| 0x1401fa1dc#2316 | 0x1401fa1dc#2299 | 0           |
| 0x1401fa1b9#1933 | 0x1401fa1dc#2316 | 0           |
| 0x1401fa1de#2291 | 0x1401fa1de#452  | 1           |
| 0x1401fa1b9#1933 | 0x1401fa1de#2291 | 0           |
| 0x1401fa1de#452  | 0x1401fa1de#2317 | 0           |
| 0x1401fa1e5#2319 | 0x1401fa1e5#465  | 0           |
| 0x1401fa1e5#2292 | 0x1401fa1e5#465  | 1           |
| 0x1401fa1e5#2318 | 0x1401fa1e5#2292 | 1           |
| 0x1401fa1de#2317 | 0x1401fa1e5#2318 | 0           |
| 0x1401fa1b9#1933 | 0x1401fa1e5#2319 | 0           |
| 0x1401fa1ed#2320 | 0x1401fa1ed#482  | 1           |
| 0x1401fa1ed#482  | 0x1401fa1ed#484  | 1           |
| 0x1401fa1e5#465  | 0x1401fa1ed#2320 | 0           |
| 0x1401fa1b9#2026 | 0x1401fa1f3#485  | 0           |
| 0x1401fa1f3#485  | 0x1401fa1f3#486  | 0           |
| 0x1401fa1fe#1044 | 0x1401fa1fe#491  | 1           |
| 0x1401fa1fe#1141 | 0x1401fa1fe#491  | 2           |
| 0x1401fa1dc#2299 | 0x1401fa1fe#1044 | 0           |
| 0x1401fa1de#2317 | 0x1401fa1fe#1044 | 1           |
| 0x1401fa1c9#435  | 0x1401fa1fe#1141 | 0           |
| 0x1401fa1f3#486  | 0x1401fa1fe#1141 | 1           |
| 0x1401fa1b9#1681 | 0x1401fa1fe#1683 | 0           |
| 0x1401fa1b9#1745 | 0x1401fa1fe#1747 | 0           |
| 0x1401fa1b9#1776 | 0x1401fa1fe#1778 | 0           |
| 0x1401fa1b9#1807 | 0x1401fa1fe#1809 | 0           |
| 0x1401fa1b9#1838 | 0x1401fa1fe#1840 | 0           |
| 0x1401fa1b9#1869 | 0x1401fa1fe#1871 | 0           |
| 0x1401fa1b9#1900 | 0x1401fa1fe#1902 | 0           |
| 0x1401fa1b9#1933 | 0x1401fa1fe#1935 | 0           |
| 0x1401fa1b9#1964 | 0x1401fa1fe#1966 | 0           |
| 0x1401fa1b9#1995 | 0x1401fa1fe#1997 | 0           |
| 0x1401fa1b9#2026 | 0x1401fa1fe#2028 | 0           |
| 0x1401fa1b9#2057 | 0x1401fa1fe#2059 | 0           |
| 0x1401fa1b9#2088 | 0x1401fa1fe#2090 | 0           |
| 0x1401fa1b9#2119 | 0x1401fa1fe#2121 | 0           |
| 0x1401fa1b9#1681 | 0x1401fa203#1694 | 0           |
| 0x1401fa1fe#1683 | 0x1401fa203#1694 | 1           |
| 0x1401fa1b9#1745 | 0x1401fa203#1756 | 0           |
| 0x1401fa1fe#1747 | 0x1401fa203#1756 | 1           |
| 0x1401fa1b9#1776 | 0x1401fa203#1787 | 0           |
| 0x1401fa1fe#1778 | 0x1401fa203#1787 | 1           |
| 0x1401fa1b9#1807 | 0x1401fa203#1818 | 0           |
| 0x1401fa1fe#1809 | 0x1401fa203#1818 | 1           |
| 0x1401fa1b9#1838 | 0x1401fa203#1849 | 0           |
| 0x1401fa1fe#1840 | 0x1401fa203#1849 | 1           |
| 0x1401fa1b9#1869 | 0x1401fa203#1880 | 0           |
| 0x1401fa1fe#1871 | 0x1401fa203#1880 | 1           |
| 0x1401fa1b9#1900 | 0x1401fa203#1911 | 0           |
| 0x1401fa1fe#1902 | 0x1401fa203#1911 | 1           |
| 0x1401fa1b9#1933 | 0x1401fa203#1944 | 0           |
| 0x1401fa1fe#1935 | 0x1401fa203#1944 | 1           |
| 0x1401fa1b9#1964 | 0x1401fa203#1975 | 0           |
| 0x1401fa1fe#1966 | 0x1401fa203#1975 | 1           |
| 0x1401fa1b9#2057 | 0x1401fa203#2068 | 0           |
| 0x1401fa1fe#2059 | 0x1401fa203#2068 | 1           |
| 0x1401fa1b9#2088 | 0x1401fa203#2099 | 0           |
| 0x1401fa1fe#2090 | 0x1401fa203#2099 | 1           |
| 0x1401fa1b9#2119 | 0x1401fa203#2130 | 0           |
| 0x1401fa1fe#2121 | 0x1401fa203#2130 | 1           |
| 0x1401fa20f#2322 | 0x1401fa20f#1916 | 0           |
| 0x1401fa203#1944 | 0x1401fa20f#2322 | 0           |
| 0x1401fa20f#1916 | 0x1401fa20f#2323 | 0           |
| 0x1401fa203#2099 | 0x1401fa21c#516  | 1           |
| 0x1401fa21c#516  | 0x1401fa21c#521  | 1           |
| 0x1401fa213#2293 | 0x1401fa21c#2300 | 0           |
| 0x1401fa21c#2324 | 0x1401fa21c#2301 | 0           |
| 0x1401fa203#2068 | 0x1401fa21c#2324 | 0           |
| 0x1401fa21c#2300 | 0x1401fa221#1273 | 0           |
| 0x1401fa21c#2301 | 0x1401fa221#1273 | 1           |
| 0x1401fa229#2325 | 0x1401fa229#535  | 1           |
| 0x1401fa229#534  | 0x1401fa229#2325 | 0           |
| 0x1401fa229#535  | 0x1401fa230#539  | 1           |
| 0x1401fa221#1273 | 0x1401fa230#539  | 4           |
| 0x1401fa203#1694 | 0x1401fa230#1684 | 0           |
| 0x1401fa203#1756 | 0x1401fa230#1748 | 0           |
| 0x1401fa203#1787 | 0x1401fa230#1779 | 0           |
| 0x1401fa203#1818 | 0x1401fa230#1810 | 0           |
| 0x1401fa203#1849 | 0x1401fa230#1841 | 0           |
| 0x1401fa203#1880 | 0x1401fa230#1872 | 0           |
| 0x1401fa203#1911 | 0x1401fa230#1903 | 0           |
| 0x1401fa20f#2323 | 0x1401fa230#1936 | 0           |
| 0x1401fa203#1975 | 0x1401fa230#1967 | 0           |
| 0x1401fa203#494  | 0x1401fa230#1998 | 0           |
| 0x1401fa207#497  | 0x1401fa230#2029 | 0           |
| 0x1401fa203#2068 | 0x1401fa230#2060 | 0           |
| 0x1401fa203#2099 | 0x1401fa230#2091 | 0           |
| 0x1401fa203#2130 | 0x1401fa230#2122 | 0           |
| 0x1401fa235#2326 | 0x1401fa235#541  | 1           |
| 0x1401fa235#540  | 0x1401fa235#2326 | 0           |
| 0x1401fa235#541  | 0x1401fa23c#547  | 0           |
| 0x1401fa23c#547  | 0x1401fa23f#552  | 1           |
| 0x1401fa241#2327 | 0x1401fa241#554  | 1           |
| 0x1401fa241#554  | 0x1401fa241#560  | 0           |
| 0x1401fa241#553  | 0x1401fa241#2327 | 0           |
| 0x1401fa241#560  | 0x1401fa249#565  | 1           |
| 0x1401fa235#541  | 0x1401fa24b#569  | 1           |
| 0x1401fa230#1684 | 0x1401fa24b#1685 | 0           |
| 0x1401fa230#1748 | 0x1401fa24b#1749 | 0           |
| 0x1401fa230#1779 | 0x1401fa24b#1780 | 0           |
| 0x1401fa230#1810 | 0x1401fa24b#1811 | 0           |
| 0x1401fa230#1841 | 0x1401fa24b#1842 | 0           |
| 0x1401fa230#1872 | 0x1401fa24b#1873 | 0           |
| 0x1401fa230#1903 | 0x1401fa24b#1904 | 0           |
| 0x1401fa230#1936 | 0x1401fa24b#1937 | 0           |
| 0x1401fa230#1967 | 0x1401fa24b#1968 | 0           |
| 0x1401fa230#1998 | 0x1401fa24b#1999 | 0           |
| 0x1401fa230#2029 | 0x1401fa24b#2030 | 0           |
| 0x1401fa230#2060 | 0x1401fa24b#2061 | 0           |
| 0x1401fa230#2091 | 0x1401fa24b#2092 | 0           |
| 0x1401fa230#2122 | 0x1401fa24b#2123 | 0           |
| 0x1401fa230#1684 | 0x1401fa252#1692 | 0           |
| 0x1401fa230#1684 | 0x1401fa252#1692 | 1           |
| 0x1401fa24b#1685 | 0x1401fa252#1692 | 2           |
| 0x1401fa230#1748 | 0x1401fa252#1754 | 0           |
| 0x1401fa230#1748 | 0x1401fa252#1754 | 1           |
| 0x1401fa24b#1749 | 0x1401fa252#1754 | 2           |
| 0x1401fa230#1779 | 0x1401fa252#1785 | 0           |
| 0x1401fa230#1779 | 0x1401fa252#1785 | 1           |
| 0x1401fa24b#1780 | 0x1401fa252#1785 | 2           |
| 0x1401fa230#1810 | 0x1401fa252#1816 | 0           |
| 0x1401fa230#1810 | 0x1401fa252#1816 | 1           |
| 0x1401fa24b#1811 | 0x1401fa252#1816 | 2           |
| 0x1401fa230#1841 | 0x1401fa252#1847 | 0           |
| 0x1401fa230#1841 | 0x1401fa252#1847 | 1           |
| 0x1401fa24b#1842 | 0x1401fa252#1847 | 2           |
| 0x1401fa230#1872 | 0x1401fa252#1878 | 0           |
| 0x1401fa230#1872 | 0x1401fa252#1878 | 1           |
| 0x1401fa24b#1873 | 0x1401fa252#1878 | 2           |
| 0x1401fa230#1903 | 0x1401fa252#1909 | 0           |
| 0x1401fa230#1903 | 0x1401fa252#1909 | 1           |
| 0x1401fa24b#1904 | 0x1401fa252#1909 | 2           |
| 0x1401fa230#1936 | 0x1401fa252#1942 | 0           |
| 0x1401fa230#1936 | 0x1401fa252#1942 | 1           |
| 0x1401fa24b#1937 | 0x1401fa252#1942 | 2           |
| 0x1401fa230#1967 | 0x1401fa252#1973 | 0           |
| 0x1401fa230#1967 | 0x1401fa252#1973 | 1           |
| 0x1401fa24b#1968 | 0x1401fa252#1973 | 2           |
| 0x1401fa230#1998 | 0x1401fa252#2004 | 0           |
| 0x1401fa230#1998 | 0x1401fa252#2004 | 1           |
| 0x1401fa24b#1999 | 0x1401fa252#2004 | 2           |
| 0x1401fa230#2029 | 0x1401fa252#2035 | 0           |
| 0x1401fa230#2029 | 0x1401fa252#2035 | 1           |
| 0x1401fa24b#2030 | 0x1401fa252#2035 | 2           |
| 0x1401fa230#2060 | 0x1401fa252#2066 | 0           |
| 0x1401fa230#2060 | 0x1401fa252#2066 | 1           |
| 0x1401fa24b#2061 | 0x1401fa252#2066 | 2           |
| 0x1401fa230#2091 | 0x1401fa252#2097 | 0           |
| 0x1401fa230#2091 | 0x1401fa252#2097 | 1           |
| 0x1401fa24b#2092 | 0x1401fa252#2097 | 2           |
| 0x1401fa230#2122 | 0x1401fa252#2128 | 0           |
| 0x1401fa230#2122 | 0x1401fa252#2128 | 1           |
| 0x1401fa24b#2123 | 0x1401fa252#2128 | 2           |
| 0x1401fa252#2097 | 0x1401fa25a#583  | 1           |
| 0x1401fa25a#583  | 0x1401fa25a#584  | 1           |
| 0x1401fa252#2097 | 0x1401fa25c#585  | 0           |
| 0x1401fa25c#585  | 0x1401fa25c#586  | 0           |
| 0x1401fa25c#586  | 0x1401fa268#592  | 1           |
| 0x1401fa268#592  | 0x1401fa26f#601  | 1           |
| 0x1401fa26f#2328 | 0x1401fa26f#2298 | 0           |
| 0x1401fa252#2066 | 0x1401fa26f#2328 | 0           |
| 0x1401fa271#2294 | 0x1401fa271#603  | 1           |
| 0x1401fa252#2066 | 0x1401fa271#2294 | 0           |
| 0x1401fa271#603  | 0x1401fa271#2329 | 0           |
| 0x1401fa278#2331 | 0x1401fa278#616  | 0           |
| 0x1401fa278#2295 | 0x1401fa278#616  | 1           |
| 0x1401fa278#2330 | 0x1401fa278#2295 | 1           |
| 0x1401fa271#2329 | 0x1401fa278#2330 | 0           |
| 0x1401fa252#2066 | 0x1401fa278#2331 | 0           |
| 0x1401fa280#2332 | 0x1401fa280#633  | 1           |
| 0x1401fa280#633  | 0x1401fa280#635  | 1           |
| 0x1401fa278#616  | 0x1401fa280#2332 | 0           |
| 0x1401fa252#2097 | 0x1401fa282#636  | 0           |
| 0x1401fa282#636  | 0x1401fa282#637  | 0           |
| 0x1401fa28d#1040 | 0x1401fa28d#642  | 1           |
| 0x1401fa28d#1137 | 0x1401fa28d#642  | 2           |
| 0x1401fa26f#2298 | 0x1401fa28d#1040 | 0           |
| 0x1401fa271#2329 | 0x1401fa28d#1040 | 1           |
| 0x1401fa25c#586  | 0x1401fa28d#1137 | 0           |
| 0x1401fa282#637  | 0x1401fa28d#1137 | 1           |
| 0x1401fa252#1692 | 0x1401fa28d#1688 | 0           |
| 0x1401fa252#1754 | 0x1401fa28d#1752 | 0           |
| 0x1401fa252#1785 | 0x1401fa28d#1783 | 0           |
| 0x1401fa252#1816 | 0x1401fa28d#1814 | 0           |
| 0x1401fa252#1847 | 0x1401fa28d#1845 | 0           |
| 0x1401fa252#1878 | 0x1401fa28d#1876 | 0           |
| 0x1401fa252#1909 | 0x1401fa28d#1907 | 0           |
| 0x1401fa252#1942 | 0x1401fa28d#1940 | 0           |
| 0x1401fa252#1973 | 0x1401fa28d#1971 | 0           |
| 0x1401fa252#2004 | 0x1401fa28d#2002 | 0           |
| 0x1401fa252#2035 | 0x1401fa28d#2033 | 0           |
| 0x1401fa252#2128 | 0x1401fa28d#2126 | 0           |
| 0x1401fa252#1692 | 0x1401fa292#1691 | 1           |
| 0x1401fa28d#1688 | 0x1401fa292#1691 | 2           |
| 0x1401fa292#1691 | 0x1401fa2a9#1689 | 0           |
| 0x1401fa2af#2321 | 0x1401fa2af#694  | 0           |
| 0x1401fa1b9#1681 | 0x1401fa2af#1682 | 0           |
| 0x1401fa1b9#1745 | 0x1401fa2af#1746 | 0           |
| 0x1401fa1b9#1776 | 0x1401fa2af#1777 | 0           |
| 0x1401fa1b9#1807 | 0x1401fa2af#1808 | 0           |
| 0x1401fa1b9#1838 | 0x1401fa2af#1839 | 0           |
| 0x1401fa1b9#1869 | 0x1401fa2af#1870 | 0           |
| 0x1401fa1b9#1900 | 0x1401fa2af#1901 | 0           |
| 0x1401fa1b9#1933 | 0x1401fa2af#1934 | 0           |
| 0x1401fa1b9#1964 | 0x1401fa2af#1965 | 0           |
| 0x1401fa1b9#1995 | 0x1401fa2af#1996 | 0           |
| 0x1401fa1b9#2026 | 0x1401fa2af#2027 | 0           |
| 0x1401fa1b9#2119 | 0x1401fa2af#2120 | 0           |
| 0x1401fa2af#693  | 0x1401fa2af#2321 | 0           |
| 0x1401fa252#1692 | 0x1401fa2b1#1693 | 0           |
| 0x1401fa2af#1682 | 0x1401fa2b1#1693 | 1           |
| 0x1401fa252#1754 | 0x1401fa2b1#1755 | 0           |
| 0x1401fa2af#1746 | 0x1401fa2b1#1755 | 1           |
| 0x1401fa252#1785 | 0x1401fa2b1#1786 | 0           |
| 0x1401fa2af#1777 | 0x1401fa2b1#1786 | 1           |
| 0x1401fa252#1816 | 0x1401fa2b1#1817 | 0           |
| 0x1401fa2af#1808 | 0x1401fa2b1#1817 | 1           |
| 0x1401fa252#1847 | 0x1401fa2b1#1848 | 0           |
| 0x1401fa2af#1839 | 0x1401fa2b1#1848 | 1           |
| 0x1401fa252#1878 | 0x1401fa2b1#1879 | 0           |
| 0x1401fa2af#1870 | 0x1401fa2b1#1879 | 1           |
| 0x1401fa252#1909 | 0x1401fa2b1#1910 | 0           |
| 0x1401fa2af#1901 | 0x1401fa2b1#1910 | 1           |
| 0x1401fa252#1942 | 0x1401fa2b1#1943 | 0           |
| 0x1401fa2af#1934 | 0x1401fa2b1#1943 | 1           |
| 0x1401fa252#1973 | 0x1401fa2b1#1974 | 0           |
| 0x1401fa2af#1965 | 0x1401fa2b1#1974 | 1           |
| 0x1401fa252#2004 | 0x1401fa2b1#2005 | 0           |
| 0x1401fa2af#1996 | 0x1401fa2b1#2005 | 1           |
| 0x1401fa252#2035 | 0x1401fa2b1#2036 | 0           |
| 0x1401fa2af#2027 | 0x1401fa2b1#2036 | 1           |
| 0x1401fa252#2128 | 0x1401fa2b1#2129 | 0           |
| 0x1401fa2af#2120 | 0x1401fa2b1#2129 | 1           |
| 0x1401fa2b6#2333 | 0x1401fa2b6#688  | 0           |
| 0x1401fa2b1#1693 | 0x1401fa2b6#1686 | 0           |
| 0x1401fa2b1#1755 | 0x1401fa2b6#1750 | 0           |
| 0x1401fa2b1#1786 | 0x1401fa2b6#1781 | 0           |
| 0x1401fa2b1#1817 | 0x1401fa2b6#1812 | 0           |
| 0x1401fa2b1#1848 | 0x1401fa2b6#1843 | 0           |
| 0x1401fa2b1#1879 | 0x1401fa2b6#1874 | 0           |
| 0x1401fa2b1#1910 | 0x1401fa2b6#1905 | 0           |
| 0x1401fa2b1#1943 | 0x1401fa2b6#1938 | 0           |
| 0x1401fa2b1#1974 | 0x1401fa2b6#1969 | 0           |
| 0x1401fa2b1#2005 | 0x1401fa2b6#2000 | 0           |
| 0x1401fa2b1#2036 | 0x1401fa2b6#2031 | 0           |
| 0x1401fa2b1#2129 | 0x1401fa2b6#2124 | 0           |
| 0x1401fa2b6#687  | 0x1401fa2b6#2333 | 0           |
| 0x1401fa2b8#2334 | 0x1401fa2b8#690  | 0           |
| 0x1401fa2b6#1686 | 0x1401fa2b8#1687 | 0           |
| 0x1401fa2b8#1687 | 0x1401fa2b8#1690 | 0           |
| 0x1401fa2b6#1750 | 0x1401fa2b8#1751 | 0           |
| 0x1401fa2b6#1781 | 0x1401fa2b8#1782 | 0           |
| 0x1401fa2b6#1812 | 0x1401fa2b8#1813 | 0           |
| 0x1401fa2b6#1843 | 0x1401fa2b8#1844 | 0           |
| 0x1401fa2b6#1874 | 0x1401fa2b8#1875 | 0           |
| 0x1401fa2b6#1905 | 0x1401fa2b8#1906 | 0           |
| 0x1401fa2b6#1938 | 0x1401fa2b8#1939 | 0           |
| 0x1401fa2b6#1969 | 0x1401fa2b8#1970 | 0           |
| 0x1401fa2b6#2000 | 0x1401fa2b8#2001 | 0           |
| 0x1401fa2b6#2031 | 0x1401fa2b8#2032 | 0           |
| 0x1401fa2b6#2124 | 0x1401fa2b8#2125 | 0           |
| 0x1401fa2b8#689  | 0x1401fa2b8#2334 | 0           |

## raw_result.value.native_value_flow.parameters

| ordinal | name    | data_type |
|---------|---------|-----------|
| 0       | param_1 | /longlong |

## raw_result.value.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 0       | 0x1401f9fd4#47  | 0           |
| 0       | 0x1401f9ff8#87  | 0           |
| 0       | 0x1401fa009#104 | 0           |
| 0       | 0x1401fa01a#124 | 0           |
| 0       | 0x1401fa048#707 | 0           |
| 0       | 0x1401fa063#152 | 0           |
| 0       | 0x1401fa07a#179 | 0           |
| 0       | 0x1401fa088#187 | 0           |
| 0       | 0x1401fa09e#203 | 0           |
| 0       | 0x1401fa0b5#230 | 0           |
| 0       | 0x1401fa0d0#248 | 0           |
| 0       | 0x1401fa0eb#266 | 0           |
| 0       | 0x1401fa106#284 | 0           |
| 0       | 0x1401fa11d#311 | 0           |
| 0       | 0x1401fa129#317 | 0           |
| 0       | 0x1401fa229#534 | 0           |
| 0       | 0x1401fa235#540 | 0           |
| 0       | 0x1401fa241#553 | 0           |

## raw_result.value.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x1401f9fd4#48  | memory_read        | 1             |             |
| 0x1401f9fde#59  | conditional_branch |               | 1           |
| 0x1401f9fe4#63  | direct_call        | 0             |             |
| 0x1401f9fec#75  | conditional_branch |               | 1           |
| 0x1401f9ff8#88  | memory_read        | 1             |             |
| 0x1401f9fff#93  | direct_call        | 0             |             |
| 0x1401fa007#103 | conditional_branch |               | 1           |
| 0x1401fa009#105 | memory_read        | 1             |             |
| 0x1401fa010#110 | direct_call        | 0             |             |
| 0x1401fa021#128 | direct_call        | 0             |             |
| 0x1401fa028#138 | conditional_branch |               | 1           |
| 0x1401fa048#708 | memory_read        | 1             |             |
| 0x1401fa04f#712 | direct_call        | 0             |             |
| 0x1401fa063#153 | memory_read        | 1             |             |
| 0x1401fa06a#157 | direct_call        | 0             |             |
| 0x1401fa07a#180 | memory_read        | 1             |             |
| 0x1401fa081#184 | direct_call        | 0             |             |
| 0x1401fa088#188 | memory_read        | 1             |             |
| 0x1401fa09e#204 | memory_read        | 1             |             |
| 0x1401fa0a5#208 | direct_call        | 0             |             |
| 0x1401fa0b5#231 | memory_read        | 1             |             |
| 0x1401fa0bc#235 | direct_call        | 0             |             |
| 0x1401fa0d0#249 | memory_read        | 1             |             |
| 0x1401fa0d7#253 | direct_call        | 0             |             |
| 0x1401fa0eb#267 | memory_read        | 1             |             |
| 0x1401fa0f2#271 | direct_call        | 0             |             |
| 0x1401fa106#285 | memory_read        | 1             |             |
| 0x1401fa10d#289 | direct_call        | 0             |             |
| 0x1401fa11d#312 | memory_read        | 1             |             |
| 0x1401fa124#316 | direct_call        | 0             |             |
| 0x1401fa130#321 | direct_call        | 0             |             |
| 0x1401fa145#336 | conditional_branch |               | 1           |
| 0x1401fa15b#354 | direct_call        | 0             |             |
| 0x1401fa16a#361 | direct_call        | 0             |             |
| 0x1401fa179#382 | conditional_branch |               | 1           |
| 0x1401fa1b9#418 | direct_call        | 0             |             |
| 0x1401fa1c7#433 | conditional_branch |               | 1           |
| 0x1401fa1dc#450 | conditional_branch |               | 1           |
| 0x1401fa1de#452 | memory_read        | 1             |             |
| 0x1401fa1ed#484 | conditional_branch |               | 1           |
| 0x1401fa1fe#491 | direct_call        | 0             |             |
| 0x1401fa21c#521 | conditional_branch |               | 1           |
| 0x1401fa229#535 | memory_read        | 1             |             |
| 0x1401fa230#539 | direct_call        | 0             |             |
| 0x1401fa235#541 | memory_read        | 1             |             |
| 0x1401fa23f#552 | conditional_branch |               | 1           |
| 0x1401fa241#554 | memory_read        | 1             |             |
| 0x1401fa249#565 | conditional_branch |               | 1           |
| 0x1401fa24b#569 | direct_call        | 0             |             |
| 0x1401fa25a#584 | conditional_branch |               | 1           |
| 0x1401fa26f#601 | conditional_branch |               | 1           |
| 0x1401fa271#603 | memory_read        | 1             |             |
| 0x1401fa280#635 | conditional_branch |               | 1           |
| 0x1401fa28d#642 | direct_call        | 0             |             |
| 0x1401fa2af#694 | indirect_call      | 0             |             |
| 0x1401fa2b6#688 | indirect_call      | 0             |             |
| 0x1401fa2b8#690 | indirect_call      | 0             |             |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x1401fa2b8 with no resolved callee; its no-return basis is unknown.

## raw_result.limitations

Ghidra Listing reports a terminal call at 0x1401fa2b8 with no resolved callee; its no-return basis is unknown.

## normalized_result.procedure.address

0x1401f9fb0

## normalized_result.procedure.name

FUN_1401f9fb0

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
| 0x1401f9fb0 | 0x1401fa2b8 |

## normalized_result.procedure.body.total_bytes

777

## normalized_result.procedure.body.span_bytes

777

## normalized_result.procedure.body.non_contiguous

false

## normalized_result.procedure.body.contains_entry

true

## normalized_result.procedure.signature

undefined FUN_1401f9fb0()

## normalized_result.procedure.locals

| description                               | provenance               |
|-------------------------------------------|--------------------------|
| undefined8 local_38 @ Stack[-0x38]:8      | ghidra-function-database |
| undefined8 local_40 @ Stack[-0x40]:8      | ghidra-function-database |
| undefined8 local_58 @ Stack[-0x58]:8      | ghidra-function-database |
| undefined8 local_60 @ Stack[-0x60]:8      | ghidra-function-database |
| undefined8 local_68 @ Stack[-0x68]:8      | ghidra-function-database |
| undefined1[16] local_78 @ Stack[-0x78]:16 | ghidra-function-database |
| undefined8 local_80 @ Stack[-0x80]:8      | ghidra-function-database |
| undefined8 local_88 @ Stack[-0x88]:8      | ghidra-function-database |
| undefined8 local_90 @ Stack[-0x90]:8      | ghidra-function-database |
| undefined8 local_98 @ Stack[-0x98]:8      | ghidra-function-database |
| undefined local_a0 @ Stack[-0xa0]:1       | ghidra-function-database |
| undefined8 local_a8 @ Stack[-0xa8]:8      | ghidra-function-database |
| undefined8 local_b0 @ Stack[-0xb0]:8      | ghidra-function-database |

## normalized_result.pseudocode


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1401f9fb0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  BOOL BVar4;
  undefined8 ****ppppuVar5;
  ulonglong uVar6;
  wchar_t *pwVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined1 auStack_d8 [40];
  undefined8 ***local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [8];
  undefined8 ***local_98;
  undefined1 *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 ***local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 ***local_58 [3];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1404c7ac0 ^ (ulonglong)auStack_d8;
  if (*(HMENU *)(param_1 + 0x1f60) != (HMENU)0x0) {
    iVar3 = GetMenuItemCount(*(HMENU *)(param_1 + 0x1f60));
    while ((0 < iVar3 && (BVar4 = DeleteMenu(*(HMENU *)(param_1 + 0x1f60),0,0x400), BVar4 != 0))) {
      iVar3 = GetMenuItemCount(*(HMENU *)(param_1 + 0x1f60));
    }
    cVar2 = FUN_1401f4920(param_1 + 0x1a38);
    if (cVar2 == '\0') {
      FUN_14003a410(*(undefined8 *)(param_1 + 0x1f60),0,0x1bb,&DAT_1403efe68);
      uVar8 = 0x1bc;
      puVar9 = &DAT_1403f0458;
    }
    else {
      uVar8 = 0x1bd;
      puVar9 = &DAT_1403f0110;
    }
    FUN_14003a410(*(undefined8 *)(param_1 + 0x1f60),0,uVar8,puVar9);
    FUN_14003a410(*(undefined8 *)(param_1 + 0x1f60),0x800,0,0);
    FUN_14003a410(*(undefined8 *)(param_1 + 0x1f60),*(char *)(param_1 + 0x1f59) != '\0',0x1be,
                  &DAT_1403fbd50);
    FUN_14003a410(*(undefined8 *)(param_1 + 0x1f60),0x800,0,0);
    FUN_14003a410(*(undefined8 *)(param_1 + 0x1f60),0,0x1b8,&DAT_1403f0ed8);
    FUN_14003a410(*(undefined8 *)(param_1 + 0x1f60),0,0x1bf,&DAT_1404052d8);
    FUN_14003a410(*(undefined8 *)(param_1 + 0x1f60),0,0x1b9,&DAT_140416888);
    FUN_14003a410(*(undefined8 *)(param_1 + 0x1f60),0x800,0,0);
    cVar2 = FUN_1401f5c70(param_1 + 0x1a38);
    pwVar7 = L"Task Manager TMOG";
    if (cVar2 != '\0') {
      pwVar7 = L"Task Manager TMOG PRO";
    }
    local_78 = (undefined8 ****)0x0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    uVar8 = FUN_140335100(pwVar7);
    FUN_1400017a0(&local_78,pwVar7,uVar8);
    local_b0 = &local_78;
    if (7 < local_60) {
      local_b0 = local_78;
    }
    local_a8 = local_68;
    local_98 = &local_b0;
    local_90 = local_a0;
    local_88 = &DAT_1403ef9b0;
    local_80 = 10;
    FUN_14003a830(local_58,&local_88,&local_98);
    if (7 < local_60) {
      uVar6 = local_60 * 2 + 2;
      ppppuVar5 = (undefined8 ****)local_78;
      if (0xfff < uVar6) {
        ppppuVar5 = (undefined8 ****)local_78[-1];
        if (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)ppppuVar5))) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          goto LAB_1401fa2b1;
        }
        uVar6 = local_60 * 2 + 0x29;
      }
      thunk_FUN_140327e20(ppppuVar5,uVar6);
    }
    local_68 = 0;
    local_60 = 7;
    local_78 = (undefined8 ***)((ulonglong)local_78 & 0xffffffffffff0000);
    ppppuVar5 = local_58;
    if (7 < local_40) {
      ppppuVar5 = (undefined8 ****)local_58[0];
    }
    FUN_14003a410(*(undefined8 *)(param_1 + 0x1f60),0,0x1ba,ppppuVar5);
    if ((*(HWND *)(param_1 + 0x230) != (HWND)0x0) && (*(longlong *)(param_1 + 0x150) != 0)) {
      DrawMenuBar(*(HWND *)(param_1 + 0x230));
    }
    if (7 < local_40) {
      uVar6 = local_40 * 2 + 2;
      ppppuVar5 = (undefined8 ****)local_58[0];
      if (0xfff < uVar6) {
        ppppuVar5 = (undefined8 ****)local_58[0][-1];
        if (0x1f < (ulonglong)((longlong)local_58[0] + (-8 - (longlong)ppppuVar5))) {
LAB_1401fa2b1:
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar6 = local_40 * 2 + 0x29;
      }
      thunk_FUN_140327e20(ppppuVar5,uVar6);
    }
  }
  return;
}



## normalized_result.assembly

0x1401f9fb0: PUSH RBP,0x1401f9fb2: PUSH RBX,0x1401f9fb3: PUSH RSI,0x1401f9fb4: PUSH RDI,0x1401f9fb5: LEA RBP, [RSP + -0x3f],0x1401f9fba: SUB RSP, 0xb8,0x1401f9fc1: MOV RAX, qword ptr [0x1404c7ac0],0x1401f9fc8: XOR RAX, RSP,0x1401f9fcb: MOV qword ptr [RBP + 0x27], RAX,0x1401f9fcf: MOV RBX, RCX,0x1401f9fd2: XOR ESI, ESI,0x1401f9fd4: MOV RCX, qword ptr [RCX + 0x1f60],0x1401f9fdb: TEST RCX, RCX,0x1401f9fde: JZ 0x1401fa292,0x1401f9fe4: CALL qword ptr [0x14037acd8],0x1401f9fea: TEST EAX, EAX,0x1401f9fec: JLE 0x1401fa01a,0x1401f9fee: NOP,0x1401f9ff0: XOR EDX, EDX,0x1401f9ff2: MOV R8D, 0x400,0x1401f9ff8: MOV RCX, qword ptr [RBX + 0x1f60],0x1401f9fff: CALL qword ptr [0x14037ace8],0x1401fa005: TEST EAX, EAX,0x1401fa007: JZ 0x1401fa01a,0x1401fa009: MOV RCX, qword ptr [RBX + 0x1f60],0x1401fa010: CALL qword ptr [0x14037acd8],0x1401fa016: TEST EAX, EAX,0x1401fa018: JG 0x1401f9ff0,0x1401fa01a: LEA RCX, [RBX + 0x1a38],0x1401fa021: CALL 0x1401f4920,0x1401fa026: TEST AL, AL,0x1401fa028: JZ 0x1401fa039,0x1401fa02a: MOV R8D, 0x1bd,0x1401fa030: LEA R9, [0x1403f0110],0x1401fa037: JMP 0x1401fa061,0x1401fa039: LEA R9, [0x1403efe68],0x1401fa040: XOR EDX, EDX,0x1401fa042: MOV R8D, 0x1bb,0x1401fa048: MOV RCX, qword ptr [RBX + 0x1f60],0x1401fa04f: CALL 0x14003a410,0x1401fa054: MOV R8D, 0x1bc,0x1401fa05a: LEA R9, [0x1403f0458],0x1401fa061: XOR EDX, EDX,0x1401fa063: MOV RCX, qword ptr [RBX + 0x1f60],0x1401fa06a: CALL 0x14003a410,0x1401fa06f: XOR R9D, R9D,0x1401fa072: XOR R8D, R8D,0x1401fa075: MOV EDX, 0x800,0x1401fa07a: MOV RCX, qword ptr [RBX + 0x1f60],0x1401fa081: CALL 0x14003a410,0x1401fa086: MOV EDX, ESI,0x1401fa088: CMP byte ptr [RBX + 0x1f59], DL,0x1401fa08e: SETNZ DL,0x1401fa091: LEA R9, [0x1403fbd50],0x1401fa098: MOV R8D, 0x1be,0x1401fa09e: MOV RCX, qword ptr [RBX + 0x1f60],0x1401fa0a5: CALL 0x14003a410,0x1401fa0aa: XOR R9D, R9D,0x1401fa0ad: XOR R8D, R8D,0x1401fa0b0: MOV EDX, 0x800,0x1401fa0b5: MOV RCX, qword ptr [RBX + 0x1f60],0x1401fa0bc: CALL 0x14003a410,0x1401fa0c1: LEA R9, [0x1403f0ed8],0x1401fa0c8: XOR EDX, EDX,0x1401fa0ca: MOV R8D, 0x1b8,0x1401fa0d0: MOV RCX, qword ptr [RBX + 0x1f60],0x1401fa0d7: CALL 0x14003a410,0x1401fa0dc: LEA R9, [0x1404052d8],0x1401fa0e3: XOR EDX, EDX,0x1401fa0e5: MOV R8D, 0x1bf,0x1401fa0eb: MOV RCX, qword ptr [RBX + 0x1f60],0x1401fa0f2: CALL 0x14003a410,0x1401fa0f7: LEA R9, [0x140416888],0x1401fa0fe: XOR EDX, EDX,0x1401fa100: MOV R8D, 0x1b9,0x1401fa106: MOV RCX, qword ptr [RBX + 0x1f60],0x1401fa10d: CALL 0x14003a410,0x1401fa112: XOR R9D, R9D,0x1401fa115: XOR R8D, R8D,0x1401fa118: MOV EDX, 0x800,0x1401fa11d: MOV RCX, qword ptr [RBX + 0x1f60],0x1401fa124: CALL 0x14003a410,0x1401fa129: LEA RCX, [RBX + 0x1a38],0x1401fa130: CALL 0x1401f5c70,0x1401fa135: LEA RCX, [0x14041cbe0],0x1401fa13c: LEA RDI, [0x14037c310],0x1401fa143: TEST AL, AL,0x1401fa145: CMOVNZ RDI, RCX,0x1401fa149: XORPS XMM0, XMM0,0x1401fa14c: MOVUPS xmmword ptr [RBP + -0x19], XMM0,0x1401fa150: MOV qword ptr [RBP + -0x9], RSI,0x1401fa154: MOV qword ptr [RBP + -0x1], RSI,0x1401fa158: MOV RCX, RDI,0x1401fa15b: CALL 0x140335100,0x1401fa160: MOV R8, RAX,0x1401fa163: MOV RDX, RDI,0x1401fa166: LEA RCX, [RBP + -0x19],0x1401fa16a: CALL 0x1400017a0,0x1401fa16f: NOP,0x1401fa170: LEA RAX, [RBP + -0x19],0x1401fa174: CMP qword ptr [RBP + -0x1], 0x7,0x1401fa179: CMOVA RAX, qword ptr [RBP + -0x19],0x1401fa17e: MOV qword ptr [RBP + -0x51], RAX,0x1401fa182: MOV RAX, qword ptr [RBP + -0x9],0x1401fa186: MOV qword ptr [RBP + -0x49], RAX,0x1401fa18a: LEA RAX, [RBP + -0x51],0x1401fa18e: MOV qword ptr [RBP + -0x39], RAX,0x1401fa192: LEA RAX, [RBP + -0x41],0x1401fa196: MOV qword ptr [RBP + -0x31], RAX,0x1401fa19a: LEA RAX, [0x1403ef9b0],0x1401fa1a1: MOV qword ptr [RBP + -0x29], RAX,0x1401fa1a5: MOV qword ptr [RBP + -0x21], 0xa,0x1401fa1ad: LEA R8, [RBP + -0x39],0x1401fa1b1: LEA RDX, [RBP + -0x29],0x1401fa1b5: LEA RCX, [RBP + 0x7],0x1401fa1b9: CALL 0x14003a830,0x1401fa1be: NOP,0x1401fa1bf: MOV R8, qword ptr [RBP + -0x1],0x1401fa1c3: CMP R8, 0x7,0x1401fa1c7: JBE 0x1401fa203,0x1401fa1c9: LEA RDX, [0x2 + R8*0x2],0x1401fa1d1: MOV RCX, qword ptr [RBP + -0x19],0x1401fa1d5: CMP RDX, 0x1000,0x1401fa1dc: JC 0x1401fa1fe,0x1401fa1de: MOV RAX, qword ptr [RCX + -0x8],0x1401fa1e2: SUB RCX, RAX,0x1401fa1e5: SUB RCX, 0x8,0x1401fa1e9: CMP RCX, 0x1f,0x1401fa1ed: JA 0x1401fa2aa,0x1401fa1f3: LEA RDX, [0x29 + R8*0x2],0x1401fa1fb: MOV RCX, RAX,0x1401fa1fe: CALL 0x1403272f0,0x1401fa203: MOV qword ptr [RBP + -0x9], RSI,0x1401fa207: MOV qword ptr [RBP + -0x1], 0x7,0x1401fa20f: MOV word ptr [RBP + -0x19], SI,0x1401fa213: LEA R9, [RBP + 0x7],0x1401fa217: CMP qword ptr [RBP + 0x1f], 0x7,0x1401fa21c: CMOVA R9, qword ptr [RBP + 0x7],0x1401fa221: XOR EDX, EDX,0x1401fa223: MOV R8D, 0x1ba,0x1401fa229: MOV RCX, qword ptr [RBX + 0x1f60],0x1401fa230: CALL 0x14003a410,0x1401fa235: MOV RCX, qword ptr [RBX + 0x230],0x1401fa23c: TEST RCX, RCX,0x1401fa23f: JZ 0x1401fa252,0x1401fa241: CMP qword ptr [RBX + 0x150], 0x0,0x1401fa249: JZ 0x1401fa252,0x1401fa24b: CALL qword ptr [0x14037ac50],0x1401fa251: NOP,0x1401fa252: MOV RAX, qword ptr [RBP + 0x1f],0x1401fa256: CMP RAX, 0x7,0x1401fa25a: JBE 0x1401fa292,0x1401fa25c: LEA RDX, [0x2 + RAX*0x2],0x1401fa264: MOV RCX, qword ptr [RBP + 0x7],0x1401fa268: CMP RDX, 0x1000,0x1401fa26f: JC 0x1401fa28d,0x1401fa271: MOV R8, qword ptr [RCX + -0x8],0x1401fa275: SUB RCX, R8,0x1401fa278: SUB RCX, 0x8,0x1401fa27c: CMP RCX, 0x1f,0x1401fa280: JA 0x1401fa2b1,0x1401fa282: LEA RDX, [0x29 + RAX*0x2],0x1401fa28a: MOV RCX, R8,0x1401fa28d: CALL 0x1403272f0,0x1401fa292: MOV RCX, qword ptr [RBP + 0x27],0x1401fa296: XOR RCX, RSP,0x1401fa299: CALL 0x140327740,0x1401fa29e: ADD RSP, 0xb8,0x1401fa2a5: POP RDI,0x1401fa2a6: POP RSI,0x1401fa2a7: POP RBX,0x1401fa2a8: POP RBP,0x1401fa2a9: RET,0x1401fa2aa: MOV ECX, 0x5,0x1401fa2af: INT 0x29,0x1401fa2b1: MOV ECX, 0x5,0x1401fa2b6: INT 0x29,0x1401fa2b8: INT3

## normalized_result.comments



## normalized_result.callers

| address     | name          | classification  | body            |
|-------------|---------------|-----------------|-----------------|
| 0x14007bd50 | FUN_14007bd50 | [object Object] | [object Object] |
| 0x1400e3a30 | FUN_1400e3a30 | [object Object] | [object Object] |
| 0x1401e59c0 | FUN_1401e59c0 | [object Object] | [object Object] |

## normalized_result.callees

| address        | name                         | classification  | body            |
|----------------|------------------------------|-----------------|-----------------|
| EXTERNAL:0x129 | USER32.DLL::DrawMenuBar      | [object Object] | [object Object] |
| EXTERNAL:0x13a | USER32.DLL::GetMenuItemCount | [object Object] | [object Object] |
| EXTERNAL:0x13c | USER32.DLL::DeleteMenu       | [object Object] | [object Object] |
| 0x1400017a0    | FUN_1400017a0                | [object Object] | [object Object] |
| 0x14003a410    | FUN_14003a410                | [object Object] | [object Object] |
| 0x14003a830    | FUN_14003a830                | [object Object] | [object Object] |
| 0x1401f4920    | FUN_1401f4920                | [object Object] | [object Object] |
| 0x1401f5c70    | FUN_1401f5c70                | [object Object] | [object Object] |
| 0x1403272f0    | thunk_FUN_140327e20          | [object Object] | [object Object] |
| 0x140327740    | __security_check_cookie      | [object Object] | [object Object] |
| 0x140335100    | FUN_140335100                | [object Object] | [object Object] |

## normalized_result.incoming_references

| source_address | target_address | source_procedure | target_procedure | kind            |
|----------------|----------------|------------------|------------------|-----------------|
| 0x14007be18    | 0x1401f9fb0    | [object Object]  | [object Object]  | [object Object] |
| 0x1400e3f9e    | 0x1401f9fb0    | [object Object]  | [object Object]  | [object Object] |
| 0x1401e677d    | 0x1401f9fb0    | [object Object]  | [object Object]  | [object Object] |
| 0x1404dfc78    | 0x1401f9fb0    |                  | [object Object]  | [object Object] |

## normalized_result.outgoing_references

| source_address | target_address           | source_procedure | target_procedure | kind            |
|----------------|--------------------------|------------------|------------------|-----------------|
| 0x1401f9fb5    | stack:0xffffffffffffffa1 | [object Object]  |                  | [object Object] |
| 0x1401f9fc1    | 0x1404c7ac0              | [object Object]  |                  | [object Object] |
| 0x1401f9fcb    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401f9fde    | 0x1401fa292              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f9fe4    | EXTERNAL:0x13a           | [object Object]  | [object Object]  | [object Object] |
| 0x1401f9fe4    | 0x14037acd8              | [object Object]  |                  | [object Object] |
| 0x1401f9fec    | 0x1401fa01a              | [object Object]  | [object Object]  | [object Object] |
| 0x1401f9fff    | EXTERNAL:0x13c           | [object Object]  | [object Object]  | [object Object] |
| 0x1401f9fff    | 0x14037ace8              | [object Object]  |                  | [object Object] |
| 0x1401fa007    | 0x1401fa01a              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa010    | EXTERNAL:0x13a           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa010    | 0x14037acd8              | [object Object]  |                  | [object Object] |
| 0x1401fa018    | 0x1401f9ff0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa021    | 0x1401f4920              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa028    | 0x1401fa039              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa030    | 0x1403f0110              | [object Object]  |                  | [object Object] |
| 0x1401fa037    | 0x1401fa061              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa039    | 0x1403efe68              | [object Object]  |                  | [object Object] |
| 0x1401fa04f    | 0x14003a410              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa05a    | 0x1403f0458              | [object Object]  |                  | [object Object] |
| 0x1401fa06a    | 0x14003a410              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa081    | 0x14003a410              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa091    | 0x1403fbd50              | [object Object]  |                  | [object Object] |
| 0x1401fa0a5    | 0x14003a410              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa0bc    | 0x14003a410              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa0c1    | 0x1403f0ed8              | [object Object]  |                  | [object Object] |
| 0x1401fa0d7    | 0x14003a410              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa0dc    | 0x1404052d8              | [object Object]  |                  | [object Object] |
| 0x1401fa0f2    | 0x14003a410              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa0f7    | 0x140416888              | [object Object]  |                  | [object Object] |
| 0x1401fa10d    | 0x14003a410              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa124    | 0x14003a410              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa130    | 0x1401f5c70              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa135    | 0x14041cbe0              | [object Object]  |                  | [object Object] |
| 0x1401fa13c    | 0x14037c310              | [object Object]  |                  | [object Object] |
| 0x1401fa14c    | stack:0xffffffffffffff88 | [object Object]  |                  | [object Object] |
| 0x1401fa150    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x1401fa154    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401fa158    | 0x14037c310              | [object Object]  |                  | [object Object] |
| 0x1401fa158    | 0x14041cbe0              | [object Object]  |                  | [object Object] |
| 0x1401fa15b    | 0x140335100              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa163    | 0x14041cbe0              | [object Object]  |                  | [object Object] |
| 0x1401fa166    | stack:0xffffffffffffff88 | [object Object]  |                  | [object Object] |
| 0x1401fa16a    | 0x1400017a0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa170    | stack:0xffffffffffffff88 | [object Object]  |                  | [object Object] |
| 0x1401fa174    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401fa179    | stack:0xffffffffffffff88 | [object Object]  |                  | [object Object] |
| 0x1401fa17e    | stack:0xffffffffffffff50 | [object Object]  |                  | [object Object] |
| 0x1401fa182    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x1401fa186    | stack:0xffffffffffffff58 | [object Object]  |                  | [object Object] |
| 0x1401fa18a    | stack:0xffffffffffffff50 | [object Object]  |                  | [object Object] |
| 0x1401fa18e    | stack:0xffffffffffffff68 | [object Object]  |                  | [object Object] |
| 0x1401fa192    | stack:0xffffffffffffff60 | [object Object]  |                  | [object Object] |
| 0x1401fa196    | stack:0xffffffffffffff70 | [object Object]  |                  | [object Object] |
| 0x1401fa19a    | 0x1403ef9b0              | [object Object]  |                  | [object Object] |
| 0x1401fa1a1    | stack:0xffffffffffffff78 | [object Object]  |                  | [object Object] |
| 0x1401fa1a1    | 0x1403ef9b0              | [object Object]  |                  | [object Object] |
| 0x1401fa1a5    | stack:0xffffffffffffff80 | [object Object]  |                  | [object Object] |
| 0x1401fa1ad    | stack:0xffffffffffffff68 | [object Object]  |                  | [object Object] |
| 0x1401fa1b1    | stack:0xffffffffffffff78 | [object Object]  |                  | [object Object] |
| 0x1401fa1b5    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401fa1b9    | 0x14003a830              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa1bf    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401fa1c7    | 0x1401fa203              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa1d1    | stack:0xffffffffffffff88 | [object Object]  |                  | [object Object] |
| 0x1401fa1dc    | 0x1401fa1fe              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa1ed    | 0x1401fa2aa              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa1fe    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa203    | stack:0xffffffffffffff98 | [object Object]  |                  | [object Object] |
| 0x1401fa207    | stack:0xffffffffffffffa0 | [object Object]  |                  | [object Object] |
| 0x1401fa20f    | stack:0xffffffffffffff88 | [object Object]  |                  | [object Object] |
| 0x1401fa213    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401fa217    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401fa21c    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401fa230    | 0x14003a410              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa23f    | 0x1401fa252              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa249    | 0x1401fa252              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa24b    | EXTERNAL:0x129           | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa24b    | 0x14037ac50              | [object Object]  |                  | [object Object] |
| 0x1401fa252    | stack:0xffffffffffffffc0 | [object Object]  |                  | [object Object] |
| 0x1401fa25a    | 0x1401fa292              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa264    | stack:0xffffffffffffffa8 | [object Object]  |                  | [object Object] |
| 0x1401fa26f    | 0x1401fa28d              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa280    | 0x1401fa2b1              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa28d    | 0x1403272f0              | [object Object]  | [object Object]  | [object Object] |
| 0x1401fa292    | stack:0xffffffffffffffc8 | [object Object]  |                  | [object Object] |
| 0x1401fa299    | 0x140327740              | [object Object]  | [object Object]  | [object Object] |

## normalized_result.referenced_strings

| address     | value                 | source_address |
|-------------|-----------------------|----------------|
| 0x14037c310 | Task Manager TMOG     | 0x1401fa13c    |
| 0x14037c310 | Task Manager TMOG     | 0x1401fa158    |
| 0x14041cbe0 | Task Manager TMOG PRO | 0x1401fa135    |
| 0x14041cbe0 | Task Manager TMOG PRO | 0x1401fa158    |
| 0x14041cbe0 | Task Manager TMOG PRO | 0x1401fa163    |

## normalized_result.referenced_names

| address        | value                             | source_address |
|----------------|-----------------------------------|----------------|
| 0x1400017a0    | FUN_1400017a0                     | 0x1401fa16a    |
| 0x14003a410    | FUN_14003a410                     | 0x1401fa04f    |
| 0x14003a410    | FUN_14003a410                     | 0x1401fa06a    |
| 0x14003a410    | FUN_14003a410                     | 0x1401fa081    |
| 0x14003a410    | FUN_14003a410                     | 0x1401fa0a5    |
| 0x14003a410    | FUN_14003a410                     | 0x1401fa0bc    |
| 0x14003a410    | FUN_14003a410                     | 0x1401fa0d7    |
| 0x14003a410    | FUN_14003a410                     | 0x1401fa0f2    |
| 0x14003a410    | FUN_14003a410                     | 0x1401fa10d    |
| 0x14003a410    | FUN_14003a410                     | 0x1401fa124    |
| 0x14003a410    | FUN_14003a410                     | 0x1401fa230    |
| 0x14003a830    | FUN_14003a830                     | 0x1401fa1b9    |
| 0x1401f4920    | FUN_1401f4920                     | 0x1401fa021    |
| 0x1401f5c70    | FUN_1401f5c70                     | 0x1401fa130    |
| 0x1401f9ff0    | LAB_1401f9ff0                     | 0x1401fa018    |
| 0x1401fa01a    | LAB_1401fa01a                     | 0x1401f9fec    |
| 0x1401fa01a    | LAB_1401fa01a                     | 0x1401fa007    |
| 0x1401fa039    | LAB_1401fa039                     | 0x1401fa028    |
| 0x1401fa061    | LAB_1401fa061                     | 0x1401fa037    |
| 0x1401fa1fe    | LAB_1401fa1fe                     | 0x1401fa1dc    |
| 0x1401fa203    | LAB_1401fa203                     | 0x1401fa1c7    |
| 0x1401fa252    | LAB_1401fa252                     | 0x1401fa23f    |
| 0x1401fa252    | LAB_1401fa252                     | 0x1401fa249    |
| 0x1401fa28d    | LAB_1401fa28d                     | 0x1401fa26f    |
| 0x1401fa292    | LAB_1401fa292                     | 0x1401f9fde    |
| 0x1401fa292    | LAB_1401fa292                     | 0x1401fa25a    |
| 0x1401fa2aa    | LAB_1401fa2aa                     | 0x1401fa1ed    |
| 0x1401fa2b1    | LAB_1401fa2b1                     | 0x1401fa280    |
| 0x1403272f0    | thunk_FUN_140327e20               | 0x1401fa1fe    |
| 0x1403272f0    | thunk_FUN_140327e20               | 0x1401fa28d    |
| 0x140327740    | __security_check_cookie           | 0x1401fa299    |
| 0x140335100    | FUN_140335100                     | 0x1401fa15b    |
| 0x14037ac50    | PTR_DrawMenuBar_14037ac50         | 0x1401fa24b    |
| 0x14037acd8    | PTR_GetMenuItemCount_14037acd8    | 0x1401f9fe4    |
| 0x14037acd8    | PTR_GetMenuItemCount_14037acd8    | 0x1401fa010    |
| 0x14037ace8    | PTR_DeleteMenu_14037ace8          | 0x1401f9fff    |
| 0x14037c310    | u_Task_Manager_TMOG_14037c310     | 0x1401fa13c    |
| 0x14037c310    | u_Task_Manager_TMOG_14037c310     | 0x1401fa158    |
| 0x1403ef9b0    | DAT_1403ef9b0                     | 0x1401fa19a    |
| 0x1403ef9b0    | DAT_1403ef9b0                     | 0x1401fa1a1    |
| 0x1403efe68    | DAT_1403efe68                     | 0x1401fa039    |
| 0x1403f0110    | DAT_1403f0110                     | 0x1401fa030    |
| 0x1403f0458    | DAT_1403f0458                     | 0x1401fa05a    |
| 0x1403f0ed8    | DAT_1403f0ed8                     | 0x1401fa0c1    |
| 0x1403fbd50    | DAT_1403fbd50                     | 0x1401fa091    |
| 0x1404052d8    | DAT_1404052d8                     | 0x1401fa0dc    |
| 0x140416888    | DAT_140416888                     | 0x1401fa0f7    |
| 0x14041cbe0    | u_Task_Manager_TMOG_PRO_14041cbe0 | 0x1401fa135    |
| 0x14041cbe0    | u_Task_Manager_TMOG_PRO_14041cbe0 | 0x1401fa158    |
| 0x14041cbe0    | u_Task_Manager_TMOG_PRO_14041cbe0 | 0x1401fa163    |
| 0x1404c7ac0    | DAT_1404c7ac0                     | 0x1401f9fc1    |
| EXTERNAL:0x129 | USER32.DLL::DrawMenuBar           | 0x1401fa24b    |
| EXTERNAL:0x13a | USER32.DLL::GetMenuItemCount      | 0x1401f9fe4    |
| EXTERNAL:0x13a | USER32.DLL::GetMenuItemCount      | 0x1401fa010    |
| EXTERNAL:0x13c | USER32.DLL::DeleteMenu            | 0x1401f9fff    |

## normalized_result.basic_blocks

| start       | end         | successors              |
|-------------|-------------|-------------------------|
| 0x1401f9fb0 | 0x1401f9fe4 | 0x1401f9fe4,0x1401fa292 |
| 0x1401f9fe4 | 0x1401f9fee | 0x1401f9fee,0x1401fa01a |
| 0x1401f9fee | 0x1401f9ff0 | 0x1401f9ff0             |
| 0x1401f9ff0 | 0x1401fa009 | 0x1401fa009,0x1401fa01a |
| 0x1401fa009 | 0x1401fa01a | 0x1401f9ff0,0x1401fa01a |
| 0x1401fa01a | 0x1401fa02a | 0x1401fa02a,0x1401fa039 |
| 0x1401fa02a | 0x1401fa039 | 0x1401fa061             |
| 0x1401fa039 | 0x1401fa061 | 0x1401fa061             |
| 0x1401fa061 | 0x1401fa1c9 | 0x1401fa1c9,0x1401fa203 |
| 0x1401fa1c9 | 0x1401fa1de | 0x1401fa1de,0x1401fa1fe |
| 0x1401fa1de | 0x1401fa1f3 | 0x1401fa1f3,0x1401fa2aa |
| 0x1401fa1f3 | 0x1401fa1fe | 0x1401fa1fe             |
| 0x1401fa1fe | 0x1401fa203 | 0x1401fa203             |
| 0x1401fa203 | 0x1401fa241 | 0x1401fa241,0x1401fa252 |
| 0x1401fa241 | 0x1401fa24b | 0x1401fa24b,0x1401fa252 |
| 0x1401fa24b | 0x1401fa252 | 0x1401fa252             |
| 0x1401fa252 | 0x1401fa25c | 0x1401fa25c,0x1401fa292 |
| 0x1401fa25c | 0x1401fa271 | 0x1401fa271,0x1401fa28d |
| 0x1401fa271 | 0x1401fa282 | 0x1401fa282,0x1401fa2b1 |
| 0x1401fa282 | 0x1401fa28d | 0x1401fa28d             |
| 0x1401fa28d | 0x1401fa292 | 0x1401fa292             |
| 0x1401fa292 | 0x1401fa2aa |                         |
| 0x1401fa2aa | 0x1401fa2b1 | 0x1401fa2b1             |
| 0x1401fa2b1 | 0x1401fa2b9 |                         |

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

| id               | address     | sequence | opcode       | is_dead | block_membership | inputs                                                                          | output          |
|------------------|-------------|----------|--------------|---------|------------------|---------------------------------------------------------------------------------|-----------------|
| 0x1401f9fba#2283 | 0x1401f9fba | 2283     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9fc8#26   | 0x1401f9fc8 | 26       | INT_XOR      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9fc8#2302 | 0x1401f9fc8 | 2302     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f9fd4#47   | 0x1401f9fd4 | 47       | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9fd4#48   | 0x1401f9fd4 | 48       | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9fd4#2303 | 0x1401f9fd4 | 2303     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f9fdb#54   | 0x1401f9fdb | 54       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9fde#59   | 0x1401f9fde | 59       | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f9fe4#63   | 0x1401f9fe4 | 63       | CALL         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9fe4#1665 | 0x1401f9fe4 | 1665     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9fe4#2041 | 0x1401f9fe4 | 2041     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9fe4#2072 | 0x1401f9fe4 | 2072     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9fe4#2103 | 0x1401f9fe4 | 2103     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9fec#74   | 0x1401f9fec | 74       | INT_SLESS    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9fec#75   | 0x1401f9fec | 75       | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401f9fec#2271 | 0x1401f9fec | 2271     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9fec#2272 | 0x1401f9fec | 2272     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9fec#2273 | 0x1401f9fec | 2273     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9fec#2274 | 0x1401f9fec | 2274     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9fec#2275 | 0x1401f9fec | 2275     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9ff8#87   | 0x1401f9ff8 | 87       | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9ff8#88   | 0x1401f9ff8 | 88       | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9ff8#2304 | 0x1401f9ff8 | 2304     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401f9fff#93   | 0x1401f9fff | 93       | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object]                 | [object Object] |
| 0x1401f9fff#1666 | 0x1401f9fff | 1666     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9fff#2042 | 0x1401f9fff | 2042     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9fff#2073 | 0x1401f9fff | 2073     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401f9fff#2104 | 0x1401f9fff | 2104     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa005#98   | 0x1401fa005 | 98       | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa007#103  | 0x1401fa007 | 103      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401fa009#104  | 0x1401fa009 | 104      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa009#105  | 0x1401fa009 | 105      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa009#2305 | 0x1401fa009 | 2305     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa010#110  | 0x1401fa010 | 110      | CALL         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa010#1667 | 0x1401fa010 | 1667     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa010#2043 | 0x1401fa010 | 2043     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa010#2074 | 0x1401fa010 | 2074     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa010#2105 | 0x1401fa010 | 2105     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa01a#124  | 0x1401fa01a | 124      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa01a#1697 | 0x1401fa01a | 1697     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa01a#2071 | 0x1401fa01a | 2071     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa01a#2102 | 0x1401fa01a | 2102     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa01a#2133 | 0x1401fa01a | 2133     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa021#128  | 0x1401fa021 | 128      | CALL         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa021#1668 | 0x1401fa021 | 1668     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa021#2044 | 0x1401fa021 | 2044     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa021#2075 | 0x1401fa021 | 2075     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa021#2106 | 0x1401fa021 | 2106     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa026#133  | 0x1401fa026 | 133      | INT_EQUAL    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa028#138  | 0x1401fa028 | 138      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401fa02a#139  | 0x1401fa02a | 139      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa030#140  | 0x1401fa030 | 140      | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa037#141  | 0x1401fa037 | 141      | BRANCH       | true    | member           | [object Object]                                                                 |                 |
| 0x1401fa048#707  | 0x1401fa048 | 707      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa048#708  | 0x1401fa048 | 708      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa048#2306 | 0x1401fa048 | 2306     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa04f#712  | 0x1401fa04f | 712      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401fa04f#1669 | 0x1401fa04f | 1669     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa04f#2045 | 0x1401fa04f | 2045     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa04f#2076 | 0x1401fa04f | 2076     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa04f#2107 | 0x1401fa04f | 2107     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa04f#2278 | 0x1401fa04f | 2278     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa054#713  | 0x1401fa054 | 713      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa05a#714  | 0x1401fa05a | 714      | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa061#1220 | 0x1401fa061 | 1220     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa061#1276 | 0x1401fa061 | 1276     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa061#1695 | 0x1401fa061 | 1695     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa061#2069 | 0x1401fa061 | 2069     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa061#2100 | 0x1401fa061 | 2100     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa061#2131 | 0x1401fa061 | 2131     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa063#152  | 0x1401fa063 | 152      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa063#153  | 0x1401fa063 | 153      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa063#2307 | 0x1401fa063 | 2307     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa06a#157  | 0x1401fa06a | 157      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401fa06a#1670 | 0x1401fa06a | 1670     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa06a#2046 | 0x1401fa06a | 2046     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa06a#2077 | 0x1401fa06a | 2077     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa06a#2108 | 0x1401fa06a | 2108     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa07a#179  | 0x1401fa07a | 179      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa07a#180  | 0x1401fa07a | 180      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa07a#2308 | 0x1401fa07a | 2308     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa081#184  | 0x1401fa081 | 184      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401fa081#1671 | 0x1401fa081 | 1671     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa081#2047 | 0x1401fa081 | 2047     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa081#2078 | 0x1401fa081 | 2078     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa081#2109 | 0x1401fa081 | 2109     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa088#187  | 0x1401fa088 | 187      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa088#188  | 0x1401fa088 | 188      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa088#194  | 0x1401fa088 | 194      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa088#2309 | 0x1401fa088 | 2309     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa09e#203  | 0x1401fa09e | 203      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa09e#204  | 0x1401fa09e | 204      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa09e#2310 | 0x1401fa09e | 2310     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa0a5#208  | 0x1401fa0a5 | 208      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401fa0a5#1672 | 0x1401fa0a5 | 1672     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0a5#2048 | 0x1401fa0a5 | 2048     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0a5#2079 | 0x1401fa0a5 | 2079     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0a5#2110 | 0x1401fa0a5 | 2110     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0a5#2280 | 0x1401fa0a5 | 2280     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0b5#230  | 0x1401fa0b5 | 230      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0b5#231  | 0x1401fa0b5 | 231      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0b5#2311 | 0x1401fa0b5 | 2311     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa0bc#235  | 0x1401fa0bc | 235      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401fa0bc#1673 | 0x1401fa0bc | 1673     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0bc#2049 | 0x1401fa0bc | 2049     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0bc#2080 | 0x1401fa0bc | 2080     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0bc#2111 | 0x1401fa0bc | 2111     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0d0#248  | 0x1401fa0d0 | 248      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0d0#249  | 0x1401fa0d0 | 249      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0d0#2312 | 0x1401fa0d0 | 2312     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa0d7#253  | 0x1401fa0d7 | 253      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401fa0d7#1674 | 0x1401fa0d7 | 1674     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0d7#2050 | 0x1401fa0d7 | 2050     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0d7#2081 | 0x1401fa0d7 | 2081     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0d7#2112 | 0x1401fa0d7 | 2112     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0d7#2279 | 0x1401fa0d7 | 2279     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0eb#266  | 0x1401fa0eb | 266      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0eb#267  | 0x1401fa0eb | 267      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0eb#2313 | 0x1401fa0eb | 2313     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa0f2#271  | 0x1401fa0f2 | 271      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401fa0f2#1675 | 0x1401fa0f2 | 1675     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0f2#2051 | 0x1401fa0f2 | 2051     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0f2#2082 | 0x1401fa0f2 | 2082     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0f2#2113 | 0x1401fa0f2 | 2113     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa0f2#2281 | 0x1401fa0f2 | 2281     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa106#284  | 0x1401fa106 | 284      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa106#285  | 0x1401fa106 | 285      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa106#2314 | 0x1401fa106 | 2314     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa10d#289  | 0x1401fa10d | 289      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401fa10d#1676 | 0x1401fa10d | 1676     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa10d#2052 | 0x1401fa10d | 2052     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa10d#2083 | 0x1401fa10d | 2083     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa10d#2114 | 0x1401fa10d | 2114     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa10d#2282 | 0x1401fa10d | 2282     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa11d#311  | 0x1401fa11d | 311      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa11d#312  | 0x1401fa11d | 312      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa11d#2315 | 0x1401fa11d | 2315     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa124#316  | 0x1401fa124 | 316      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401fa124#1677 | 0x1401fa124 | 1677     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa124#2053 | 0x1401fa124 | 2053     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa124#2084 | 0x1401fa124 | 2084     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa124#2115 | 0x1401fa124 | 2115     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa129#317  | 0x1401fa129 | 317      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa130#321  | 0x1401fa130 | 321      | CALL         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa130#1678 | 0x1401fa130 | 1678     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa130#2054 | 0x1401fa130 | 2054     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa130#2085 | 0x1401fa130 | 2085     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa130#2116 | 0x1401fa130 | 2116     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa13c#323  | 0x1401fa13c | 323      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa143#328  | 0x1401fa143 | 328      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa145#336  | 0x1401fa145 | 336      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401fa145#337  | 0x1401fa145 | 337      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa149#1163 | 0x1401fa149 | 1163     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa14c#1660 | 0x1401fa14c | 1660     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa14c#1661 | 0x1401fa14c | 1661     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa150#347  | 0x1401fa150 | 347      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa154#350  | 0x1401fa154 | 350      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa15b#354  | 0x1401fa15b | 354      | CALL         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa15b#1679 | 0x1401fa15b | 1679     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa15b#1931 | 0x1401fa15b | 1931     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa15b#1962 | 0x1401fa15b | 1962     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa15b#1993 | 0x1401fa15b | 1993     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa15b#2024 | 0x1401fa15b | 2024     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa15b#2055 | 0x1401fa15b | 2055     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa15b#2086 | 0x1401fa15b | 2086     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa15b#2117 | 0x1401fa15b | 2117     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa166#2284 | 0x1401fa166 | 2284     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa16a#361  | 0x1401fa16a | 361      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object]                 |                 |
| 0x1401fa16a#1680 | 0x1401fa16a | 1680     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa16a#1932 | 0x1401fa16a | 1932     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa16a#1963 | 0x1401fa16a | 1963     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa16a#1994 | 0x1401fa16a | 1994     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa16a#2025 | 0x1401fa16a | 2025     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa16a#2056 | 0x1401fa16a | 2056     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa16a#2087 | 0x1401fa16a | 2087     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa16a#2118 | 0x1401fa16a | 2118     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa170#2285 | 0x1401fa170 | 2285     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa179#377  | 0x1401fa179 | 377      | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa179#382  | 0x1401fa179 | 382      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401fa179#2296 | 0x1401fa179 | 2296     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa179#2297 | 0x1401fa179 | 2297     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa17e#1012 | 0x1401fa17e | 1012     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa186#392  | 0x1401fa186 | 392      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa18a#2286 | 0x1401fa18a | 2286     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa192#2287 | 0x1401fa192 | 2287     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1a1#406  | 0x1401fa1a1 | 406      | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1a5#409  | 0x1401fa1a5 | 409      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa1ad#2288 | 0x1401fa1ad | 2288     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1b1#2289 | 0x1401fa1b1 | 2289     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1b5#2290 | 0x1401fa1b5 | 2290     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1b9#418  | 0x1401fa1b9 | 418      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object]                 |                 |
| 0x1401fa1b9#1681 | 0x1401fa1b9 | 1681     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1b9#1745 | 0x1401fa1b9 | 1745     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1b9#1776 | 0x1401fa1b9 | 1776     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1b9#1807 | 0x1401fa1b9 | 1807     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1b9#1838 | 0x1401fa1b9 | 1838     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1b9#1869 | 0x1401fa1b9 | 1869     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1b9#1900 | 0x1401fa1b9 | 1900     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1b9#1933 | 0x1401fa1b9 | 1933     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1b9#1964 | 0x1401fa1b9 | 1964     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1b9#1995 | 0x1401fa1b9 | 1995     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1b9#2026 | 0x1401fa1b9 | 2026     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1b9#2057 | 0x1401fa1b9 | 2057     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1b9#2088 | 0x1401fa1b9 | 2088     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1b9#2119 | 0x1401fa1b9 | 2119     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1c7#432  | 0x1401fa1c7 | 432      | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1c7#433  | 0x1401fa1c7 | 433      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401fa1c9#434  | 0x1401fa1c9 | 434      | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1c9#435  | 0x1401fa1c9 | 435      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1d5#441  | 0x1401fa1d5 | 441      | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1dc#450  | 0x1401fa1dc | 450      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401fa1dc#2299 | 0x1401fa1dc | 2299     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa1dc#2316 | 0x1401fa1dc | 2316     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa1de#452  | 0x1401fa1de | 452      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1de#2291 | 0x1401fa1de | 2291     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401fa1de#2317 | 0x1401fa1de | 2317     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa1e5#465  | 0x1401fa1e5 | 465      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1e5#2292 | 0x1401fa1e5 | 2292     | INT_SUB      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1e5#2318 | 0x1401fa1e5 | 2318     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa1e5#2319 | 0x1401fa1e5 | 2319     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa1ed#482  | 0x1401fa1ed | 482      | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1ed#484  | 0x1401fa1ed | 484      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401fa1ed#2320 | 0x1401fa1ed | 2320     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa1f3#485  | 0x1401fa1f3 | 485      | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1f3#486  | 0x1401fa1f3 | 486      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1fe#491  | 0x1401fa1fe | 491      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401fa1fe#1044 | 0x1401fa1fe | 1044     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1fe#1141 | 0x1401fa1fe | 1141     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1fe#1683 | 0x1401fa1fe | 1683     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1fe#1747 | 0x1401fa1fe | 1747     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1fe#1778 | 0x1401fa1fe | 1778     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1fe#1809 | 0x1401fa1fe | 1809     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1fe#1840 | 0x1401fa1fe | 1840     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1fe#1871 | 0x1401fa1fe | 1871     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1fe#1902 | 0x1401fa1fe | 1902     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1fe#1935 | 0x1401fa1fe | 1935     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1fe#1966 | 0x1401fa1fe | 1966     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1fe#1997 | 0x1401fa1fe | 1997     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1fe#2028 | 0x1401fa1fe | 2028     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1fe#2059 | 0x1401fa1fe | 2059     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1fe#2090 | 0x1401fa1fe | 2090     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa1fe#2121 | 0x1401fa1fe | 2121     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa203#494  | 0x1401fa203 | 494      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa203#1694 | 0x1401fa203 | 1694     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa203#1756 | 0x1401fa203 | 1756     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa203#1787 | 0x1401fa203 | 1787     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa203#1818 | 0x1401fa203 | 1818     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa203#1849 | 0x1401fa203 | 1849     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa203#1880 | 0x1401fa203 | 1880     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa203#1911 | 0x1401fa203 | 1911     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa203#1944 | 0x1401fa203 | 1944     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa203#1975 | 0x1401fa203 | 1975     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa203#2068 | 0x1401fa203 | 2068     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa203#2099 | 0x1401fa203 | 2099     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa203#2130 | 0x1401fa203 | 2130     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa207#497  | 0x1401fa207 | 497      | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa20f#1916 | 0x1401fa20f | 1916     | INT_AND      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa20f#2322 | 0x1401fa20f | 2322     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa20f#2323 | 0x1401fa20f | 2323     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa213#2293 | 0x1401fa213 | 2293     | PTRSUB       | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa21c#516  | 0x1401fa21c | 516      | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa21c#521  | 0x1401fa21c | 521      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401fa21c#2300 | 0x1401fa21c | 2300     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa21c#2301 | 0x1401fa21c | 2301     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa21c#2324 | 0x1401fa21c | 2324     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa221#1273 | 0x1401fa221 | 1273     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa229#534  | 0x1401fa229 | 534      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa229#535  | 0x1401fa229 | 535      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa229#2325 | 0x1401fa229 | 2325     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa230#539  | 0x1401fa230 | 539      | CALL         | true    | member           | [object Object],[object Object],[object Object],[object Object],[object Object] |                 |
| 0x1401fa230#1684 | 0x1401fa230 | 1684     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa230#1748 | 0x1401fa230 | 1748     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa230#1779 | 0x1401fa230 | 1779     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa230#1810 | 0x1401fa230 | 1810     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa230#1841 | 0x1401fa230 | 1841     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa230#1872 | 0x1401fa230 | 1872     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa230#1903 | 0x1401fa230 | 1903     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa230#1936 | 0x1401fa230 | 1936     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa230#1967 | 0x1401fa230 | 1967     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa230#1998 | 0x1401fa230 | 1998     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa230#2029 | 0x1401fa230 | 2029     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa230#2060 | 0x1401fa230 | 2060     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa230#2091 | 0x1401fa230 | 2091     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa230#2122 | 0x1401fa230 | 2122     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa235#540  | 0x1401fa235 | 540      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa235#541  | 0x1401fa235 | 541      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa235#2326 | 0x1401fa235 | 2326     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa23c#547  | 0x1401fa23c | 547      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa23f#552  | 0x1401fa23f | 552      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401fa241#553  | 0x1401fa241 | 553      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa241#554  | 0x1401fa241 | 554      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa241#560  | 0x1401fa241 | 560      | INT_NOTEQUAL | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa241#2327 | 0x1401fa241 | 2327     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa249#565  | 0x1401fa249 | 565      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401fa24b#569  | 0x1401fa24b | 569      | CALL         | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401fa24b#1685 | 0x1401fa24b | 1685     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa24b#1749 | 0x1401fa24b | 1749     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa24b#1780 | 0x1401fa24b | 1780     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa24b#1811 | 0x1401fa24b | 1811     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa24b#1842 | 0x1401fa24b | 1842     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa24b#1873 | 0x1401fa24b | 1873     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa24b#1904 | 0x1401fa24b | 1904     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa24b#1937 | 0x1401fa24b | 1937     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa24b#1968 | 0x1401fa24b | 1968     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa24b#1999 | 0x1401fa24b | 1999     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa24b#2030 | 0x1401fa24b | 2030     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa24b#2061 | 0x1401fa24b | 2061     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa24b#2092 | 0x1401fa24b | 2092     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa24b#2123 | 0x1401fa24b | 2123     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa252#1692 | 0x1401fa252 | 1692     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401fa252#1754 | 0x1401fa252 | 1754     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401fa252#1785 | 0x1401fa252 | 1785     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401fa252#1816 | 0x1401fa252 | 1816     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401fa252#1847 | 0x1401fa252 | 1847     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401fa252#1878 | 0x1401fa252 | 1878     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401fa252#1909 | 0x1401fa252 | 1909     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401fa252#1942 | 0x1401fa252 | 1942     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401fa252#1973 | 0x1401fa252 | 1973     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401fa252#2004 | 0x1401fa252 | 2004     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401fa252#2035 | 0x1401fa252 | 2035     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401fa252#2066 | 0x1401fa252 | 2066     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401fa252#2097 | 0x1401fa252 | 2097     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401fa252#2128 | 0x1401fa252 | 2128     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401fa25a#583  | 0x1401fa25a | 583      | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa25a#584  | 0x1401fa25a | 584      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401fa25c#585  | 0x1401fa25c | 585      | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa25c#586  | 0x1401fa25c | 586      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa268#592  | 0x1401fa268 | 592      | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa26f#601  | 0x1401fa26f | 601      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401fa26f#2298 | 0x1401fa26f | 2298     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa26f#2328 | 0x1401fa26f | 2328     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa271#603  | 0x1401fa271 | 603      | LOAD         | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa271#2294 | 0x1401fa271 | 2294     | PTRADD       | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401fa271#2329 | 0x1401fa271 | 2329     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa278#616  | 0x1401fa278 | 616      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa278#2295 | 0x1401fa278 | 2295     | INT_SUB      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa278#2330 | 0x1401fa278 | 2330     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa278#2331 | 0x1401fa278 | 2331     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa280#633  | 0x1401fa280 | 633      | INT_LESS     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa280#635  | 0x1401fa280 | 635      | CBRANCH      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401fa280#2332 | 0x1401fa280 | 2332     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa282#636  | 0x1401fa282 | 636      | INT_MULT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa282#637  | 0x1401fa282 | 637      | INT_ADD      | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa28d#642  | 0x1401fa28d | 642      | CALL         | true    | member           | [object Object],[object Object],[object Object]                                 |                 |
| 0x1401fa28d#1040 | 0x1401fa28d | 1040     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa28d#1137 | 0x1401fa28d | 1137     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa28d#1688 | 0x1401fa28d | 1688     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa28d#1752 | 0x1401fa28d | 1752     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa28d#1783 | 0x1401fa28d | 1783     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa28d#1814 | 0x1401fa28d | 1814     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa28d#1845 | 0x1401fa28d | 1845     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa28d#1876 | 0x1401fa28d | 1876     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa28d#1907 | 0x1401fa28d | 1907     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa28d#1940 | 0x1401fa28d | 1940     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa28d#1971 | 0x1401fa28d | 1971     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa28d#2002 | 0x1401fa28d | 2002     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa28d#2033 | 0x1401fa28d | 2033     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa28d#2126 | 0x1401fa28d | 2126     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa292#1691 | 0x1401fa292 | 1691     | MULTIEQUAL   | true    | member           | [object Object],[object Object],[object Object]                                 | [object Object] |
| 0x1401fa2a9#685  | 0x1401fa2a9 | 685      | RETURN       | true    | member           | [object Object]                                                                 |                 |
| 0x1401fa2a9#1689 | 0x1401fa2a9 | 1689     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa2af#693  | 0x1401fa2af | 693      | CALLOTHER    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2af#694  | 0x1401fa2af | 694      | CALLIND      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401fa2af#1682 | 0x1401fa2af | 1682     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2af#1746 | 0x1401fa2af | 1746     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2af#1777 | 0x1401fa2af | 1777     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2af#1808 | 0x1401fa2af | 1808     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2af#1839 | 0x1401fa2af | 1839     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2af#1870 | 0x1401fa2af | 1870     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2af#1901 | 0x1401fa2af | 1901     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2af#1934 | 0x1401fa2af | 1934     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2af#1965 | 0x1401fa2af | 1965     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2af#1996 | 0x1401fa2af | 1996     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2af#2027 | 0x1401fa2af | 2027     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2af#2120 | 0x1401fa2af | 2120     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2af#2321 | 0x1401fa2af | 2321     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa2b1#1693 | 0x1401fa2b1 | 1693     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b1#1755 | 0x1401fa2b1 | 1755     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b1#1786 | 0x1401fa2b1 | 1786     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b1#1817 | 0x1401fa2b1 | 1817     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b1#1848 | 0x1401fa2b1 | 1848     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b1#1879 | 0x1401fa2b1 | 1879     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b1#1910 | 0x1401fa2b1 | 1910     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b1#1943 | 0x1401fa2b1 | 1943     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b1#1974 | 0x1401fa2b1 | 1974     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b1#2005 | 0x1401fa2b1 | 2005     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b1#2036 | 0x1401fa2b1 | 2036     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b1#2129 | 0x1401fa2b1 | 2129     | MULTIEQUAL   | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b6#687  | 0x1401fa2b6 | 687      | CALLOTHER    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b6#688  | 0x1401fa2b6 | 688      | CALLIND      | true    | member           | [object Object],[object Object]                                                 |                 |
| 0x1401fa2b6#1686 | 0x1401fa2b6 | 1686     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b6#1750 | 0x1401fa2b6 | 1750     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b6#1781 | 0x1401fa2b6 | 1781     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b6#1812 | 0x1401fa2b6 | 1812     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b6#1843 | 0x1401fa2b6 | 1843     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b6#1874 | 0x1401fa2b6 | 1874     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b6#1905 | 0x1401fa2b6 | 1905     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b6#1938 | 0x1401fa2b6 | 1938     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b6#1969 | 0x1401fa2b6 | 1969     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b6#2000 | 0x1401fa2b6 | 2000     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b6#2031 | 0x1401fa2b6 | 2031     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b6#2124 | 0x1401fa2b6 | 2124     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b6#2333 | 0x1401fa2b6 | 2333     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa2b8#689  | 0x1401fa2b8 | 689      | CALLOTHER    | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b8#690  | 0x1401fa2b8 | 690      | CALLIND      | true    | member           | [object Object]                                                                 |                 |
| 0x1401fa2b8#691  | 0x1401fa2b8 | 691      | RETURN       | true    | member           | [object Object]                                                                 |                 |
| 0x1401fa2b8#1687 | 0x1401fa2b8 | 1687     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b8#1690 | 0x1401fa2b8 | 1690     | COPY         | true    | member           | [object Object]                                                                 | [object Object] |
| 0x1401fa2b8#1751 | 0x1401fa2b8 | 1751     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b8#1782 | 0x1401fa2b8 | 1782     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b8#1813 | 0x1401fa2b8 | 1813     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b8#1844 | 0x1401fa2b8 | 1844     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b8#1875 | 0x1401fa2b8 | 1875     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b8#1906 | 0x1401fa2b8 | 1906     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b8#1939 | 0x1401fa2b8 | 1939     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b8#1970 | 0x1401fa2b8 | 1970     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b8#2001 | 0x1401fa2b8 | 2001     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b8#2032 | 0x1401fa2b8 | 2032     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b8#2125 | 0x1401fa2b8 | 2125     | INDIRECT     | true    | member           | [object Object],[object Object]                                                 | [object Object] |
| 0x1401fa2b8#2334 | 0x1401fa2b8 | 2334     | CAST         | true    | member           | [object Object]                                                                 | [object Object] |

## normalized_result.native_value_flow.def_use

| definition       | use              | input_index |
|------------------|------------------|-------------|
| 0x1401f9fc8#2302 | 0x1401f9fc8#26   | 1           |
| 0x1401f9fba#2283 | 0x1401f9fc8#2302 | 0           |
| 0x1401f9fd4#2303 | 0x1401f9fd4#48   | 1           |
| 0x1401f9fd4#47   | 0x1401f9fd4#2303 | 0           |
| 0x1401f9fd4#48   | 0x1401f9fdb#54   | 0           |
| 0x1401f9fdb#54   | 0x1401f9fde#59   | 1           |
| 0x1401f9fd4#48   | 0x1401f9fe4#63   | 1           |
| 0x1401f9fc8#26   | 0x1401f9fe4#2103 | 0           |
| 0x1401f9fec#2275 | 0x1401f9fec#74   | 1           |
| 0x1401f9fec#74   | 0x1401f9fec#75   | 1           |
| 0x1401f9fe4#1665 | 0x1401f9fec#2271 | 0           |
| 0x1401fa010#1667 | 0x1401f9fec#2271 | 1           |
| 0x1401f9fe4#2041 | 0x1401f9fec#2272 | 0           |
| 0x1401fa010#2043 | 0x1401f9fec#2272 | 1           |
| 0x1401f9fe4#2072 | 0x1401f9fec#2273 | 0           |
| 0x1401fa010#2074 | 0x1401f9fec#2273 | 1           |
| 0x1401f9fe4#2103 | 0x1401f9fec#2274 | 0           |
| 0x1401fa010#2105 | 0x1401f9fec#2274 | 1           |
| 0x1401f9fe4#63   | 0x1401f9fec#2275 | 0           |
| 0x1401fa010#110  | 0x1401f9fec#2275 | 1           |
| 0x1401f9ff8#2304 | 0x1401f9ff8#88   | 1           |
| 0x1401f9ff8#87   | 0x1401f9ff8#2304 | 0           |
| 0x1401f9ff8#88   | 0x1401f9fff#93   | 1           |
| 0x1401f9fec#2271 | 0x1401f9fff#1666 | 0           |
| 0x1401f9fec#2272 | 0x1401f9fff#2042 | 0           |
| 0x1401f9fec#2273 | 0x1401f9fff#2073 | 0           |
| 0x1401f9fec#2274 | 0x1401f9fff#2104 | 0           |
| 0x1401f9fff#93   | 0x1401fa005#98   | 0           |
| 0x1401fa005#98   | 0x1401fa007#103  | 1           |
| 0x1401fa009#2305 | 0x1401fa009#105  | 1           |
| 0x1401fa009#104  | 0x1401fa009#2305 | 0           |
| 0x1401fa009#105  | 0x1401fa010#110  | 1           |
| 0x1401f9fff#1666 | 0x1401fa010#1667 | 0           |
| 0x1401f9fff#2042 | 0x1401fa010#2043 | 0           |
| 0x1401f9fff#2073 | 0x1401fa010#2074 | 0           |
| 0x1401f9fff#2104 | 0x1401fa010#2105 | 0           |
| 0x1401f9fec#2271 | 0x1401fa01a#1697 | 0           |
| 0x1401f9fff#1666 | 0x1401fa01a#1697 | 1           |
| 0x1401f9fec#2272 | 0x1401fa01a#2071 | 0           |
| 0x1401f9fff#2042 | 0x1401fa01a#2071 | 1           |
| 0x1401f9fec#2273 | 0x1401fa01a#2102 | 0           |
| 0x1401f9fff#2073 | 0x1401fa01a#2102 | 1           |
| 0x1401f9fec#2274 | 0x1401fa01a#2133 | 0           |
| 0x1401f9fff#2104 | 0x1401fa01a#2133 | 1           |
| 0x1401fa01a#124  | 0x1401fa021#128  | 1           |
| 0x1401fa01a#1697 | 0x1401fa021#1668 | 0           |
| 0x1401fa01a#2071 | 0x1401fa021#2044 | 0           |
| 0x1401fa01a#2102 | 0x1401fa021#2075 | 0           |
| 0x1401fa01a#2133 | 0x1401fa021#2106 | 0           |
| 0x1401fa021#128  | 0x1401fa026#133  | 0           |
| 0x1401fa026#133  | 0x1401fa028#138  | 1           |
| 0x1401fa048#2306 | 0x1401fa048#708  | 1           |
| 0x1401fa048#707  | 0x1401fa048#2306 | 0           |
| 0x1401fa048#708  | 0x1401fa04f#712  | 1           |
| 0x1401fa04f#2278 | 0x1401fa04f#712  | 4           |
| 0x1401fa021#1668 | 0x1401fa04f#1669 | 0           |
| 0x1401fa021#2044 | 0x1401fa04f#2045 | 0           |
| 0x1401fa021#2075 | 0x1401fa04f#2076 | 0           |
| 0x1401fa021#2106 | 0x1401fa04f#2107 | 0           |
| 0x1401fa02a#139  | 0x1401fa061#1220 | 0           |
| 0x1401fa054#713  | 0x1401fa061#1220 | 1           |
| 0x1401fa030#140  | 0x1401fa061#1276 | 0           |
| 0x1401fa05a#714  | 0x1401fa061#1276 | 1           |
| 0x1401fa021#1668 | 0x1401fa061#1695 | 0           |
| 0x1401fa04f#1669 | 0x1401fa061#1695 | 1           |
| 0x1401fa021#2044 | 0x1401fa061#2069 | 0           |
| 0x1401fa04f#2045 | 0x1401fa061#2069 | 1           |
| 0x1401fa021#2075 | 0x1401fa061#2100 | 0           |
| 0x1401fa04f#2076 | 0x1401fa061#2100 | 1           |
| 0x1401fa021#2106 | 0x1401fa061#2131 | 0           |
| 0x1401fa04f#2107 | 0x1401fa061#2131 | 1           |
| 0x1401fa063#2307 | 0x1401fa063#153  | 1           |
| 0x1401fa063#152  | 0x1401fa063#2307 | 0           |
| 0x1401fa063#153  | 0x1401fa06a#157  | 1           |
| 0x1401fa061#1220 | 0x1401fa06a#157  | 3           |
| 0x1401fa061#1276 | 0x1401fa06a#157  | 4           |
| 0x1401fa061#1695 | 0x1401fa06a#1670 | 0           |
| 0x1401fa061#2069 | 0x1401fa06a#2046 | 0           |
| 0x1401fa061#2100 | 0x1401fa06a#2077 | 0           |
| 0x1401fa061#2131 | 0x1401fa06a#2108 | 0           |
| 0x1401fa07a#2308 | 0x1401fa07a#180  | 1           |
| 0x1401fa07a#179  | 0x1401fa07a#2308 | 0           |
| 0x1401fa07a#180  | 0x1401fa081#184  | 1           |
| 0x1401fa06a#1670 | 0x1401fa081#1671 | 0           |
| 0x1401fa06a#2046 | 0x1401fa081#2047 | 0           |
| 0x1401fa06a#2077 | 0x1401fa081#2078 | 0           |
| 0x1401fa06a#2108 | 0x1401fa081#2109 | 0           |
| 0x1401fa088#2309 | 0x1401fa088#188  | 1           |
| 0x1401fa088#188  | 0x1401fa088#194  | 0           |
| 0x1401fa088#187  | 0x1401fa088#2309 | 0           |
| 0x1401fa09e#2310 | 0x1401fa09e#204  | 1           |
| 0x1401fa09e#203  | 0x1401fa09e#2310 | 0           |
| 0x1401fa09e#204  | 0x1401fa0a5#208  | 1           |
| 0x1401fa088#194  | 0x1401fa0a5#208  | 2           |
| 0x1401fa0a5#2280 | 0x1401fa0a5#208  | 4           |
| 0x1401fa081#1671 | 0x1401fa0a5#1672 | 0           |
| 0x1401fa081#2047 | 0x1401fa0a5#2048 | 0           |
| 0x1401fa081#2078 | 0x1401fa0a5#2079 | 0           |
| 0x1401fa081#2109 | 0x1401fa0a5#2110 | 0           |
| 0x1401fa0b5#2311 | 0x1401fa0b5#231  | 1           |
| 0x1401fa0b5#230  | 0x1401fa0b5#2311 | 0           |
| 0x1401fa0b5#231  | 0x1401fa0bc#235  | 1           |
| 0x1401fa0a5#1672 | 0x1401fa0bc#1673 | 0           |
| 0x1401fa0a5#2048 | 0x1401fa0bc#2049 | 0           |
| 0x1401fa0a5#2079 | 0x1401fa0bc#2080 | 0           |
| 0x1401fa0a5#2110 | 0x1401fa0bc#2111 | 0           |
| 0x1401fa0d0#2312 | 0x1401fa0d0#249  | 1           |
| 0x1401fa0d0#248  | 0x1401fa0d0#2312 | 0           |
| 0x1401fa0d0#249  | 0x1401fa0d7#253  | 1           |
| 0x1401fa0d7#2279 | 0x1401fa0d7#253  | 4           |
| 0x1401fa0bc#1673 | 0x1401fa0d7#1674 | 0           |
| 0x1401fa0bc#2049 | 0x1401fa0d7#2050 | 0           |
| 0x1401fa0bc#2080 | 0x1401fa0d7#2081 | 0           |
| 0x1401fa0bc#2111 | 0x1401fa0d7#2112 | 0           |
| 0x1401fa0eb#2313 | 0x1401fa0eb#267  | 1           |
| 0x1401fa0eb#266  | 0x1401fa0eb#2313 | 0           |
| 0x1401fa0eb#267  | 0x1401fa0f2#271  | 1           |
| 0x1401fa0f2#2281 | 0x1401fa0f2#271  | 4           |
| 0x1401fa0d7#1674 | 0x1401fa0f2#1675 | 0           |
| 0x1401fa0d7#2050 | 0x1401fa0f2#2051 | 0           |
| 0x1401fa0d7#2081 | 0x1401fa0f2#2082 | 0           |
| 0x1401fa0d7#2112 | 0x1401fa0f2#2113 | 0           |
| 0x1401fa106#2314 | 0x1401fa106#285  | 1           |
| 0x1401fa106#284  | 0x1401fa106#2314 | 0           |
| 0x1401fa106#285  | 0x1401fa10d#289  | 1           |
| 0x1401fa10d#2282 | 0x1401fa10d#289  | 4           |
| 0x1401fa0f2#1675 | 0x1401fa10d#1676 | 0           |
| 0x1401fa0f2#2051 | 0x1401fa10d#2052 | 0           |
| 0x1401fa0f2#2082 | 0x1401fa10d#2083 | 0           |
| 0x1401fa0f2#2113 | 0x1401fa10d#2114 | 0           |
| 0x1401fa11d#2315 | 0x1401fa11d#312  | 1           |
| 0x1401fa11d#311  | 0x1401fa11d#2315 | 0           |
| 0x1401fa11d#312  | 0x1401fa124#316  | 1           |
| 0x1401fa10d#1676 | 0x1401fa124#1677 | 0           |
| 0x1401fa10d#2052 | 0x1401fa124#2053 | 0           |
| 0x1401fa10d#2083 | 0x1401fa124#2084 | 0           |
| 0x1401fa10d#2114 | 0x1401fa124#2115 | 0           |
| 0x1401fa129#317  | 0x1401fa130#321  | 1           |
| 0x1401fa124#1677 | 0x1401fa130#1678 | 0           |
| 0x1401fa124#2053 | 0x1401fa130#2054 | 0           |
| 0x1401fa124#2084 | 0x1401fa130#2085 | 0           |
| 0x1401fa124#2115 | 0x1401fa130#2116 | 0           |
| 0x1401fa130#321  | 0x1401fa143#328  | 0           |
| 0x1401fa143#328  | 0x1401fa145#336  | 1           |
| 0x1401fa13c#323  | 0x1401fa149#1163 | 0           |
| 0x1401fa145#337  | 0x1401fa149#1163 | 1           |
| 0x1401fa149#1163 | 0x1401fa15b#354  | 1           |
| 0x1401fa130#1678 | 0x1401fa15b#1679 | 0           |
| 0x1401fa14c#1660 | 0x1401fa15b#1931 | 0           |
| 0x1401fa14c#1661 | 0x1401fa15b#1962 | 0           |
| 0x1401fa150#347  | 0x1401fa15b#1993 | 0           |
| 0x1401fa154#350  | 0x1401fa15b#2024 | 0           |
| 0x1401fa130#2054 | 0x1401fa15b#2055 | 0           |
| 0x1401fa130#2085 | 0x1401fa15b#2086 | 0           |
| 0x1401fa130#2116 | 0x1401fa15b#2117 | 0           |
| 0x1401fa166#2284 | 0x1401fa16a#361  | 1           |
| 0x1401fa149#1163 | 0x1401fa16a#361  | 2           |
| 0x1401fa15b#354  | 0x1401fa16a#361  | 3           |
| 0x1401fa15b#1679 | 0x1401fa16a#1680 | 0           |
| 0x1401fa15b#1931 | 0x1401fa16a#1932 | 0           |
| 0x1401fa15b#1962 | 0x1401fa16a#1963 | 0           |
| 0x1401fa15b#1993 | 0x1401fa16a#1994 | 0           |
| 0x1401fa15b#2024 | 0x1401fa16a#2025 | 0           |
| 0x1401fa15b#2055 | 0x1401fa16a#2056 | 0           |
| 0x1401fa15b#2086 | 0x1401fa16a#2087 | 0           |
| 0x1401fa15b#2117 | 0x1401fa16a#2118 | 0           |
| 0x1401fa16a#2025 | 0x1401fa179#377  | 1           |
| 0x1401fa179#377  | 0x1401fa179#382  | 1           |
| 0x1401fa170#2285 | 0x1401fa179#2296 | 0           |
| 0x1401fa16a#1932 | 0x1401fa179#2297 | 0           |
| 0x1401fa179#2296 | 0x1401fa17e#1012 | 0           |
| 0x1401fa179#2297 | 0x1401fa17e#1012 | 1           |
| 0x1401fa16a#1994 | 0x1401fa186#392  | 0           |
| 0x1401fa1b5#2290 | 0x1401fa1b9#418  | 1           |
| 0x1401fa1b1#2289 | 0x1401fa1b9#418  | 2           |
| 0x1401fa1ad#2288 | 0x1401fa1b9#418  | 3           |
| 0x1401fa16a#1680 | 0x1401fa1b9#1681 | 0           |
| 0x1401fa17e#1012 | 0x1401fa1b9#1745 | 0           |
| 0x1401fa186#392  | 0x1401fa1b9#1776 | 0           |
| 0x1401fa18a#2286 | 0x1401fa1b9#1807 | 0           |
| 0x1401fa192#2287 | 0x1401fa1b9#1838 | 0           |
| 0x1401fa1a1#406  | 0x1401fa1b9#1869 | 0           |
| 0x1401fa1a5#409  | 0x1401fa1b9#1900 | 0           |
| 0x1401fa16a#1932 | 0x1401fa1b9#1933 | 0           |
| 0x1401fa16a#1963 | 0x1401fa1b9#1964 | 0           |
| 0x1401fa16a#1994 | 0x1401fa1b9#1995 | 0           |
| 0x1401fa16a#2025 | 0x1401fa1b9#2026 | 0           |
| 0x1401fa16a#2056 | 0x1401fa1b9#2057 | 0           |
| 0x1401fa16a#2087 | 0x1401fa1b9#2088 | 0           |
| 0x1401fa16a#2118 | 0x1401fa1b9#2119 | 0           |
| 0x1401fa1b9#2026 | 0x1401fa1c7#432  | 1           |
| 0x1401fa1c7#432  | 0x1401fa1c7#433  | 1           |
| 0x1401fa1b9#2026 | 0x1401fa1c9#434  | 0           |
| 0x1401fa1c9#434  | 0x1401fa1c9#435  | 0           |
| 0x1401fa1c9#435  | 0x1401fa1d5#441  | 1           |
| 0x1401fa1d5#441  | 0x1401fa1dc#450  | 1           |
| 0x1401fa1dc#2316 | 0x1401fa1dc#2299 | 0           |
| 0x1401fa1b9#1933 | 0x1401fa1dc#2316 | 0           |
| 0x1401fa1de#2291 | 0x1401fa1de#452  | 1           |
| 0x1401fa1b9#1933 | 0x1401fa1de#2291 | 0           |
| 0x1401fa1de#452  | 0x1401fa1de#2317 | 0           |
| 0x1401fa1e5#2319 | 0x1401fa1e5#465  | 0           |
| 0x1401fa1e5#2292 | 0x1401fa1e5#465  | 1           |
| 0x1401fa1e5#2318 | 0x1401fa1e5#2292 | 1           |
| 0x1401fa1de#2317 | 0x1401fa1e5#2318 | 0           |
| 0x1401fa1b9#1933 | 0x1401fa1e5#2319 | 0           |
| 0x1401fa1ed#2320 | 0x1401fa1ed#482  | 1           |
| 0x1401fa1ed#482  | 0x1401fa1ed#484  | 1           |
| 0x1401fa1e5#465  | 0x1401fa1ed#2320 | 0           |
| 0x1401fa1b9#2026 | 0x1401fa1f3#485  | 0           |
| 0x1401fa1f3#485  | 0x1401fa1f3#486  | 0           |
| 0x1401fa1fe#1044 | 0x1401fa1fe#491  | 1           |
| 0x1401fa1fe#1141 | 0x1401fa1fe#491  | 2           |
| 0x1401fa1dc#2299 | 0x1401fa1fe#1044 | 0           |
| 0x1401fa1de#2317 | 0x1401fa1fe#1044 | 1           |
| 0x1401fa1c9#435  | 0x1401fa1fe#1141 | 0           |
| 0x1401fa1f3#486  | 0x1401fa1fe#1141 | 1           |
| 0x1401fa1b9#1681 | 0x1401fa1fe#1683 | 0           |
| 0x1401fa1b9#1745 | 0x1401fa1fe#1747 | 0           |
| 0x1401fa1b9#1776 | 0x1401fa1fe#1778 | 0           |
| 0x1401fa1b9#1807 | 0x1401fa1fe#1809 | 0           |
| 0x1401fa1b9#1838 | 0x1401fa1fe#1840 | 0           |
| 0x1401fa1b9#1869 | 0x1401fa1fe#1871 | 0           |
| 0x1401fa1b9#1900 | 0x1401fa1fe#1902 | 0           |
| 0x1401fa1b9#1933 | 0x1401fa1fe#1935 | 0           |
| 0x1401fa1b9#1964 | 0x1401fa1fe#1966 | 0           |
| 0x1401fa1b9#1995 | 0x1401fa1fe#1997 | 0           |
| 0x1401fa1b9#2026 | 0x1401fa1fe#2028 | 0           |
| 0x1401fa1b9#2057 | 0x1401fa1fe#2059 | 0           |
| 0x1401fa1b9#2088 | 0x1401fa1fe#2090 | 0           |
| 0x1401fa1b9#2119 | 0x1401fa1fe#2121 | 0           |
| 0x1401fa1b9#1681 | 0x1401fa203#1694 | 0           |
| 0x1401fa1fe#1683 | 0x1401fa203#1694 | 1           |
| 0x1401fa1b9#1745 | 0x1401fa203#1756 | 0           |
| 0x1401fa1fe#1747 | 0x1401fa203#1756 | 1           |
| 0x1401fa1b9#1776 | 0x1401fa203#1787 | 0           |
| 0x1401fa1fe#1778 | 0x1401fa203#1787 | 1           |
| 0x1401fa1b9#1807 | 0x1401fa203#1818 | 0           |
| 0x1401fa1fe#1809 | 0x1401fa203#1818 | 1           |
| 0x1401fa1b9#1838 | 0x1401fa203#1849 | 0           |
| 0x1401fa1fe#1840 | 0x1401fa203#1849 | 1           |
| 0x1401fa1b9#1869 | 0x1401fa203#1880 | 0           |
| 0x1401fa1fe#1871 | 0x1401fa203#1880 | 1           |
| 0x1401fa1b9#1900 | 0x1401fa203#1911 | 0           |
| 0x1401fa1fe#1902 | 0x1401fa203#1911 | 1           |
| 0x1401fa1b9#1933 | 0x1401fa203#1944 | 0           |
| 0x1401fa1fe#1935 | 0x1401fa203#1944 | 1           |
| 0x1401fa1b9#1964 | 0x1401fa203#1975 | 0           |
| 0x1401fa1fe#1966 | 0x1401fa203#1975 | 1           |
| 0x1401fa1b9#2057 | 0x1401fa203#2068 | 0           |
| 0x1401fa1fe#2059 | 0x1401fa203#2068 | 1           |
| 0x1401fa1b9#2088 | 0x1401fa203#2099 | 0           |
| 0x1401fa1fe#2090 | 0x1401fa203#2099 | 1           |
| 0x1401fa1b9#2119 | 0x1401fa203#2130 | 0           |
| 0x1401fa1fe#2121 | 0x1401fa203#2130 | 1           |
| 0x1401fa20f#2322 | 0x1401fa20f#1916 | 0           |
| 0x1401fa203#1944 | 0x1401fa20f#2322 | 0           |
| 0x1401fa20f#1916 | 0x1401fa20f#2323 | 0           |
| 0x1401fa203#2099 | 0x1401fa21c#516  | 1           |
| 0x1401fa21c#516  | 0x1401fa21c#521  | 1           |
| 0x1401fa213#2293 | 0x1401fa21c#2300 | 0           |
| 0x1401fa21c#2324 | 0x1401fa21c#2301 | 0           |
| 0x1401fa203#2068 | 0x1401fa21c#2324 | 0           |
| 0x1401fa21c#2300 | 0x1401fa221#1273 | 0           |
| 0x1401fa21c#2301 | 0x1401fa221#1273 | 1           |
| 0x1401fa229#2325 | 0x1401fa229#535  | 1           |
| 0x1401fa229#534  | 0x1401fa229#2325 | 0           |
| 0x1401fa229#535  | 0x1401fa230#539  | 1           |
| 0x1401fa221#1273 | 0x1401fa230#539  | 4           |
| 0x1401fa203#1694 | 0x1401fa230#1684 | 0           |
| 0x1401fa203#1756 | 0x1401fa230#1748 | 0           |
| 0x1401fa203#1787 | 0x1401fa230#1779 | 0           |
| 0x1401fa203#1818 | 0x1401fa230#1810 | 0           |
| 0x1401fa203#1849 | 0x1401fa230#1841 | 0           |
| 0x1401fa203#1880 | 0x1401fa230#1872 | 0           |
| 0x1401fa203#1911 | 0x1401fa230#1903 | 0           |
| 0x1401fa20f#2323 | 0x1401fa230#1936 | 0           |
| 0x1401fa203#1975 | 0x1401fa230#1967 | 0           |
| 0x1401fa203#494  | 0x1401fa230#1998 | 0           |
| 0x1401fa207#497  | 0x1401fa230#2029 | 0           |
| 0x1401fa203#2068 | 0x1401fa230#2060 | 0           |
| 0x1401fa203#2099 | 0x1401fa230#2091 | 0           |
| 0x1401fa203#2130 | 0x1401fa230#2122 | 0           |
| 0x1401fa235#2326 | 0x1401fa235#541  | 1           |
| 0x1401fa235#540  | 0x1401fa235#2326 | 0           |
| 0x1401fa235#541  | 0x1401fa23c#547  | 0           |
| 0x1401fa23c#547  | 0x1401fa23f#552  | 1           |
| 0x1401fa241#2327 | 0x1401fa241#554  | 1           |
| 0x1401fa241#554  | 0x1401fa241#560  | 0           |
| 0x1401fa241#553  | 0x1401fa241#2327 | 0           |
| 0x1401fa241#560  | 0x1401fa249#565  | 1           |
| 0x1401fa235#541  | 0x1401fa24b#569  | 1           |
| 0x1401fa230#1684 | 0x1401fa24b#1685 | 0           |
| 0x1401fa230#1748 | 0x1401fa24b#1749 | 0           |
| 0x1401fa230#1779 | 0x1401fa24b#1780 | 0           |
| 0x1401fa230#1810 | 0x1401fa24b#1811 | 0           |
| 0x1401fa230#1841 | 0x1401fa24b#1842 | 0           |
| 0x1401fa230#1872 | 0x1401fa24b#1873 | 0           |
| 0x1401fa230#1903 | 0x1401fa24b#1904 | 0           |
| 0x1401fa230#1936 | 0x1401fa24b#1937 | 0           |
| 0x1401fa230#1967 | 0x1401fa24b#1968 | 0           |
| 0x1401fa230#1998 | 0x1401fa24b#1999 | 0           |
| 0x1401fa230#2029 | 0x1401fa24b#2030 | 0           |
| 0x1401fa230#2060 | 0x1401fa24b#2061 | 0           |
| 0x1401fa230#2091 | 0x1401fa24b#2092 | 0           |
| 0x1401fa230#2122 | 0x1401fa24b#2123 | 0           |
| 0x1401fa230#1684 | 0x1401fa252#1692 | 0           |
| 0x1401fa230#1684 | 0x1401fa252#1692 | 1           |
| 0x1401fa24b#1685 | 0x1401fa252#1692 | 2           |
| 0x1401fa230#1748 | 0x1401fa252#1754 | 0           |
| 0x1401fa230#1748 | 0x1401fa252#1754 | 1           |
| 0x1401fa24b#1749 | 0x1401fa252#1754 | 2           |
| 0x1401fa230#1779 | 0x1401fa252#1785 | 0           |
| 0x1401fa230#1779 | 0x1401fa252#1785 | 1           |
| 0x1401fa24b#1780 | 0x1401fa252#1785 | 2           |
| 0x1401fa230#1810 | 0x1401fa252#1816 | 0           |
| 0x1401fa230#1810 | 0x1401fa252#1816 | 1           |
| 0x1401fa24b#1811 | 0x1401fa252#1816 | 2           |
| 0x1401fa230#1841 | 0x1401fa252#1847 | 0           |
| 0x1401fa230#1841 | 0x1401fa252#1847 | 1           |
| 0x1401fa24b#1842 | 0x1401fa252#1847 | 2           |
| 0x1401fa230#1872 | 0x1401fa252#1878 | 0           |
| 0x1401fa230#1872 | 0x1401fa252#1878 | 1           |
| 0x1401fa24b#1873 | 0x1401fa252#1878 | 2           |
| 0x1401fa230#1903 | 0x1401fa252#1909 | 0           |
| 0x1401fa230#1903 | 0x1401fa252#1909 | 1           |
| 0x1401fa24b#1904 | 0x1401fa252#1909 | 2           |
| 0x1401fa230#1936 | 0x1401fa252#1942 | 0           |
| 0x1401fa230#1936 | 0x1401fa252#1942 | 1           |
| 0x1401fa24b#1937 | 0x1401fa252#1942 | 2           |
| 0x1401fa230#1967 | 0x1401fa252#1973 | 0           |
| 0x1401fa230#1967 | 0x1401fa252#1973 | 1           |
| 0x1401fa24b#1968 | 0x1401fa252#1973 | 2           |
| 0x1401fa230#1998 | 0x1401fa252#2004 | 0           |
| 0x1401fa230#1998 | 0x1401fa252#2004 | 1           |
| 0x1401fa24b#1999 | 0x1401fa252#2004 | 2           |
| 0x1401fa230#2029 | 0x1401fa252#2035 | 0           |
| 0x1401fa230#2029 | 0x1401fa252#2035 | 1           |
| 0x1401fa24b#2030 | 0x1401fa252#2035 | 2           |
| 0x1401fa230#2060 | 0x1401fa252#2066 | 0           |
| 0x1401fa230#2060 | 0x1401fa252#2066 | 1           |
| 0x1401fa24b#2061 | 0x1401fa252#2066 | 2           |
| 0x1401fa230#2091 | 0x1401fa252#2097 | 0           |
| 0x1401fa230#2091 | 0x1401fa252#2097 | 1           |
| 0x1401fa24b#2092 | 0x1401fa252#2097 | 2           |
| 0x1401fa230#2122 | 0x1401fa252#2128 | 0           |
| 0x1401fa230#2122 | 0x1401fa252#2128 | 1           |
| 0x1401fa24b#2123 | 0x1401fa252#2128 | 2           |
| 0x1401fa252#2097 | 0x1401fa25a#583  | 1           |
| 0x1401fa25a#583  | 0x1401fa25a#584  | 1           |
| 0x1401fa252#2097 | 0x1401fa25c#585  | 0           |
| 0x1401fa25c#585  | 0x1401fa25c#586  | 0           |
| 0x1401fa25c#586  | 0x1401fa268#592  | 1           |
| 0x1401fa268#592  | 0x1401fa26f#601  | 1           |
| 0x1401fa26f#2328 | 0x1401fa26f#2298 | 0           |
| 0x1401fa252#2066 | 0x1401fa26f#2328 | 0           |
| 0x1401fa271#2294 | 0x1401fa271#603  | 1           |
| 0x1401fa252#2066 | 0x1401fa271#2294 | 0           |
| 0x1401fa271#603  | 0x1401fa271#2329 | 0           |
| 0x1401fa278#2331 | 0x1401fa278#616  | 0           |
| 0x1401fa278#2295 | 0x1401fa278#616  | 1           |
| 0x1401fa278#2330 | 0x1401fa278#2295 | 1           |
| 0x1401fa271#2329 | 0x1401fa278#2330 | 0           |
| 0x1401fa252#2066 | 0x1401fa278#2331 | 0           |
| 0x1401fa280#2332 | 0x1401fa280#633  | 1           |
| 0x1401fa280#633  | 0x1401fa280#635  | 1           |
| 0x1401fa278#616  | 0x1401fa280#2332 | 0           |
| 0x1401fa252#2097 | 0x1401fa282#636  | 0           |
| 0x1401fa282#636  | 0x1401fa282#637  | 0           |
| 0x1401fa28d#1040 | 0x1401fa28d#642  | 1           |
| 0x1401fa28d#1137 | 0x1401fa28d#642  | 2           |
| 0x1401fa26f#2298 | 0x1401fa28d#1040 | 0           |
| 0x1401fa271#2329 | 0x1401fa28d#1040 | 1           |
| 0x1401fa25c#586  | 0x1401fa28d#1137 | 0           |
| 0x1401fa282#637  | 0x1401fa28d#1137 | 1           |
| 0x1401fa252#1692 | 0x1401fa28d#1688 | 0           |
| 0x1401fa252#1754 | 0x1401fa28d#1752 | 0           |
| 0x1401fa252#1785 | 0x1401fa28d#1783 | 0           |
| 0x1401fa252#1816 | 0x1401fa28d#1814 | 0           |
| 0x1401fa252#1847 | 0x1401fa28d#1845 | 0           |
| 0x1401fa252#1878 | 0x1401fa28d#1876 | 0           |
| 0x1401fa252#1909 | 0x1401fa28d#1907 | 0           |
| 0x1401fa252#1942 | 0x1401fa28d#1940 | 0           |
| 0x1401fa252#1973 | 0x1401fa28d#1971 | 0           |
| 0x1401fa252#2004 | 0x1401fa28d#2002 | 0           |
| 0x1401fa252#2035 | 0x1401fa28d#2033 | 0           |
| 0x1401fa252#2128 | 0x1401fa28d#2126 | 0           |
| 0x1401fa252#1692 | 0x1401fa292#1691 | 1           |
| 0x1401fa28d#1688 | 0x1401fa292#1691 | 2           |
| 0x1401fa292#1691 | 0x1401fa2a9#1689 | 0           |
| 0x1401fa2af#2321 | 0x1401fa2af#694  | 0           |
| 0x1401fa1b9#1681 | 0x1401fa2af#1682 | 0           |
| 0x1401fa1b9#1745 | 0x1401fa2af#1746 | 0           |
| 0x1401fa1b9#1776 | 0x1401fa2af#1777 | 0           |
| 0x1401fa1b9#1807 | 0x1401fa2af#1808 | 0           |
| 0x1401fa1b9#1838 | 0x1401fa2af#1839 | 0           |
| 0x1401fa1b9#1869 | 0x1401fa2af#1870 | 0           |
| 0x1401fa1b9#1900 | 0x1401fa2af#1901 | 0           |
| 0x1401fa1b9#1933 | 0x1401fa2af#1934 | 0           |
| 0x1401fa1b9#1964 | 0x1401fa2af#1965 | 0           |
| 0x1401fa1b9#1995 | 0x1401fa2af#1996 | 0           |
| 0x1401fa1b9#2026 | 0x1401fa2af#2027 | 0           |
| 0x1401fa1b9#2119 | 0x1401fa2af#2120 | 0           |
| 0x1401fa2af#693  | 0x1401fa2af#2321 | 0           |
| 0x1401fa252#1692 | 0x1401fa2b1#1693 | 0           |
| 0x1401fa2af#1682 | 0x1401fa2b1#1693 | 1           |
| 0x1401fa252#1754 | 0x1401fa2b1#1755 | 0           |
| 0x1401fa2af#1746 | 0x1401fa2b1#1755 | 1           |
| 0x1401fa252#1785 | 0x1401fa2b1#1786 | 0           |
| 0x1401fa2af#1777 | 0x1401fa2b1#1786 | 1           |
| 0x1401fa252#1816 | 0x1401fa2b1#1817 | 0           |
| 0x1401fa2af#1808 | 0x1401fa2b1#1817 | 1           |
| 0x1401fa252#1847 | 0x1401fa2b1#1848 | 0           |
| 0x1401fa2af#1839 | 0x1401fa2b1#1848 | 1           |
| 0x1401fa252#1878 | 0x1401fa2b1#1879 | 0           |
| 0x1401fa2af#1870 | 0x1401fa2b1#1879 | 1           |
| 0x1401fa252#1909 | 0x1401fa2b1#1910 | 0           |
| 0x1401fa2af#1901 | 0x1401fa2b1#1910 | 1           |
| 0x1401fa252#1942 | 0x1401fa2b1#1943 | 0           |
| 0x1401fa2af#1934 | 0x1401fa2b1#1943 | 1           |
| 0x1401fa252#1973 | 0x1401fa2b1#1974 | 0           |
| 0x1401fa2af#1965 | 0x1401fa2b1#1974 | 1           |
| 0x1401fa252#2004 | 0x1401fa2b1#2005 | 0           |
| 0x1401fa2af#1996 | 0x1401fa2b1#2005 | 1           |
| 0x1401fa252#2035 | 0x1401fa2b1#2036 | 0           |
| 0x1401fa2af#2027 | 0x1401fa2b1#2036 | 1           |
| 0x1401fa252#2128 | 0x1401fa2b1#2129 | 0           |
| 0x1401fa2af#2120 | 0x1401fa2b1#2129 | 1           |
| 0x1401fa2b6#2333 | 0x1401fa2b6#688  | 0           |
| 0x1401fa2b1#1693 | 0x1401fa2b6#1686 | 0           |
| 0x1401fa2b1#1755 | 0x1401fa2b6#1750 | 0           |
| 0x1401fa2b1#1786 | 0x1401fa2b6#1781 | 0           |
| 0x1401fa2b1#1817 | 0x1401fa2b6#1812 | 0           |
| 0x1401fa2b1#1848 | 0x1401fa2b6#1843 | 0           |
| 0x1401fa2b1#1879 | 0x1401fa2b6#1874 | 0           |
| 0x1401fa2b1#1910 | 0x1401fa2b6#1905 | 0           |
| 0x1401fa2b1#1943 | 0x1401fa2b6#1938 | 0           |
| 0x1401fa2b1#1974 | 0x1401fa2b6#1969 | 0           |
| 0x1401fa2b1#2005 | 0x1401fa2b6#2000 | 0           |
| 0x1401fa2b1#2036 | 0x1401fa2b6#2031 | 0           |
| 0x1401fa2b1#2129 | 0x1401fa2b6#2124 | 0           |
| 0x1401fa2b6#687  | 0x1401fa2b6#2333 | 0           |
| 0x1401fa2b8#2334 | 0x1401fa2b8#690  | 0           |
| 0x1401fa2b6#1686 | 0x1401fa2b8#1687 | 0           |
| 0x1401fa2b8#1687 | 0x1401fa2b8#1690 | 0           |
| 0x1401fa2b6#1750 | 0x1401fa2b8#1751 | 0           |
| 0x1401fa2b6#1781 | 0x1401fa2b8#1782 | 0           |
| 0x1401fa2b6#1812 | 0x1401fa2b8#1813 | 0           |
| 0x1401fa2b6#1843 | 0x1401fa2b8#1844 | 0           |
| 0x1401fa2b6#1874 | 0x1401fa2b8#1875 | 0           |
| 0x1401fa2b6#1905 | 0x1401fa2b8#1906 | 0           |
| 0x1401fa2b6#1938 | 0x1401fa2b8#1939 | 0           |
| 0x1401fa2b6#1969 | 0x1401fa2b8#1970 | 0           |
| 0x1401fa2b6#2000 | 0x1401fa2b8#2001 | 0           |
| 0x1401fa2b6#2031 | 0x1401fa2b8#2032 | 0           |
| 0x1401fa2b6#2124 | 0x1401fa2b8#2125 | 0           |
| 0x1401fa2b8#689  | 0x1401fa2b8#2334 | 0           |

## normalized_result.native_value_flow.effects

| operation       | kind               | operand_input | value_input |
|-----------------|--------------------|---------------|-------------|
| 0x1401f9fd4#48  | memory_read        | 1             |             |
| 0x1401f9fde#59  | conditional_branch |               | 1           |
| 0x1401f9fe4#63  | direct_call        | 0             |             |
| 0x1401f9fec#75  | conditional_branch |               | 1           |
| 0x1401f9ff8#88  | memory_read        | 1             |             |
| 0x1401f9fff#93  | direct_call        | 0             |             |
| 0x1401fa007#103 | conditional_branch |               | 1           |
| 0x1401fa009#105 | memory_read        | 1             |             |
| 0x1401fa010#110 | direct_call        | 0             |             |
| 0x1401fa021#128 | direct_call        | 0             |             |
| 0x1401fa028#138 | conditional_branch |               | 1           |
| 0x1401fa048#708 | memory_read        | 1             |             |
| 0x1401fa04f#712 | direct_call        | 0             |             |
| 0x1401fa063#153 | memory_read        | 1             |             |
| 0x1401fa06a#157 | direct_call        | 0             |             |
| 0x1401fa07a#180 | memory_read        | 1             |             |
| 0x1401fa081#184 | direct_call        | 0             |             |
| 0x1401fa088#188 | memory_read        | 1             |             |
| 0x1401fa09e#204 | memory_read        | 1             |             |
| 0x1401fa0a5#208 | direct_call        | 0             |             |
| 0x1401fa0b5#231 | memory_read        | 1             |             |
| 0x1401fa0bc#235 | direct_call        | 0             |             |
| 0x1401fa0d0#249 | memory_read        | 1             |             |
| 0x1401fa0d7#253 | direct_call        | 0             |             |
| 0x1401fa0eb#267 | memory_read        | 1             |             |
| 0x1401fa0f2#271 | direct_call        | 0             |             |
| 0x1401fa106#285 | memory_read        | 1             |             |
| 0x1401fa10d#289 | direct_call        | 0             |             |
| 0x1401fa11d#312 | memory_read        | 1             |             |
| 0x1401fa124#316 | direct_call        | 0             |             |
| 0x1401fa130#321 | direct_call        | 0             |             |
| 0x1401fa145#336 | conditional_branch |               | 1           |
| 0x1401fa15b#354 | direct_call        | 0             |             |
| 0x1401fa16a#361 | direct_call        | 0             |             |
| 0x1401fa179#382 | conditional_branch |               | 1           |
| 0x1401fa1b9#418 | direct_call        | 0             |             |
| 0x1401fa1c7#433 | conditional_branch |               | 1           |
| 0x1401fa1dc#450 | conditional_branch |               | 1           |
| 0x1401fa1de#452 | memory_read        | 1             |             |
| 0x1401fa1ed#484 | conditional_branch |               | 1           |
| 0x1401fa1fe#491 | direct_call        | 0             |             |
| 0x1401fa21c#521 | conditional_branch |               | 1           |
| 0x1401fa229#535 | memory_read        | 1             |             |
| 0x1401fa230#539 | direct_call        | 0             |             |
| 0x1401fa235#541 | memory_read        | 1             |             |
| 0x1401fa23f#552 | conditional_branch |               | 1           |
| 0x1401fa241#554 | memory_read        | 1             |             |
| 0x1401fa249#565 | conditional_branch |               | 1           |
| 0x1401fa24b#569 | direct_call        | 0             |             |
| 0x1401fa25a#584 | conditional_branch |               | 1           |
| 0x1401fa26f#601 | conditional_branch |               | 1           |
| 0x1401fa271#603 | memory_read        | 1             |             |
| 0x1401fa280#635 | conditional_branch |               | 1           |
| 0x1401fa28d#642 | direct_call        | 0             |             |
| 0x1401fa2af#694 | indirect_call      | 0             |             |
| 0x1401fa2b6#688 | indirect_call      | 0             |             |
| 0x1401fa2b8#690 | indirect_call      | 0             |             |

## normalized_result.native_value_flow.parameters

| ordinal | name    | data_type |
|---------|---------|-----------|
| 0       | param_1 | /longlong |

## normalized_result.native_value_flow.parameter_uses

| ordinal | use             | input_index |
|---------|-----------------|-------------|
| 0       | 0x1401f9fd4#47  | 0           |
| 0       | 0x1401f9ff8#87  | 0           |
| 0       | 0x1401fa009#104 | 0           |
| 0       | 0x1401fa01a#124 | 0           |
| 0       | 0x1401fa048#707 | 0           |
| 0       | 0x1401fa063#152 | 0           |
| 0       | 0x1401fa07a#179 | 0           |
| 0       | 0x1401fa088#187 | 0           |
| 0       | 0x1401fa09e#203 | 0           |
| 0       | 0x1401fa0b5#230 | 0           |
| 0       | 0x1401fa0d0#248 | 0           |
| 0       | 0x1401fa0eb#266 | 0           |
| 0       | 0x1401fa106#284 | 0           |
| 0       | 0x1401fa11d#311 | 0           |
| 0       | 0x1401fa129#317 | 0           |
| 0       | 0x1401fa229#534 | 0           |
| 0       | 0x1401fa235#540 | 0           |
| 0       | 0x1401fa241#553 | 0           |

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

Unresolved computed or indirect flows without target addresses are not represented as reference edges.,Thunk and external classifications are Ghidra FunctionManager observations; they do not resolve targetless calls.,Pseudocode and assembly are Ghidra-specific representations, not original source or Hopper-equivalent text.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,Ghidra Listing reports a terminal call at 0x1401fa2b8 with no resolved callee; its no-return basis is unknown.

## confidence

observed

## authority

shipped-artifact

## environment

null

## limitations

The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.,The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.,Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.,Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.,References cover the complete Ghidra function-body AddressSet and exact entry. Dossier incoming edges omit sources owned by that function; procedure_references also retains those internal edges.,The dossier combines Ghidra FunctionManager, Listing, ReferenceManager, BasicBlockModel, and decompiler observations; provider-specific pseudocode and assembly are not cross-provider text invariants.,Resolved reference metadata identifies computed, indirect, external, call, jump, and data edges; unresolved targetless flows remain unknown, and function classifications distinguish thunks and externals.,Synthetic Ghidra entry-point references without actionable memory sources are omitted.,The Java bridge serializes one function request per Program and lets each decompilation run until it completes or the caller cancels.,Ghidra Listing reports a terminal call at 0x1401fa2b8 with no resolved callee; its no-return basis is unknown.,Windows Ghidra P0 accepts approved native x86 and x86-64 PE applications and DLLs; managed, hostile, sensitive, and mutable-path targets are unsupported.,The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.,Windows sessions require the matching packaged Windows x64 native addon, local NTFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.

## locations



## evidence_links

