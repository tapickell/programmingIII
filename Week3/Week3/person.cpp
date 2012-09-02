#include "StdAfx.h"
#include "person.h"


person::person(){}

person::person(string first, string last)
{
	person(first, last, "none");
}

person::person(string first, string last, string job)
{
	_firstName = first;
	_lastName = last;
	_profession = job;
}

person::~person(void){}

void person::setFirstName(string firstName)
{
	_firstName = firstName;
}
void person::setLastName(string lastName)
{
	_lastName = lastName;
}
void person::setProfession(string job)
{
	_profession = job;
}
string person::getFirstName()
{
	return _firstName;
}
string person::getLastName()
{
	return _lastName;
}

string person::getProfession()
{

	return _profession;
}

void person::toString()
{
	cout << "Name: " << getFirstName() << " " << getLastName() << endl << "Profession: " << getProfession() << endl;
}