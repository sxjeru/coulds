#NoEnv  ; Recommended for performance and compatibility with future AutoHotkey releases.
; #Warn  ; Enable warnings to assist with detecting common errors.
SendMode Input  ; Recommended for new scripts due to its superior speed and reliability.
SetWorkingDir %A_ScriptDir%  ; Ensures a consistent starting directory.

Shift::
	click, 91, 730
	sleep 800
	click, 522, 529
	sleep 100
	send {Text}2
	send {Enter}
	click, 516, 588
	send {Text}1.12.x
	click, 364, 660
	mousemove, 450, 260
	