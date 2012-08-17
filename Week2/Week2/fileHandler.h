#pragma once
class fileHandler
{
public:
	fileHandler(void);
	~fileHandler(void);

	array getFile();
	bool putFile(array);

private:
	string theFileName;
	void createNewFile();
};

