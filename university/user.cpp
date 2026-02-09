#include "user.h"

void user::setEmailAndPass(string em, string ps)
{
	password = ps;
	email = em;
	ofstream file("accounts.txt", ios::app);
	file << "email : " << email << "\nPassword : " << password <<"\n" << endl;
	file.close();
}

void user::getAccount()
{
	cout <<"Email : "<<email<<"\nPassword : "<<password<<endl;
}
