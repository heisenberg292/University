#include "courses.h"



void courses::setCourse(string n, int c, int ch, int l)
{
	name = n;
	code = c;
	creditHour = ch;
	level = l;
ofstream file ("Coursesn.txt",ios::app);
file <<name<<endl;
}
