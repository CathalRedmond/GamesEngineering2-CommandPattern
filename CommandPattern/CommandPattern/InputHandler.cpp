#include "InputHandler.h"

void InputHandler::handleInput()
{
	if (GetAsyncKeyState(VKeyValue::Q) && !keyPressed[(int)CommandId::Q])
	{
		QCommand->execute();
		commandsExecuted.push(QCommand);
		while (!commandsUndone.empty())
			commandsUndone.pop();
		keyPressed[0] = true;
	}
	else if (!GetAsyncKeyState(VKeyValue::Q) && keyPressed[0])
	{
		keyPressed[0] = false;
	}

	if (GetAsyncKeyState(VKeyValue::W) && !keyPressed[1])
	{
		WCommand->execute();
		commandsExecuted.push(WCommand);
		while (!commandsUndone.empty())
			commandsUndone.pop();
		keyPressed[1] = true;
	}
	else if (!GetAsyncKeyState(VKeyValue::W) && keyPressed[1])
	{
		keyPressed[1] = false;
	}

	if (GetAsyncKeyState(VKeyValue::E) && !keyPressed[2])
	{
		ECommand->execute();
		commandsExecuted.push(ECommand);
		while (!commandsUndone.empty())
			commandsUndone.pop();
		keyPressed[2] = true;
	}
	else if (!GetAsyncKeyState(VKeyValue::E) && keyPressed[2])
	{
		keyPressed[2] = false;
	}

	if (GetAsyncKeyState(VKeyValue::R) && !keyPressed[3])
	{
		RCommand->execute();
		commandsExecuted.push(RCommand);
		while (!commandsUndone.empty())
			commandsUndone.pop();
		keyPressed[3] = true;
	}
	else if (!GetAsyncKeyState(VKeyValue::R) && keyPressed[3])
	{
		keyPressed[3] = false;
	}

	if (GetAsyncKeyState(VKeyValue::T) && !keyPressed[4])
	{
		TCommand->execute();
		commandsExecuted.push(TCommand);
		while (!commandsUndone.empty())
			commandsUndone.pop();
		keyPressed[4] = true;
	}
	else if (!GetAsyncKeyState(VKeyValue::T) && keyPressed[4])
	{
		keyPressed[4] = false;
	}

	if (GetAsyncKeyState(VKeyValue::Y) && !keyPressed[5])
	{
		YCommand->execute();
		commandsExecuted.push(YCommand);
		while (!commandsUndone.empty())
			commandsUndone.pop();
		keyPressed[5] = true;

	}
	else if (!GetAsyncKeyState(VKeyValue::Y) && keyPressed[5])
	{
		keyPressed[5] = false;
	}

	if (GetAsyncKeyState(VKeyValue::BACKSPACE) && !keyPressed[6])
	{
		if (!commandsExecuted.empty())
		{
			commandsExecuted.top()->undo();
			commandsUndone.push(commandsExecuted.top());
			commandsExecuted.pop();
			keyPressed[6] = true;
		}
	}
	else if (!GetAsyncKeyState(VKeyValue::BACKSPACE) && keyPressed[6])
	{
		keyPressed[6] = false;
	}

	if (GetAsyncKeyState(VKeyValue::TAB) && !keyPressed[7])
	{
		if (!commandsUndone.empty())
		{
			commandsUndone.top()->execute();
			commandsExecuted.push(commandsUndone.top());
			commandsUndone.pop();
			keyPressed[7] = true;
		}
	}
	else if (!GetAsyncKeyState(VKeyValue::TAB) && keyPressed[7])
	{
		keyPressed[7] = false;
	}
}

