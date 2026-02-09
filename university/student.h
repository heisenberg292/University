#pragma once
#include "person.h"
#include "user.h"
class student :public person ,public user
{
private:
	int level;
	float GPA;
	string faculty;
	int creditsDone;
public:
	void setLevel(int le);
	void setGPA(float gp);
	void setFaculty (string fa);
	void setCreditsDone (int crd);
	void getstudent();
	student();
	
};

