@echo off

rem MAKEDSK <game name> <gamecode>

cd Atomulator\mmc\%1
..\..\..\tools\makedsk %1 %2
cd ..\..\..

