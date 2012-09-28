// StackSort.cpp : main project file.

#include "stdafx.h"

using namespace System;
using namespace std;


//started this one with trying to do a sort using multiple
//stacks to sort ints from low to high then print them to screen
//stacks are not ideal for that from my findings and I had 
//difficulty getting it to work very well. So reverted back to
//a simpler program that utilizes a stack and demonstrates 
//using push, pop, top, size and empty which are all five of the
//member functions for std::stack. sorry about the wording, after
//wards I realized it was very "Dora the Explorer uses a stack" 

int main(array<System::String ^> ^args)
{
	//create stack
	stack<int> myStack;
	bool done = false;

	cout << endl << "You know what sounds like fun?\n\nUsing STL containers in C++!" << endl;
	while (!done)
	{
		int choice = 0;
		cout << endl << "Lets add a bunch of numbers to a stack." << endl;
		cout << endl << "How many numbers would you like to add?" << endl;
		cin >> choice;
		cout << endl;
	
		//add ints to stack
		for (int i = 0; i < choice; i++)
		{
			int temp = 0;
			cout << endl << "Enter a number: " << endl;
			cin >> temp;
			myStack.push(temp);
		}
	
		//use size function of stack
		cout << endl << "The stack now has " << myStack.size() << " numbers stored in it.\nLet's see what they are." << endl;
		cout << endl << "Printing numbers... " << endl;
	
		//use top and pop to display top entry and then pop it to get to the next
		while (!myStack.empty())
		{
			cout << myStack.top() << endl;
			myStack.pop();
		}

		//give user choice to exit or to stay in the stack push/pop madness
		//for real fun remove all cases of "no" except for "Ni"
		string yesNo;
		cout << endl << "That was fun!\nWould you like to try that again?\n\nYes or No: " << endl;
		cin >> yesNo;

		if (yesNo.compare("No") == 0 || yesNo.compare("NO") == 0 || yesNo.compare("no") == 0 || yesNo.compare("n") == 0 || yesNo.compare("N") == 0 || yesNo.compare("Ni") == 0)
		{
			done = true;
		}
	}

	cout << endl;
    system("PAUSE");
    return 0;
}
