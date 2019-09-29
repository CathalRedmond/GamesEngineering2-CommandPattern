#pragma once
#include "Command.h"
#include "MacroCommand.h"
//#include <stack>
#include "Structs.h"
#include <vector>
#include <Windows.h>
#include <WinUser.h>

class InputHandler
{
public :
	void handleInput();
private:
	Command* QCommand = new PrintQCommand();
	Command* WCommand = new PrintWCommand();
	Command* ECommand = new PrintECommand();
	Command* RCommand = new PrintRCommand();
	Command* TCommand = new PrintTCommand();
	Command* YCommand = new PrintYCommand();
	Command* Redo = new RedoCommand();
	Command* Undo = new	UndoCommand();
	MacroCommand commands;

	bool keyPressed[8] = { false,false,false,false,false,false,false,false };
};

