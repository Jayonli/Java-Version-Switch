@echo off
set switch=%1%
rem echo %switch%

if %switch% == 8 (
	echo [*]Switch to Java8.
	setx JAVA_HOME "%%JAVA8_HOME%%" /m
) else (
if %switch% == 7 (
	echo [*]Switch to Java7.
	setx JAVA_HOME "%%JAVA7_HOME%%" /m
) else (
if %switch% == 11 (
	echo [*]Switch to Java11.
	setx JAVA_HOME "%%JAVA11_HOME%%" /m
) else (
if %switch% == 6 (
	echo [*]Switch to Java6.
	setx JAVA_HOME "%%JAVA6_HOME%%" /m
))))

rem pause