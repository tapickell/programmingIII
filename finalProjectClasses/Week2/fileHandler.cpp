/* ***************************************************************************

Programmer: Todd Pickell

Filename: fileHandler.cpp

Requirements: None

Includes: 
#include "StdAfx.h"
#include "fileHandler.h"

Course: Programming III

Date: 8/17/12

Assignment: Week 2: File Processing

Description: write a program that demonstrates creating a file, reading file contents and writing to a file

************************************************************************* */

#include "StdAfx.h"
#include "fileHandler.h"

using namespace std;

fileHandler::fileHandler(string name)
{
	theFileName = name.c_str();
}

fileHandler::~fileHandler(void)
{
}


vector<item> fileHandler::getFile()
{
	ifstream inFile;
	string fileLine;
	vector<item> localStack;

	inFile.open(theFileName, ios::in|ios::binary);
	if (inFile)
	{
		cout << "Getting file..." << endl;
		cout << endl;
		// not working on initial load if file is present at start
		inFile.seekg(0);
		while(!inFile.eof())
		{
			item tempItem;
			inFile.read(reinterpret_cast< char * >(&tempItem), sizeof(item));
			localStack.push_back(tempItem);
		}
	} else {
		ofstream newFile;
		newFile.open(theFileName, ios::out|ios::binary);
		newFile.close();
		cout << "Creating new file..." << endl;
		cout << endl;
		inFile.open(theFileName, ios::in|ios::binary);
	}
	inFile.close();
	if (localStack.size() > 0)
	{
		//removes some dirty data from end of stack
		localStack.pop_back();
	}
	return localStack;
}

void fileHandler::putFile( vector<item> &items )
{
	ofstream outFile;
	outFile.open(theFileName, ios::out|ios::binary);
	if(!outFile)
	{
		cerr<<"File could not be created"<<endl;
		system("pause");
		exit(1);
	}
	for (int i = 0; i < items.size(); i++)
	{

		outFile.write(reinterpret_cast<const char *>(&items[i]), sizeof(item));
	}
	outFile.clear();
	outFile.close();
}
