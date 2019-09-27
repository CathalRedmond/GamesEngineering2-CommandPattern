#pragma once
#include<iostream>
#include<stack>
class Command
{
public:
	virtual ~Command() {}
	virtual void execute() = 0;
	virtual void undo() { std::cout << "\b \b"; }
protected:
	Command() {}
};

