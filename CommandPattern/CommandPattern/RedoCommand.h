#pragma once
#include "Command.h"
class RedoCommand :
	public Command
{
public:
	virtual void execute();
	virtual void addUndoneCommand(Command*);
private:
	std::stack<Command*>
};

