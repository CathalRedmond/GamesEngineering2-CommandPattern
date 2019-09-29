#pragma once
#include<iostream>
#include<stack>
class Command
{
public:
	virtual ~Command() {}
	virtual void execute() = 0;
protected:
	Command() {}
};

