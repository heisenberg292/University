#include "management.h"
#include <string>
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
	file << name <<" || " << code << " || "<< address << " || "<< phone << " || "<< sex << " || "<< day<<"/"<<month<<"/"<<year << " || "<< level << " || "<< faculty<<"  |"<<email<<"  "<<password<<"\n";
	file.close();
}
void management::addEmployee()
{
	student s;
	string name;
	int code;
	string address;
	string phone;
	bool sex;
	int day, month, year;
	string email;
	string password;
	string specializstion;
	int yearOfGraduation;
	cout << "Enter the name of the employee: ";cin >> name;
	s.setName(name);
	cout << "Enter the code of the employee: ";cin >> code;
	s.setCode(code);
	cout << "Enter the address: ";cin >> address;
	s.setAddress(address);
	cout << "Enter the phone: ";cin >> phone;
	s.setPhone(phone);
	cout << "Enter the gender: ";cin >> sex;
	s.setGender(sex);
	cout << "Enter the day of birthdate: ";cin >> day;
	cout << "Enter the month of birthdate: ";cin >> month;
	cout << "Enter the year of birthdate: ";cin >> year;
	s.setBirthdate(day, month, year);
	cout <<"Enter your specializstion: ";cin>> specializstion;
	cout <<"Enter the year of graduation: ";cin>> yearOfGraduation;
	cout << "Create an Email: ";cin >> email;
	cout << "Create passoword: ";cin >> password;
	s.setEmailAndPass(email, password);
	ofstream file("Employee.txt", ios::app);
	file << name << " || " << code << " || " << address << " || " << phone << " || " << sex << " || " << day << "/" << month << "/" << year << " || " << specializstion << " || " << yearOfGraduation << "  |" << email << "  " << password << "\n";
	file.close();
}
void management::adding()
{
	again:
	string x;
	cout <<"what you want add (Student/Employee) : ";
	cin>>x;
	if (x == "student" || x == "s" || x == "S" || x == "st" || x == "Student")
	{
		management::addStudent();
	}
	else if (x == "employee" || x == "e" || x == "E" || x == "Em" || x == "Employee")
	{
		management::addEmployee();
	}
	else {
		cout <<"Your input is wrong, please try again: "<<endl;
		goto again;
	}
}
 void management::read()
{
	again:
	string x;
	cout << "what you want read (Student/Employee) : ";
	cin >> x;
	if (x == "student" || x == "s" || x == "S" || x == "st" || x == "Student")
	{
		ifstream myfile("Student.txt");
		string line;
		if (myfile.is_open())
		{
			while (getline(myfile, line)) {
				cout << line <<endl;
			}
				myfile.close();
				}
		else {
			cout <<"the file didnt open ,please try again"<<endl;
			goto again;
		}
		
	}
	else if (x == "employee" || x == "e" || x == "E" || x == "Em" || x == "Employee")
	{
		ifstream myfile("Employee.txt");
		string line;
		if (myfile.is_open())
		{
			while (getline(myfile, line)) {
				cout << line << endl;
			}
				myfile.close();
		}
		else {
			cout << "the file didnt open ,please try again" << endl;
			goto again;
		}
	}
	else {
		cout <<"your input is wrong, please try again"<<endl;
		goto again;
	}
}
management::management()
{
	again:
	cout <<"Choose the operation :-"<<endl;
	cout <<"[1] Adding\n[2] Read"<<endl;
	string x;
	cin>>x;
	if (x == "1" || x == "Adding" || x == "adding" || x == "add" || x == "a" || x == "A")
	{
		management::adding();
	}
	else if (x == "2" || x == "read" || x == "Read" || x == "r" || x == "R")
	{
		management::read();
	}
	else {
		cout <<"Please try again"<<endl;
		goto again;
	}
}
;

