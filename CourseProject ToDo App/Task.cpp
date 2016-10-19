#include "Task.h"



Task::Task()
{
	descript = "";
	dueDate = "";
}


Task::~Task()
{
}

Task::Task(std::string descript, std::string dueDate)
{
	this->descript = descript;
	this->dueDate = dueDate;
}

TCHAR *Task::Display()
{
	setlocale(LC_ALL, "Russian");
	TCHAR buff[1024];
	swprintf_s(buff, L"%S - %S",
		descript, dueDate);
	return buff;
}