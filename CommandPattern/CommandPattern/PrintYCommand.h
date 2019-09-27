#pragma once
#include "Command.h"
class PrintYCommand :
	public Command
{
public:
	virtual void execute() { std::cout << "Y"; }
};

