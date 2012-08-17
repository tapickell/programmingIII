//fileHandler.h

using namespace std;

#pragma once
class fileHandler
{
public:
	fileHandler(void);
	~fileHandler(void);

	vector<string> getFile();
	bool putFile(vector<string>);

private:
	string theFileName;
};

