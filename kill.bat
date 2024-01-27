del *.bak /s
del *.ddk /s
del *.edk /s
del *.lst /s
del *.lnp /s
del *.mpf /s
del *.mpj /s
del *.obj /s
del *.omf /s
::del *.opt /s  ::不允许删除JLINK的设置
del *.plg /s
del *.rpt /s
del *.tmp /s
del *.__i /s
del *.crf /s
del *.o /s
del *.d /s
del *.axf /s
del *.tra /s
del *.dep /s           
del JLinkLog.txt /s
 
del *.iex /s
del *.htm /s
del *.sct /s
del *.map /s

del *.Ziniu /s
del *.niu /s

@echo off
for /r %%i in (.vscode) do (
    if /I "%%~nxi"==".vscode" (
        echo Deleting: %%i
        rd /s /q "%%i"
    )
)

@echo off
for /r %%i in (*.*) do (
    echo %%~nxi | findstr /C:".Penghui Gui" 1>nul
    if not errorlevel 1 (
        echo Deleting: %%i
        del /F /Q "%%i"
    )
)


exit