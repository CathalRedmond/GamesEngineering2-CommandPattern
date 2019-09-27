#pragma once
#include "Command.h"
class PrintECommand:
	public Command
{
public:
	virtual void execute() { std::cout << "E"; }
};

