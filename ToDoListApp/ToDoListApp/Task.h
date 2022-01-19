#pragma once
#include <string>

class Task
{
private:
	int Id;
	std::string Title;
	std::string Description;
	bool Done;	

public:
	Task(int id, std::string title, std::string description);
	std::string Display() const;
	bool Complete();
	int GetId() const;
};