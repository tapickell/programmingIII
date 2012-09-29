// namesInSpace.cpp : main project file.

#include "stdafx.h"
#include <iostream>

using namespace System;
using namespace std;

namespace me
{
	int x = 1;
	namespace toddpickell
	{
		int x = 2;
		namespace app
		{
			int x = 3;
		}
	}
}

namespace dotinfo
{
	int x = 4;
	namespace myappleguy
	{
		int x = 5;
		namespace www
		{
			int x = 6;
		}
	}
}

int main(array<System::String ^> ^args)
{
	{
		using namespace me;
		cout << x << endl;
	}
	{
		using namespace me::toddpickell;
		cout << x << endl;
	}
	{
		using namespace me::toddpickell::app;
		cout << x << endl;
	}
	{
		using namespace dotinfo;
		cout << x << endl;
	}
	{
		using namespace dotinfo::myappleguy;
		cout << x << endl;
	}
	{
		using namespace dotinfo::myappleguy::www;
		cout << x << endl;
	}

	system("pause");
    return 0;
}
