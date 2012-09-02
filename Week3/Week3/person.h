#pragma once

#include <string>

using namespace std;

class person
{
public:
	person();
	person(string first, string last);
	person(string first, string last, string job);
	~person(void);

	void setFirstName(string);
	void setLastName(string);
	void setProfession(string);
	string getFirstName();
	string getLastName();
	string getProfession();
	void toString();

private:
	string _firstName;
	string _lastName;
	string _profession;
};

