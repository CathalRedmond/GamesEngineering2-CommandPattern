#pragma once
#include "Command.h"
class PrintQCommand :
	public Command
{
public:
	virtual void execute() { std::cout << "Q"; }
};

