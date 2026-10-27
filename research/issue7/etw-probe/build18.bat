@echo off
call "C:\Program Files\Microsoft Visual Studio\2022\Professional\VC\Auxiliary\Build\vcvars64.bat" >nul
cd /d "E:\Git\TMOG-Public-WorkTree\issue-7-process-network-contract\research\issue7\etw-probe"
cl /nologo /utf-8 /W4 /EHsc /O2 op18-check.cpp /Fe:op18-check.exe ws2_32.lib tdh.lib advapi32.lib
