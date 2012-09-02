#include "StdAfx.h"
#include "programmer.h"


programmer::programmer(void){}

programmer::programmer(string first, string last, string prefOS, string prefLang)
{
	__super::setFirstName(first);
	__super::setLastName(last);
	__super::setProfession("Programmer");
	_prefOS = prefOS;
	_prefLang = prefLang;
}

programmer::~programmer(void){}

void programmer::setPrefOS(string pref)
{
	_prefOS = pref;
}

void programmer::setPrefLang(string pref)
{
	_prefLang = pref;
}

string programmer::getPrefOS()
{
	return _prefOS;
}

string programmer::getPrefLang()
{
	return _prefLang;
}

void programmer::toString()
{
	__super::toString();
	cout << "Operating System: " << getPrefOS() << endl << "Programming Language: " << getPrefLang() << endl;
}