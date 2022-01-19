#pragma once
#include "Task.h"
#include <vector> 


class TaskList
{
private:
	std::vector<Task> Tasks;

public:
	void AddTask(Task newTask);
	bool RemoveTask(int id);
	std::string DisplayTaskList() const;
};