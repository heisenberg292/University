#include "user.h"

void user::setEmailAndPass(string em, string ps)
{
	password = ps;
	email = em;
	ofstream file("accounts.txt", ios::app);
	file << email <<" "<< password << endl;
	file.close();
}

void user::getAccount()
{
	cout <<"Email : "<<email<<"\nPassword : "<<password<<endl;
}

void user::check()
{
	again:
	string inputEmail,inputPassword,fileEmail,filePassword;
	bool found = false;
	cout <<"Enter your Email : ";cin>>inputEmail;
	cout <<"Enter Your password : ";cin>>inputPassword;
	ifstream file ("accounts.txt");
	while (file >> fileEmail >> filePassword) {
		if (inputEmail == fileEmail && inputPassword == filePassword)
		{
			found = true;
			break;
		}
	}
	if (found) {
		cout <<"Login successful :)"<<endl;
	}
	else {
		cout <<"Wrong Email or password, please try again :("<<endl;
		goto again;
	}
	file.close();
}
