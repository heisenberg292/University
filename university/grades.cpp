#include "grades.h"

void grades::setGrade()
{
string name;
int ch;
string g;
string sn;
int cd;
	cout <<"Enter the code of the student :";cin>>cd;
	cout <<"Enter the name of the student :";cin>>sn;
	cout<<"Enter the course name :";cin>>name;
	cout<<"Enter the credit hours of the coures :";cin>>ch;
	cout<<"Enter the grade of the coures :";cin>>g;
	ofstream file ("Grades.txt",ios::app);
	file << sn <<" "<<cd<<" "<<name<<" credit hour:"<<ch<<" the grade is:"<<g<<endl;
	file.close();

}

void grades::calcGPA()
{
	float x = 0;
	float temp = 0;
	float sum = 0;
	int credit;
	string y;
	int num;
	cout <<"Enter the number of courses :";cin>>num;
	for (int i = 0; i < num;i++)
	{
	again:
	cout <<"Enter the course credit hours :";cin >>credit;
	cout <<"Enter your grade :";cin>>y;
	if (y == "ap"){x=4;}
	else if (y == "a"){x=3.7;}
	else if (y == "an"){x=3,4;}
	else if (y == "bp"){x=3.2;}
	else if (y == "b"){x=3;}
	else if (y == "bn"){x=2.8;}
	else if (y == "cp"){x=2.6;}
	else if (y == "c"){x=2.4;}
	else if (y == "cn"){x=2.2;}
	else if (y == "dp"){x=2;}
	else if (y == "d"){x=1.5;}
	else if (y == "dn"){x=1;}
	else if (y == "f"){x=0;}
	else {cout <<"wront anser :("; goto again;}
	sum = sum + credit;
	temp = temp + (credit*x);

	}
	cout <<"your GPA is :"<<temp/sum;
}
