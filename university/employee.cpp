#include "employee.h"

void employee::setSpecialization(string sp)
{
	specializstion = sp;
}

void employee::setyearOfGraduation(int yog)
{
	yearOfGraduation = yog;
}

void employee::setSalary(double sa)
{
	salary = sa;
}

void employee::setWorkHours(float wh)
{
	workHours = wh;
}

employee::employee()
{
	person::person();
	specializstion = "UNKNOWN";
	yearOfGraduation = 0000;
	salary = 00.0;
	workHours = 00;
}

void employee::getemployee()
{
	person::getPerson();
	cout <<"Specialization : "<<specializstion<<"\nYear of Graduation : "<<yearOfGraduation<<"\nSalary : "<<salary<<"\nWork hours : "<<workHours<<endl;
}
