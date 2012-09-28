#include "stdafx.h"
#include <iostream>
using namespace std;
#include "dvd.h"

int main()
{
	ListofDVDs *DVDs = new ListofDVDs();
	DVDs     *DVD;


	int d;
	DVD  = new DVDs;
	DVD->DVDNumber = 1;
	strcpy_s(DVD->DVDName, "Scott Pilgrim");
	DVDs->Add(DVD);

	DVD  = new DVDs;
	DVD->PartNumber = 2;
	strcpy_s(DVD->DVDName, "Toy Story 3");
	DVDs->Add(DVD);

	DVD  = new DVDs;
	DVD->DVDNumber = 3;
	strcpy_s(DVD->DVDName, "HULK");
	DVDs->Add(DVD);

	DVD  = new DVDs;
	DVD->DVDNumber = 27644;
	strcpy_s(DVD->PartName, "Finding Nemo");
	DVDs->Add(DVD);

	cout << "Number of DVDs: " << DVDs->getCount() << endl;
	cout << "\n-=- List of DVDs -=-";
	for(i = 0; i < DVDs->getCount(); i++)
	{
		DVD* One = DVDs->Retrieve(i);
		cout << "\nDVD Information";
		cout << "\nDVD number:      " << One->DVDNumber;
		cout << "\nDescription: " << One->DVDName;
	}

	DVDs->Delete();
	cout << "\nNumber of DVDs: " << DVDs->getCount() << endl;
	cout << "\n-=- List of DVDs -=-";
	for(i = 0; i < DVDs->getCount(); i++)
	{
		DVD* One = DVDs->Retrieve(i);
		cout << "\nDVD Information";
		cout << "\nDVD number:      " << One->DVDNumber;
		cout << "\nDescription: " << One->DVDName;
	}

	system("pause");
	return 0;
}
