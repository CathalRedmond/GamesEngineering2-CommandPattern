#pragma once
#include "Command.h"
class PrintTCommand :
	public Command
{
public:
	virtual void execute() { std::cout << "T"; }
};

