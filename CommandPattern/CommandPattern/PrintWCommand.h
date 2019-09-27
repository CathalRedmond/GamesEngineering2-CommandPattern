#pragma once
#include "Command.h"
class PrintWCommand :
	public Command
{
public:
	virtual void execute() { std::cout << "W"; }
};

