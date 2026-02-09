#include "student.h"

void student::setLevel(int le)
{
	level = le;
}

void student::setGPA(float gp)
{
	GPA = gp;
}

void student::setFaculty(string fa)
{
	faculty = fa;
}

void student::setCreditsDone(int crd)
{
	creditsDone = crd;
}

void student::getstudent()
{
	person::getPerson();
	cout << "Level : "<<level<<"\nGPA : "<<GPA<<"\nFaculty of : "<<faculty<<"\nCredit hours done : "<<creditsDone<<endl;
}

student::student()
{
	person::person();
	level = 00;
	GPA = 0.0;
	faculty = "UNKNOWN";
	creditsDone = 00;
}
