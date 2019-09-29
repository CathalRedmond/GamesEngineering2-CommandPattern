#pragma once
#include "Command.h"
#include "PrintQCommand.h"
#include "PrintWCommand.h"
#include "PrintECommand.h"
#include "PrintRCommand.h"
#include "PrintTCommand.h"
#include "PrintYCommand.h"
#include "RedoCommand.h"
#include "UndoCommand.h"
#include <stack>
class MacroCommand :
	public Command
{
public:
	MacroCommand() {};
	virtual ~MacroCommand() {};
	virtual void add(Command* t_command);
	virtual void addAndExecute(Command* t_command);
	virtual void remove();
	virtual void execute();
private:
	std::stack<Command*> m_commands;
	std::stack<Command*> m_redoCommandStack;
};

