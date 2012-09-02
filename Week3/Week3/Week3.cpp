// Week3.cpp : main project file.

#include "stdafx.h"
#include <vector>
#include <string>
#include "person.h"
#include "programmer.h"

using namespace System;
using namespace std;

int main(array<System::String ^> ^args)
{
	cout << endl << "***** INHERITANCE && POLYMORPHISM *****" << endl << endl;
	//creating a person from the base class
	person ppl1 = person("Todd", "Pickell", "Developer");
	cout << "//Person from base class" << endl;
	ppl1.toString();

	//creating a programmer from the derived class
	programmer ppl2 = programmer("Todd", "Pickell", "OSX", "Obj-C");
	cout << endl << "//Programmer from derived class" << endl;
	ppl2.toString();
	cout << endl;
	system("PAUSE");

	//create some ppl
	cout << endl << "****Creating three programmers to add to base array****" << endl;
	
	cout << endl << "******** PROGRAMMER 1 ********" << endl;
	//creating a programmer from the derived class using a pointer
	programmer *programmer1;
	programmer1 = new programmer("Mike", "Deslongchamps", "Windoz", "PHP");
	cout << endl << "//programmer from the derived class using a pointer" << endl;
	programmer1->toString();
	//creating a base class pointer to store a pointer to a derived object in
	person *person1;
	//assigning derived to base pointer
	person1 = programmer1;
	//accessing base method
	cout << endl << "//toString method from base class" << endl;
	person1->toString();
	//accessing derived method
	cout << endl << "//toString method cast to derived class" << endl;
	static_cast<programmer *>(person1)->toString();
	cout << endl;
	system("PAUSE");

	cout << endl << "******** PROGRAMMER 2 ********" << endl;
	//creating a programmer from the derived class using a pointer
	programmer *programmer2;
	programmer2 = new programmer("Todd", "Pickell", "OSX", "Obj-C");
	cout << endl << "//programmer from the derived class using a pointer" << endl;
	programmer2->toString();
	//creating a base class pointer to store a pointer to a derived object in
	person *person2;
	//assigning derived to base pointer
	person2 = programmer2;
	//accessing base method
	cout << endl << "//toString method from base class" << endl;
	person2->toString();
	//accessing derived method
	cout << endl << "//toString method cast to derived class" << endl;
	static_cast<programmer *>(person2)->toString();
	cout << endl;
	system("PAUSE");

	cout << endl << "******** PROGRAMMER 3 ********" << endl;
	//creating a programmer from the derived class using a pointer
	programmer *programmer3;
	programmer3 = new programmer("Nik", "Solis", "Ubuntu", "Java");
	cout << endl << "//programmer from the derived class using a pointer" << endl;
	programmer3->toString();
	//creating a base class pointer to store a pointer to a derived object in
	person *person3;
	//assigning derived to base pointer
	person3 = programmer3;
	//accessing base method
	cout << endl << "//toString method from base class" << endl;
	person3->toString();
	//accessing derived method
	cout << endl << "//toString method cast to derived class" << endl;
	static_cast<programmer *>(person3)->toString();
	cout << endl;
	system("PAUSE");

	cout << endl << "***adding programmers to base array" << endl;
    
	vector<person *> ppl;

	ppl.push_back(person1);
	ppl.push_back(person2);
	ppl.push_back(person3);

	cout << endl << "***printing out programmers from base array cast to derived" << endl;
	for (int i = 0; i < ppl.size(); i++)
	{
		cout << endl << "******** PROGRAMMER " << i << " ********" << endl;
		static_cast<programmer *>(ppl[i])->toString();
		
	}
	cout << endl;

	system("PAUSE");
    return 0;
}