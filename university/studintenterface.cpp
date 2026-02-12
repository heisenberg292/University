#include "studintenterface.h"
#include <string>

void studintenterface::directionPage()
{
	string x;
	again:
	cout <<"welcom back budy :)"<<endl;
	cout <<"Please select the operations that you wanna do :-"<<endl;
	cout <<"[1] Student personal informations "<<endl;
	cout <<"[2] The table "<<endl;
	cout <<"[3] Courses registers "<<endl;
	cout <<"[4] Courses grades "<<endl;
	cout <<"=================================="<<endl;
	cout <<"Signout\t  Exit"<<endl;
	cin>>x;
	if (x == "1" || x == "Student personal informations" || x == "student personal informations")
	{
		studintenterface::informationPage();
	}
	else if (x == "2" || x == "the table" || x == "table" || x == "Table" || x == "The table")
	{

	}
	else if (x == "3" || x == "Courses registers" || x == "courses registers")
	{

	}
	else if (x == "4" || x == "Courses grades" || x == "courses grades" || x == "grades" || x == "Grades" || x == "grade" || x == "Grade")
	{

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
	ifstream myfile("Student.txt");
	string line;
	if (myfile.is_open())
	{
		while (getline(myfile, line)) {
			cout << line << endl;
		}
		myfile.close();
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
