#pragma once
#include "Command.h"
#include "PrintQCommand.h"
#include "PrintWCommand.h"
#include "PrintECommand.h"
#include "PrintRCommand.h"
#include "PrintTCommand.h"
#include "PrintYCommand.h"
#include <stack>
#include "VKeyValue.h"
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
	
	std::stack<Command*> commandsExecuted;
	std::stack<Command*> commandsUndone;

	bool keyPressed[8] = { false,false,false,false,false,false,false,false };
	

};

