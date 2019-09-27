#pragma once
#include "Command.h"
class PrintRCommand :
	public Command
{
public:
	virtual void execute() { std::cout << "R"; }
};

