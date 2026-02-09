#include "management.h"

void management::addStudent()
{ 
	student s;
	string name;
	int code;
	string address;
	string phone;
	bool sex;
	int day,month,year;
	string email;
	string password;
	int level;
	string faculty;
	cout <<"Enter the name of the student: ";cin>>name;
	s.setName(name);
	cout <<"Enter the code of the student: ";cin>>code;
	s.setCode(code);
	cout <<"Enter the address: ";cin>>address;
	s.setAddress(address);
	cout <<"Enter the phone: ";cin>>phone;
	s.setPhone(phone);
	cout <<"Enter the gender: ";cin>>sex;
	s.setGender(sex);
	cout <<"Enter the day of birthdate: ";cin>>day;
	cout <<"Enter the month of birthdate: ";cin>>month;
	cout <<"Enter the year of birthdate: ";cin>>year;
	s.setBirthdate(day,month,year);
	cout <<"Enter the level: ";cin>>level;
	s.setLevel(level);
	cout <<"Enter the faculty that student study in: ";cin>>faculty;
	s.setFaculty(faculty);
	cout <<"Create an Email: ";cin>>email;
	cout <<"Create passoword: ";cin>>password;
	s.setEmailAndPass(email,password);
	ofstream file("Student.txt",ios::app );
	file << name <<" || " << code << " || "<< address << " || "<< phone << " || "<< sex << " || "<< day<<"/"<<month<<"/"<<year << " || "<< level << " || "<< faculty<<"\n"<<email<<"  "<<password<<"\n";
	file.close();
};

