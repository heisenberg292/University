#pragma once
#include "person.h"
#include "user.h"

class employee : public person , public user
{
private:
	string specializstion;
	int yearOfGraduation;
	double salary;
	float workHours;
public:
	void setSpecialization(string sp);
	void setyearOfGraduation(int yog);
	void setSalary(double sa);
	void setWorkHours(float wh);
	employee();
	void getemployee();
};
