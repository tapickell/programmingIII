#include "StdAfx.h"
#include "fileHandler.h"

using namespace std;

fileHandler::fileHandler(void)
{
	theFileName = "store.pkl";
}

fileHandler::~fileHandler(void)
{
}


vector<string> fileHandler::getFile()
{
	ifstream inFile;
	string fileLine;
	vector<string> document;

	inFile.open(theFileName);
	if (inFile.is_open())
	{
		while(!inFile.eof())
		{
			getline(inFile, fileLine);
			document.push_back(fileLine);
		}
	} else {
		ofstream newFile;
		newFile.open(theFileName);
		newFile.close();
		inFile.open(theFileName);
	}
	inFile.close();
	return document;
}

bool fileHandler::putFile(vector<string>)
{
	return true;
}
