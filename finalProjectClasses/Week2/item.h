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

using namespace std;

#pragma once
class item
{
public:
	item(string itemString);
	~item(void);

private:
	int stringToNumb(string stringIn);
	vector<string> parseString(string stringIn);

	string itemName;
	string itemDept;
	string vendorName;
	int maxNumb;
	int reorderNumb;
	int onHandNumb;
};

