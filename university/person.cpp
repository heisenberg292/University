#include "person.h"
#include <ctime>
void person::setName(string na)
{
	name = na;
}


void person::setCode(int cd)
{
	code = cd;
}

void person::setAddress(string ad)
{
	address = ad;
}

void person::getPerson()
{
	cout <<"Name : "<<name<<"\nCode : " << code << "\nAddress : " << address << "\nPhone : " << phone << "\nAge : " << setBirthdate(day, month, year) << endl;
}

void person::setGender(bool gn)
{
	gender = gn;
	// 0 --> male
	// 1 --> female
}

void person::setPhone(string ph)
{
	phone = ph;
}

int person::setBirthdate(int dd, int mm, int yy)
{
	day = dd, month = mm, year = yy;
	time_t t = time(0);
	tm now;
	localtime_s(&now,&t);
	int currentDay = now.tm_mday;
	int currentMonth = now.tm_mon + 1;
	int currentYear = now.tm_year + 1900;
	int age = currentYear - yy;
	if (currentMonth <= mm && currentDay < dd)
	{age--; }
	return age;
}


person::person()
{
	name = "UNKNOWN";
	code = 0000;
	address = "UNKNWON";
	gender = 0;
	phone = "UNKNOWN";
	day = 00;
	month = 00;
	year = 0000;
}

