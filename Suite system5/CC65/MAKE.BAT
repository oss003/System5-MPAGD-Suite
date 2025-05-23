@echo off

rem Set flags

 set af=0
 if "%2"=="a" set af=1
 if "%3"=="a" set af=1
 if "%4"=="a" set af=1
 if "%5"=="a" set af=1
 if "%6"=="a" set af=1

 set bf=0
 if "%2"=="b" set bf=1
 if "%3"=="b" set bf=1
 if "%4"=="b" set bf=1
 if "%5"=="b" set bf=1
 if "%6"=="b" set bf=1

 set ff=0
 if "%2"=="f" set ff=1
 if "%3"=="f" set ff=1
 if "%4"=="f" set ff=1
 if "%5"=="f" set ff=1
 if "%6"=="f" set ff=1

 set gf=0
 if "%2"=="g" set gf=1
 if "%3"=="g" set gf=1
 if "%4"=="g" set gf=1
 if "%5"=="g" set gf=1
 if "%6"=="g" set gf=1

 set hf=0
 if "%2"=="h" set hf=1
 if "%3"=="h" set hf=1
 if "%4"=="h" set hf=1
 if "%5"=="h" set hf=1
 if "%6"=="h" set hf=1

 set if=0
 if "%2"=="i" set if=1
 if "%3"=="i" set if=1
 if "%4"=="i" set if=1
 if "%5"=="i" set if=1
 if "%6"=="i" set if=1

 set rf=0
 if "%2"=="r" set rf=1
 if "%3"=="r" set rf=1
 if "%4"=="r" set rf=1
 if "%5"=="r" set rf=1
 if "%6"=="r" set rf=1

 set xf=0
 if "%2"=="x" set xf=1
 if "%3"=="x" set xf=1
 if "%4"=="x" set xf=1
 if "%5"=="x" set xf=1
 if "%6"=="x" set xf=1

rem Build asm file
 echo Building: %1
 echo .include "%1.inc" >game.inc

rem Conditional assemble game
 echo.
 echo Assemble: game.asm
 ca65 -l game.lst -o %1.o game.asm -D iflag=%if% -D aflag=%af% -D hflag=%hf% -D gflag=%gf% -D bflag=%bf% -D fflag=%ff% -D xflag=%xf% 
 if not "%errorlevel%" == "0" goto failed

rem Linking
 echo.
 echo Linking: %1
 ld65  %1.o -C system5.cfg -o %1.atm 
 if not "%errorlevel%" == "0" goto failed

rem copy %1.atm "C:\Emulator\Atomulator Phill\mmc"
 echo.
 echo Copying: %1
 echo Finished, created %1.atm
 echo.
 goto end

:failed
echo.
echo Error %errorlevel%
 echo.
 echo Usage: build [agd file] [condition0] [condition1] [condition2]
 echo.
 echo Conditional assembly:
 echo a = Adventuremode
 echo b = Big Sprites (16x24)
 echo f = Floppy version (skip #0axx)
 echo g = Graphic colour mode
 echo h = Hidden sprite mode
 echo i = Invertmode
 echo.


:end
del *.o


