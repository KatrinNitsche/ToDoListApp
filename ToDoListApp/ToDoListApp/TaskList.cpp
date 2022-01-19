#include "TaskList.h"
using std::string;

void TaskList::AddTask(Task newTask)
{
	Tasks.push_back(newTask);
}

bool TaskList::RemoveTask(int id)
{
	for (size_t i = 0; i < Tasks.size(); i++)
	{
		if (Tasks[i].GetId() == id) 
		{
			Tasks.erase(Tasks.begin() + i);
			return true;
		}
	}

	return false;
}

string TaskList::DisplayTaskList() const
{
	string result = "";

	result += "Task List\n";
	result += "=========\n\n";
	for (auto item : Tasks)
	{
		result += item.Display() + '\n';
	}
	result += "\n\n";

	return result;
}