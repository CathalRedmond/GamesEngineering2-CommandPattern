#include "InputHandler.h"

void InputHandler::handleInput()
{
	if (GetAsyncKeyState(VKeyValue::Q) && !keyPressed[CommandId::Q])
	{
		commands.addAndExecute(QCommand);
		keyPressed[CommandId::Q] = true;
	}
	else if (!GetAsyncKeyState(VKeyValue::Q) && keyPressed[CommandId::Q])
	{
		keyPressed[CommandId::Q] = false;
	}

	if (GetAsyncKeyState(VKeyValue::W) && !keyPressed[CommandId::W])
	{
		commands.addAndExecute(WCommand);
		keyPressed[CommandId::W] = true;
	}
	else if (!GetAsyncKeyState(VKeyValue::W) && keyPressed[CommandId::W])
	{
		keyPressed[CommandId::W] = false;
	}

	if (GetAsyncKeyState(VKeyValue::E) && !keyPressed[CommandId::E])
	{
		commands.addAndExecute(ECommand);
		keyPressed[CommandId::E] = true;
	}
	else if (!GetAsyncKeyState(VKeyValue::E) && keyPressed[CommandId::E])
	{
		keyPressed[CommandId::E] = false;
	}

	if (GetAsyncKeyState(VKeyValue::R) && !keyPressed[CommandId::R])
	{
		commands.addAndExecute(RCommand);
		keyPressed[CommandId::R] = true;
	}
	else if (!GetAsyncKeyState(VKeyValue::R) && keyPressed[CommandId::R])
	{
		keyPressed[CommandId::R] = false;
	}

	if (GetAsyncKeyState(VKeyValue::T) && !keyPressed[CommandId::T])
	{
		commands.addAndExecute(TCommand);
		keyPressed[CommandId::T] = true;
	}
	else if (!GetAsyncKeyState(VKeyValue::T) && keyPressed[CommandId::T])
	{
		keyPressed[CommandId::T] = false;
	}

	if (GetAsyncKeyState(VKeyValue::Y) && !keyPressed[CommandId::Y])
	{
		commands.addAndExecute(YCommand);
		keyPressed[CommandId::Y] = true;
	}
	else if (!GetAsyncKeyState(VKeyValue::Y) && keyPressed[CommandId::Y])
	{
		keyPressed[CommandId::Y] = false;
	}

	if (GetAsyncKeyState(VKeyValue::BACKSPACE) && !keyPressed[CommandId::BACKSPACE])
	{
		commands.addAndExecute(Undo);
		keyPressed[CommandId::BACKSPACE] = true;
	}
	else if (!GetAsyncKeyState(VKeyValue::BACKSPACE) && keyPressed[CommandId::BACKSPACE])
	{
		keyPressed[CommandId::BACKSPACE] = false;
	}

	if (GetAsyncKeyState(VKeyValue::TAB) && !keyPressed[CommandId::TAB])
	{
		commands.addAndExecute(Redo);
		keyPressed[CommandId::TAB] = true;
	}
	else if (!GetAsyncKeyState(VKeyValue::TAB) && keyPressed[CommandId::TAB])
	{
		keyPressed[CommandId::TAB] = false;
	}
}

