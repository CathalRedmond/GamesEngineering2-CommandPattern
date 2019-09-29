#include "MacroCommand.h"

void MacroCommand::add(Command* t_command)
{
	m_commands.push(t_command);
}

void MacroCommand::addAndExecute(Command* t_command)
{
	add(t_command);
	execute();
}

void MacroCommand::remove()
{
	m_commands.pop();
}

void MacroCommand::execute()
{
	if (typeid(*m_commands.top()) == typeid(UndoCommand))
	{
		if (m_commands.size() > 1)
		{
			m_commands.top()->execute();
			m_commands.pop();
			m_redoCommandStack.push(m_commands.top());
			m_commands.pop();
		}
		else
		{
			m_commands.pop();
		}
	}
	else if (typeid(*m_commands.top()) == typeid(RedoCommand))
	{
		if (!m_redoCommandStack.empty())
		{
			m_commands.pop();
			m_redoCommandStack.top()->execute();
			m_commands.push(m_redoCommandStack.top());
			m_redoCommandStack.pop();
		}
		else
		{
			m_commands.pop();
		}
	}
	else
	{
		m_commands.top()->execute();
		while (!m_redoCommandStack.empty())
		{
			m_redoCommandStack.pop();
		}
	}
}
