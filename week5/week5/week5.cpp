
/* ***************************************************************************

Programmer: Todd Pickell

Filename: Week5.cpp

Requirements: None

Includes: 
#include "StdAfx.h"
#include "node.h"

Course: Programming III

Date: 9/15/12

Assignment: Week 5: Linked List

Description: write a program that demonstrates using a linked list

************************************************************************* */
// week5.cpp : main project file.

#include "stdafx.h"
#include "DLList.h"


void displayNodeData( DLList &myList );

void printHeader( DLList &myList );

using namespace System;
using namespace std;

int main(array<System::String ^> ^args)
{
	int nodNum = 6;
    DLList myList;

	cout << endl << "Creating " << nodNum << " nodes in list" << endl;

	//create a list of 10 nodes and store numbers from 10 - 19
	for (int i = 0; i < nodNum; i++)
	{
		myList.addNode(i);
		cout << myList.getDataFromNodeAt(i+1) << endl;
	}

	cout << endl << "Number of nodes in list: " << myList.countNodes() << endl;

	cout << endl << "Removing a node" << endl;
	//remove a node
	myList.removeNodeAt(4);

	cout << endl << "Number of nodes in list: " << myList.countNodes() << endl;

	//clear all nodes
	myList.clearNodes();

	cout << endl;
	system("PAUSE");
    return 0;
}