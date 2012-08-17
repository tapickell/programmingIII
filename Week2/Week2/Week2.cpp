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

void displayFile(vector<string> &fileStrings);

using namespace std;
using namespace System;


int main(array<System::String ^> ^args)
{
	fileHandler helpFile("help.pkl");
	displayFile(helpFile.getFile());
	
	//read in from file and save strings to vector
	fileHandler theFile("store.pkl");
	vector<string> fileStrings = theFile.getFile();
	displayFile(fileStrings);

	//copy vector
	vector<string> alteredFileStrings = fileStrings;

	//prompt for input
	bool doneEditing = false;
	cout << "Enter text for file or type EXIT:" << endl;
	while(!doneEditing)
	{
		string tempString;
		getline(cin, tempString);
		if (tempString != "EXIT")
		{
			alteredFileStrings.push_back(tempString);
		} else {
			time_t t = time(0);
			alteredFileStrings.push_back(ctime(&t));
			doneEditing = true;
		}
	}
	cout << "Saving text to file" << endl;
	theFile.putFile(alteredFileStrings);

	//read in from altered file and save new strings to vector
	vector<string> newFileStrings = theFile.getFile();
	displayFile(newFileStrings);

	system("PAUSE");
    return 0;
}

void displayFile(vector<string> &fileStrings)
{
	cout << "Line count: " << fileStrings.size() << endl;
	cout << endl;
	cout << "File contents:" << endl;
	cout << endl;
	for (int i = 0; i < fileStrings.size(); i++)
	{
		cout << fileStrings[i] << endl;
	}
}
