#include "StdAfx.h"
#include "DLList.h"


DLList::DLList(void)
{
	root = nullptr;
	count = 0;
}


DLList::~DLList(void)
{
	clearNodes();
	root = nullptr;
	temp = nullptr;
	conductor = nullptr;
}


//method to add nodes to end of the list
//takes in an integer to store in the node as data
int DLList::addNode(int intIn)
{
	//if no nodes in the list start fresh with
	//new node and pass it the int for data
	if (root == nullptr)
	{
		root = new node;
		root->data = intIn;
		root->nextLink = nullptr;
		root->previousLink = nullptr;
	} 
	else
	{
		//start at beginning
		conductor = root;
		//go to the end of the list
		while (conductor->nextLink != nullptr)
		{
			conductor = conductor->nextLink;
		}
		//create new node to attach on end
		//pass it the int for data
		temp = new node;
		temp->data = intIn;
		temp->nextLink = nullptr;
		//connect new node to the conductor pointer 
		//which is at the end of the list
		temp->previousLink = conductor;
		conductor->nextLink = temp;
	}
	//increment number of nodes
	count++;
	return count;
}//end addNode


//method to return the current number of nodes in the list
int DLList::countNodes()
{
	return count;
}//end countNodes


//method to get data from chosen node
//takes in an int for the index of the node
int DLList::getDataFromNodeAt(int intIn)
{
	gotoNode(intIn);
	return conductor->data;
}//end getDatafromNodeAt


//method to remove node from list
//takes in an int for the index of the node
void DLList::removeNodeAt(int intIn)
{
	//if removing first node
	if (intIn == 0)
	{
		//get pointer to next node
		//then remove the first node
		temp = root->nextLink;
		delete root;
		//if next node ptr exists
		if (temp != nullptr)
		{
			//nullptr out link to first node
			//then set root ptr to that node
			temp->previousLink = nullptr;
			root = temp;
		}
	} 
	else
	{
		//point conductor to node in list
		gotoNode(intIn);
		//get ptr to prev node
		temp = conductor->previousLink;
		//attach prev node to node past node to remove
		temp->nextLink = conductor->nextLink;
		//get ptr to node past node to remove
		temp = conductor->nextLink;
		//if node to remove is not last node in list
		if (temp != nullptr)
		{
			//link node past node to remove to
			//node before node to remove
			temp->previousLink = conductor->previousLink;
		}
		//remove node in the middle
		delete conductor;
	}
	//decrement number of nodes
	count--;
}//end removeNodeAt


//method that clears the linked list out
void DLList::clearNodes()
{
	//while there are nodes
	//remove them from the first posistion
	//till they are all gone
	while (count > 0)
	{
		removeNodeAt(0);
	}
	//set root back to nullptr
	root = nullptr;
}

//method that traverses list until node is found
//takes in an int for the node to search for
void DLList::gotoNode(int intIn)
{
	int i = 1;
	if (root != nullptr && intIn > 0 && intIn <= count)
	{
		//start at beginning
		conductor = root;
		//go to the end of the list
		while (conductor->nextLink != nullptr)
		{
			conductor = conductor->nextLink;
			//stop when you find the right node
			if (i == intIn)
			{
				break;
			}
			i++;
		}
	} 
	else
	{
		/* These are not the nodes you are looking for */
		std::cout << "Error: Index is out of range." << std::endl;
	}
}//end gotoNode