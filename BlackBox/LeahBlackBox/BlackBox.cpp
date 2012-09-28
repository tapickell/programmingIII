// BlackBox.cpp : main project file.

/* Black box testing on displayMenuChoice method
   performed on     by  
   status: passed/failed  */

#include "stdafx.h"
#include "fileHandler.h"

#define STOREP "store.pkl"
#define INTROP "intro.pkl"
#define MENUP "menu.pkl"
#define HELP "help.pkl"
#define HEADERP "header.pkl"
#define ERRORP "error.pkl"

using namespace System;
using namespace std;

/*declarations below go here. *********************/
int displayMenu();
void displayFile(vector<string> &stringsToDisplay);


int main(array<System::String ^> ^args)
{
	//make a loop that can allow you to pick an option 
	//then verify if that option matches what you selected from the menu
	//here is a sample of what it might look like
	//feel free to design your own, it just needs to verify
	//the return matches what was selected.
	
	//bool exit = false;
	//while (!exit)
	//{
	//	int returned;
	//	returned = displayMenu();
	//	cout << "Option returned by displayMenu: " << returned << endl;
	//	//exit strategy
	//	if (returned == 6) { exit = true; }
	//}


	cout << endl;
    system("PAUSE");
    return 0;
}

/*McKinley ********************V displayMenu method V************* DATE */
//returns an int and takes in no parameters
//displays the main menu and gets users choice as an int and returns it to the calling function
//this can use the display file method and the menu.pkl file
int displayMenu() 
{
	fileHandler myFile(MENUP);
	displayFile(myFile.getFile());

	int choice = 0;
	cin >> choice;
	return choice;
}


/*McKinley ********************^ displayMenu method ^************* DATE */


/*Leah **************V   displayFile method   V*********** DATE */ 
//returns void and takes in a vector<string>
//used to display all files in program
//can be passed a fileHandler instance calling getFile() method
void displayFile(vector<string> &stringsToDisplay)
{
	vector<string> :: iterator i;		// declares the iterator needed to work with the vector

	// This for loop steps through the items that are stored in the vector and displays them.
	for (vector<string>:: iterator i = stringsToDisplay.begin(); i != stringsToDisplay.end(); ++i)
	{
		cout << *i << endl;
	}

}// end method


/*Leah **************^   displayFile method   ^*********** DATE */ 