#include "studintenterface.h"
#include <string>
#include "grades.h"


void studintenterface::directionPage()
{
	string x;
	again:
	cout <<"welcom back budy :)"<<endl;
	cout <<"Please select the operations that you wanna do :-"<<endl;
	cout <<"[1] Student personal informations "<<endl;
	cout <<"[2] The table "<<endl;
	cout <<"[3] Courses grades "<<endl;
	cout <<"[4] calculate your GPA "<<endl;
	cout <<"=================================="<<endl;
	cout <<"Signout\t  Exit"<<endl;
	cin>>x;
	if (x == "1" || x == "Student personal informations" || x == "student personal informations")
	{
		studintenterface::informationPage();
	}
	else if (x == "2" || x == "the table" || x == "table" || x == "Table" || x == "The table")
	{
		studintenterface::tablePage();
	}
	else if (x == "3" || x == "Courses grades" || x == "courses grades" || x == "grades" || x == "Grades" || x == "grade" || x == "Grade")
	{
		studintenterface::gradePage();
	}
	else if (x == "4" || x == "GPA" || x == "gpa")
	{
		grades::calcGPA();
	}
	else if (x == "Signout" || x == "signout" || x == "s" || x == "S")
	{
		home h;
	}
	else if (x == "Exit" || x == "exit" || x == "e" || x == "E")
	{
		return  ;
	}
	else {
		cout <<"your input was wrong, please try again :("<<endl;
		goto again;
	}
}

void studintenterface::informationPage()
{
	string line;
	bool found = false;
	int code;
	a:
	cout <<"Enter your code :";cin>>code;
	ifstream file ("Student.txt");
	while (getline(file, line)) {
		if (line.find(code)) {
			cout <<line<<endl;
			found = true;
			break;
		}
		if (!found)
		{
			cout <<"The code is wrong, please try again"<<endl;
			goto a;
		}
		file.close();		
	}
	string x;
	again:
	cout <<"\n\n\n=========\nBack       Exit"<<endl;
	cin>>x;
	if (x == "back" || x == "Back" || x == "b" || x == "B")
	{
		studintenterface::directionPage();
	}
	else if (x == "Exit" || x == "exit" || x == "e" || x == "E")
	{
		return ;
	}
	else {
		goto again;
	}
}

void studintenterface::tablePage()
{
	string line;
	float t;
	bool found = false;
	a:
	cout <<"Enter the level number and semester like this (1.1)";cin>>t;
	ifstream file ("courses.txt");
	while (getline(file, line)) {
		if (line.find(t)) {
			cout <<line<<endl;
			break;
		}
		if (!found)
		{
			cout << "The code is wrong, please try again :" << endl;
			goto a;
		}
		file.close();
	}
	string x;
	again:
	cout << "\n\n\n=========\nBack       Exit" << endl;
	cin >> x;
	if (x == "back" || x == "Back" || x == "b" || x == "B")
	{
		studintenterface::directionPage();
	}
	else if (x == "Exit" || x == "exit" || x == "e" || x == "E")
	{
		return;
	}
	else {
		goto again;
	}
}

void studintenterface::gradePage()
{
	string line;
	float code;
	bool found = false;
a:
	cout << "Enter the code of the student :";cin >> code;
	ifstream file("Grades.txt");
	while (getline(file, line)) {
		if (line.find(code)) {
			cout << line << endl;
			break;
		}
		if (!found)
		{
			cout << "The code is wrong, please try again :" << endl;
			goto a;
		}
		file.close();
	}
	string x;
again:
	cout << "\n\n\n=========\nBack       Exit" << endl;
	cin >> x;
	if (x == "back" || x == "Back" || x == "b" || x == "B")
	{
		studintenterface::directionPage();
	}
	else if (x == "Exit" || x == "exit" || x == "e" || x == "E")
	{
		return;
	}
	else {
		goto again;
	}
}
