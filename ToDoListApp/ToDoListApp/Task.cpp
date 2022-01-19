#include "Task.h"
using std::string;

Task::Task(int id, string title, string description) :Id(id), Title(title), Description(description), Done(false)
{	
}

bool Task::Complete() 
{
	if (Done) return false;

	Done = true;
	return true;
}

string Task::Display() const
{
	string result = Title;
	if (Done)
	{
		result += " Done";
	}
	else
	{
		result += " Not done";
	}

	return result;
}

int Task::GetId() const
{
	return Id;
}