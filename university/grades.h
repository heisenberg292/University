#pragma once
#include "courses.h"
class grades : public courses
{
private:
	float grade;
	float GPA;
public:
void setGrade();
static void calcGPA();
};

