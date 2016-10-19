#pragma once
#include "Header.h"

class Task
{
	std::string descript;
	std::string dueDate;
public:
	Task();
	~Task();
	Task(std::string descript, std::string dueDate);
	TCHAR *Display();
};

