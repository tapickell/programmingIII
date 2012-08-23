/* ***************************************************************************

Programmer: Todd Pickell

Filename: fileHandler.h

Requirements: None

Includes: None

Course: Programming III

Date: 8/17/12

Assignment: Week 2: File Processing

Description: write a program that demonstrates creating a file, reading file contents and writing to a file

************************************************************************* */

#include "StdAfx.h"
#include "item.h"

using namespace std;

item::item(string itemString)
{
	vector<string> itemArray = parseString(itemString);
	itemName = itemArray[0];
	itemDept = itemArray[1];
	vendorName = itemArray[2];
	maxNumb = stringToNumb(itemArray[3]);
	reorderNumb = stringToNumb(itemArray[4]);
	onHandNumb = stringToNumb(itemArray[5]);
}


item::~item(void)
{
}

vector<string> parseString(string stringIn)
{
	vector<string> myMutableArray;
	//char str[] = stringIn;
	char * pch;
	pch = strtok(stringIn, ","); //use for csv format
	while (pch != NULL)
	{
		myMutableArray.push_back(pch);
		pch = strtok(NULL, ",");
	}

	vector<string> myMutableArray;
	return myMutableArray;
}

int stringToNumb(string stringIn)
{
	stringstream streamIn(stringIn);
	int numb;
	return streamIn >> numb ? numb : 0;
}