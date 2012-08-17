//fileHandler.h

using namespace std;

#pragma once
class fileHandler
{
public:
	fileHandler(string);
	~fileHandler(void);

	vector<string> getFile();
	void putFile(vector<string> &);

private:
	string theFileName;
};

