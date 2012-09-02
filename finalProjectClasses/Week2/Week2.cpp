/* ***************************************************************************

Programmer: Todd Pickell

Filename: Week2.cpp

Requirements: None

Includes: 
#include "StdAfx.h"
#include "fileHandler.h"

Course: Programming III

Date: 8/17/12

Assignment: Week 2: File Processing

Description: write a program that demonstrates creating a file, reading file contents and writing to a file

************************************************************************* */

#include "stdafx.h"
#include "fileHandler.h"


using namespace std;
using namespace System;


int main(array<System::String ^> ^args)
{	

	fileHandler theFile("store.pkl");
	vector<item> itemStack = theFile.getFile();

	cout << "SKU  Name  Dept  Vendor    Max Order onHand" << endl;
	cout << "-------------------------------------------" << endl;
	for (int i = 0; i < itemStack.size(); i++)
	{
		cout << itemStack[i].toString() << endl;
	}
	vector<item> newStack;

	//prompt for input
	bool doneEditing = false;

	while(!doneEditing)
	{
		int A;
		int E;
		int F;
		int G;
		string B;
		string C;
		string D;
		string tempString;
		cout << "Enter item info:" << endl << "Item SKU: ";
		cin >> A;
		cout << endl << "Item Name: ";
		cin >> B;
		cout << endl << "Item Dept: ";
		cin >> C;
		cout << endl << "Vendor Name: ";
		cin >> D;
		cout << endl << "Max Number: ";
		cin >> E;
		cout << endl << "Reorder Number: ";
		cin >> F;
		cout << endl << "OnHand Number: ";
		cin >> G;
		cout << endl << "Done?? Y/N: ";
		cin >> tempString;
		cout << endl;

		item tempItem = item(A, B, C, D, E, F, G);
		newStack.push_back(tempItem);
		
		if (tempString == "Y" || tempString == "y")
		{
			doneEditing = true;
		}
	}
	cout << "Saving stack to file" << endl;
	theFile.putFile(newStack);
	cout << "Items written to file" << endl;

	vector<item> newFileStack = theFile.getFile();

	cout << "After reload: " << endl;
	cout << "SKU  Name  Dept  Vendor    Max Order onHand" << endl;
	cout << "-------------------------------------------" << endl;
	for (int i = 0; i < newFileStack.size(); i++)
	{
		cout << newFileStack[i].toString() << endl;
	}

	cout << "Thank you for using the Awesome Grocery Inventory Application" << endl;

	system("PAUSE");
	/*return 0;   this breaks with same error as 
				  when reading in saved file after application restart 
				  */
    exit(0);
}

