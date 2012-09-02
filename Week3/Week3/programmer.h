#pragma once

#include "person.h"

using namespace std;

class programmer :
	public person
{
public:
	programmer(void);
	programmer(string first, string last, string prefOS, string prefLang);
	~programmer(void);

	void setPrefOS(string);
	void setPrefLang(string);
	string getPrefOS();
	string getPrefLang();
	void toString();

private:
	string _prefOS;
	string _prefLang;
};

