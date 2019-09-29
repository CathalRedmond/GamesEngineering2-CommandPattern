#pragma once
#include "Command.h"
class UndoCommand :
	public Command
{
public:
	virtual void execute() { std::cout << "\b \b"; }
};

