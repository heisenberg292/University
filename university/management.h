#pragma once
#include "student.h"
#include "employee.h"


class management
{
private :
	student st;
	employee em;
public:
	static void addStudent();
	static void addEmployee();
	static void adding();
	void read();
	management();

};


