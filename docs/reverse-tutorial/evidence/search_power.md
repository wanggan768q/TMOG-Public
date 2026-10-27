## evidence_id

ev_1da4f719e04c3259211d1d626afb99a8b859a47e4f2f94fba84b7dfedab37687

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

search_strings

## parameters

| Key            | Value   |
|----------------|---------|
| pattern        | Power   |
| mode           | literal |
| case_sensitive | true    |

## raw_result

| address     | value                                                                                                                                                                                                                                                                   |
|-------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 0x1403fb210 | CPU Power                                                                                                                                                                                                                                                               |
| 0x1403fd0d0 | Clock %1   Power %2   Memory %3                                                                                                                                                                                                                                         |
| 0x140407ac0 | GPU Power: %1                                                                                                                                                                                                                                                           |
| 0x140414150 | Package Power                                                                                                                                                                                                                                                           |
| 0x140415cc0 | Power                                                                                                                                                                                                                                                                   |
| 0x140415ce8 | Power & Freq                                                                                                                                                                                                                                                            |
| 0x140415d38 | Power && &Freq                                                                                                                                                                                                                                                          |
| 0x140415d80 | Power Cycles                                                                                                                                                                                                                                                            |
| 0x140415dc8 | Power On Hours                                                                                                                                                                                                                                                          |
| 0x140415e10 | Power consumption                                                                                                                                                                                                                                                       |
| 0x140415e60 | Power draw                                                                                                                                                                                                                                                              |
| 0x140415e78 | Power limit                                                                                                                                                                                                                                                             |
| 0x140415eb8 | Power preference                                                                                                                                                                                                                                                        |
| 0x140415f10 | Power source                                                                                                                                                                                                                                                            |
| 0x140415f60 | Powers                                                                                                                                                                                                                                                                  |
| 0x140430ce8 | Power                                                                                                                                                                                                                                                                   |
| 0x140430fb0 | Power draw                                                                                                                                                                                                                                                              |
| 0x140430fc0 | Power limit                                                                                                                                                                                                                                                             |
| 0x1404310b8 | Power source                                                                                                                                                                                                                                                            |
| 0x1404362a0 | CallNtPowerInformation ProcessorInformation CurrentMhz                                                                                                                                                                                                                  |
| 0x140438d40 | CPU Power                                                                                                                                                                                                                                                               |
| 0x14043d0e0 | SYSTEM\CurrentControlSet\Control\Session Manager\Power                                                                                                                                                                                                                  |
| 0x14043d150 | SYSTEM\CurrentControlSet\Control\Power                                                                                                                                                                                                                                  |
| 0x14043d2b8 | Microsoft-Windows-Kernel-Power                                                                                                                                                                                                                                          |
| 0x14043eae0 | CallNtPowerInformation ProcessorInformation MaximumMhz                                                                                                                                                                                                                  |
| 0x140440070 | CPU Package Power                                                                                                                                                                                                                                                       |
| 0x140440088 | AMD Ryzen Master CPUParameters::fVDDCR_VDD_Power                                                                                                                                                                                                                        |
| 0x1404400e0 | CPU Core Power                                                                                                                                                                                                                                                          |
| 0x140440108 | AMD Ryzen Master CPUParameters::fVDDCR_SOC_Power                                                                                                                                                                                                                        |
| 0x140440158 | SoC Power                                                                                                                                                                                                                                                               |
| 0x1404411c0 | Power-on Time                                                                                                                                                                                                                                                           |
| 0x1404411f0 | Power Cycles                                                                                                                                                                                                                                                            |
| 0x140441290 | Unexpected Power Losses                                                                                                                                                                                                                                                 |
| 0x140444018 | Power saver                                                                                                                                                                                                                                                             |
| 0x140444858 | nvmlDeviceGetPowerUsage                                                                                                                                                                                                                                                 |
| 0x140444870 | nvmlDeviceGetEnforcedPowerLimit                                                                                                                                                                                                                                         |
| 0x140445278 | ADLX GPUTotalBoardPower                                                                                                                                                                                                                                                 |
| 0x140445290 | ADLX GPUPower                                                                                                                                                                                                                                                           |
| 0x140445c68 | AC Power                                                                                                                                                                                                                                                                |
| 0x140445ff8 | PowerOnHours                                                                                                                                                                                                                                                            |
| 0x1404c085a | CallNtPowerInformation                                                                                                                                                                                                                                                  |
| 0x1404c0874 | PowerGetActiveScheme                                                                                                                                                                                                                                                    |
| 0x1404c088c | PowerReadACValueIndex                                                                                                                                                                                                                                                   |
| 0x1404c08a4 | PowerReadDCValueIndex                                                                                                                                                                                                                                                   |
| 0x1404c24b6 | GetSystemPowerStatus                                                                                                                                                                                                                                                    |
| 0x1404c90c0 | .?AV<lambda_7>@?1??PowerAndFreqRows@WindowsApplication@host@tmog@@AEAA?AV?$vector@UDisplayRow@WindowsApplication@host@tmog@@V?$allocator@UDisplayRow@WindowsApplication@host@tmog@@@std@@@std@@_N@Z@                                                                    |
| 0x1404caed0 | .?AV?$_Func_impl_no_alloc@V<lambda_7>@?1??PowerAndFreqRows@WindowsApplication@host@tmog@@AEAA?AV?$vector@UDisplayRow@WindowsApplication@host@tmog@@V?$allocator@UDisplayRow@WindowsApplication@host@tmog@@@std@@@std@@_N@Z@XAEBUHardwareDeviceDescriptor@core@5@H@std@@ |

## normalized_result

| address     | value                                                                                                                                                                                                                                                                   |
|-------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 0x1403fb210 | CPU Power                                                                                                                                                                                                                                                               |
| 0x1403fd0d0 | Clock %1   Power %2   Memory %3                                                                                                                                                                                                                                         |
| 0x140407ac0 | GPU Power: %1                                                                                                                                                                                                                                                           |
| 0x140414150 | Package Power                                                                                                                                                                                                                                                           |
| 0x140415cc0 | Power                                                                                                                                                                                                                                                                   |
| 0x140415ce8 | Power & Freq                                                                                                                                                                                                                                                            |
| 0x140415d38 | Power && &Freq                                                                                                                                                                                                                                                          |
| 0x140415d80 | Power Cycles                                                                                                                                                                                                                                                            |
| 0x140415dc8 | Power On Hours                                                                                                                                                                                                                                                          |
| 0x140415e10 | Power consumption                                                                                                                                                                                                                                                       |
| 0x140415e60 | Power draw                                                                                                                                                                                                                                                              |
| 0x140415e78 | Power limit                                                                                                                                                                                                                                                             |
| 0x140415eb8 | Power preference                                                                                                                                                                                                                                                        |
| 0x140415f10 | Power source                                                                                                                                                                                                                                                            |
| 0x140415f60 | Powers                                                                                                                                                                                                                                                                  |
| 0x140430ce8 | Power                                                                                                                                                                                                                                                                   |
| 0x140430fb0 | Power draw                                                                                                                                                                                                                                                              |
| 0x140430fc0 | Power limit                                                                                                                                                                                                                                                             |
| 0x1404310b8 | Power source                                                                                                                                                                                                                                                            |
| 0x1404362a0 | CallNtPowerInformation ProcessorInformation CurrentMhz                                                                                                                                                                                                                  |
| 0x140438d40 | CPU Power                                                                                                                                                                                                                                                               |
| 0x14043d0e0 | SYSTEM\CurrentControlSet\Control\Session Manager\Power                                                                                                                                                                                                                  |
| 0x14043d150 | SYSTEM\CurrentControlSet\Control\Power                                                                                                                                                                                                                                  |
| 0x14043d2b8 | Microsoft-Windows-Kernel-Power                                                                                                                                                                                                                                          |
| 0x14043eae0 | CallNtPowerInformation ProcessorInformation MaximumMhz                                                                                                                                                                                                                  |
| 0x140440070 | CPU Package Power                                                                                                                                                                                                                                                       |
| 0x140440088 | AMD Ryzen Master CPUParameters::fVDDCR_VDD_Power                                                                                                                                                                                                                        |
| 0x1404400e0 | CPU Core Power                                                                                                                                                                                                                                                          |
| 0x140440108 | AMD Ryzen Master CPUParameters::fVDDCR_SOC_Power                                                                                                                                                                                                                        |
| 0x140440158 | SoC Power                                                                                                                                                                                                                                                               |
| 0x1404411c0 | Power-on Time                                                                                                                                                                                                                                                           |
| 0x1404411f0 | Power Cycles                                                                                                                                                                                                                                                            |
| 0x140441290 | Unexpected Power Losses                                                                                                                                                                                                                                                 |
| 0x140444018 | Power saver                                                                                                                                                                                                                                                             |
| 0x140444858 | nvmlDeviceGetPowerUsage                                                                                                                                                                                                                                                 |
| 0x140444870 | nvmlDeviceGetEnforcedPowerLimit                                                                                                                                                                                                                                         |
| 0x140445278 | ADLX GPUTotalBoardPower                                                                                                                                                                                                                                                 |
| 0x140445290 | ADLX GPUPower                                                                                                                                                                                                                                                           |
| 0x140445c68 | AC Power                                                                                                                                                                                                                                                                |
| 0x140445ff8 | PowerOnHours                                                                                                                                                                                                                                                            |
| 0x1404c085a | CallNtPowerInformation                                                                                                                                                                                                                                                  |
| 0x1404c0874 | PowerGetActiveScheme                                                                                                                                                                                                                                                    |
| 0x1404c088c | PowerReadACValueIndex                                                                                                                                                                                                                                                   |
| 0x1404c08a4 | PowerReadDCValueIndex                                                                                                                                                                                                                                                   |
| 0x1404c24b6 | GetSystemPowerStatus                                                                                                                                                                                                                                                    |
| 0x1404c90c0 | .?AV<lambda_7>@?1??PowerAndFreqRows@WindowsApplication@host@tmog@@AEAA?AV?$vector@UDisplayRow@WindowsApplication@host@tmog@@V?$allocator@UDisplayRow@WindowsApplication@host@tmog@@@std@@@std@@_N@Z@                                                                    |
| 0x1404caed0 | .?AV?$_Func_impl_no_alloc@V<lambda_7>@?1??PowerAndFreqRows@WindowsApplication@host@tmog@@AEAA?AV?$vector@UDisplayRow@WindowsApplication@host@tmog@@V?$allocator@UDisplayRow@WindowsApplication@host@tmog@@@std@@@std@@_N@Z@XAEBUHardwareDeviceDescriptor@core@5@H@std@@ |

## confidence

observed

## authority

shipped-artifact

## environment

null

## limitations

The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.,The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.,Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.,Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.,Only Ghidra-defined string Data is observed; packed or undefined string bytes may be absent. Completeness applies to that inventory, and an empty search does not establish that text is absent from the artifact. If an address is known, use read_bytes and xrefs to inspect bytes and references.,Regex mode uses Java Pattern semantics. Matcher or compiler stack exhaustion returns a resource constraint without closing the session; literal mode avoids regex recursion and returns complete matching values.,Windows Ghidra P0 accepts approved native x86 and x86-64 PE applications and DLLs; managed, hostile, sensitive, and mutable-path targets are unsupported.,The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.,Windows sessions require the matching packaged Windows x64 native addon, local NTFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.

## locations



## evidence_links

