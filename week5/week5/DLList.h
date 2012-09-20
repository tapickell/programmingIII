#pragma once

#include "node.h"

class DLList
{
public:
	DLList(void);
	~DLList(void);
	int addNode(int);
	int countNodes();
	int getDataFromNodeAt(int);
	void removeNodeAt(int);
	void clearNodes();

private:
	int count;

	node *root;
	node *temp;
	node *conductor;

	void gotoNode(int);

};

