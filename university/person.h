#include <iostream>
using namespace std;

class person
{
private:

	string name;
	int code;
	string address;
	bool gender;
	string phone;
	int year;
	int month;
	int day;
public:
	void setName(string na);
	void setCode(int cd);
	void setAddress(string ad);
	void getPerson();
	void setGender(bool gn);
	void setPhone(string ph);
	int setBirthdate(int dd,int mm, int yy);
	person();
};

