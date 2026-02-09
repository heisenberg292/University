#include <iostream>
#include <fstream>
using namespace std;

class user
{
private:
	string email;
	string password;
public:
	void setEmailAndPass(string em, string ps);
	void getAccount();
};

