#include "home.h"

home::home()
{
	
	string x;
	cout <<"Welcome to the Heisenber University\nplease choose your option : "<<endl;
	cout <<"[1] Login"<<endl;
	cout <<"You don't have an account ? .... choose Register\t[2] Register"<<endl;
	cin>>x;
	if (x == "1" || x == "login" || x == "Login" || x == "l" || x == "L")
	{
		user::check();
	}
	else if (x == "Register" || x == "register" || x == "2" || x == "r" || x == "R")
	{
		management::adding();
	}
}
