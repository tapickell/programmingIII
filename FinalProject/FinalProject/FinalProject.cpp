// FinalProject.cpp : main project file.

#include "stdafx.h" //extra includes go in this file   <---#@#@#@#@
#include "fileHandler.h"
//#include "item.h"

#define STOREP "store.pkl"
#define INTROP "intro.pkl"
#define MENUP "menu.pkl"
#define HELP "help.pkl"
#define HEADERP "header.pkl"
#define ERRORP "error.pkl"

using namespace System;
using namespace std;

/*declarations below go here. *********************/
void handleMenuChoice(int choice);
//void displayItems();
void displayFile(vector<string> &stringsToDisplay);
int searchFor(vector<string> &myStack);

//int demonstration();


int main(array<System::String ^> ^args)
{

	/* we are not putting anything into here till iteration 2 */


	system("PAUSE");
	return 0;
}

/* *************  _-_--_--_--_V    FILL IN METHODS BELOW HERE   V _-_--_--_--_  ************** */


/*McKinley ********************V displayMenu method V************* 9-21-12 */
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

/*McKinley ********************^ displayMenu method ^************* 9-21-12 */


/*Jody ********************V  handleMenuChoice method  V************* 9-19-12 */
//returns void and takes in an int
//calls method according to int passed in
void handleMenuChoice(int choice)
{
	switch ( choice )
	{         

	case 1: 					
		//add(); break;// Call ADD function, then break the switch

	case 2: 
		//edit(); break;// Call EDIT function, then break the switch

	case 3: 		
		//remove(); break;// Call REMOVE ITEM function, then break the switch

	case 4: 	
		//displayItems(); break;// Call DISPLAY function, then break the switch

	case 5: 		
		//help(); break;// Call  HELP function, then break the switch

	case 6: 
		//exit(); break;//exit program

	default: 
		cout << "Invalid number\n"; break;// Default to invalid number error statement
	}//end switch         
}//end handleMenuChoice method


/*Jody ********************^  handleMenuChoice method  ^************* 9-19-12 */


/*Elizabeth ********************V stringsToItems method V************* DATE */
//returns a vector<item> and takes in a vector<string>
//converts params to proper format before calling the constructor passing in the formated params to create items.
//pushes newly created items onto vector before returning


/*Elizabeth ********************^ stringsToItems method ^************* DATE */


/*Elizabeth ********************V itemsToStrings method V************* DATE */
//returns a vector<string> and takes in a vector<item>
//calls toString on each item in vector and pushes that onto vector of strings to be returned


/*Elizabeth ********************^ itemsToStrings method ^************* DATE */


/*unassigned ********************V add method V************* DATE */
//returns void and takes in no params
//creates file handler to data file
//prompts user for field input
//writes vector<string> out to file


/*unassigned ********************^ add method ^************* DATE */


/*unassigned **************V   editItems method  V *********** DATE */
//returns void and takes in no params
//this method will call search to get item number to edit
//then display item to edit
//after user edits the new item can be saved into the vector
//write changes to file


/*unassigned **************^   editItems method   ^*********** DATE */


/*Leah **************V   displayItems method   V*********** DATE */ 
//returns void and takes in no params
//this is a wrapper method that calls displayFile
//passing a header fileHandler then calls th method again 
//passing a store fileHandler



/*Leah **************^   displayItems method   ^*********** DATE */ 


/*Leah **************V   displayFile method   V*********** 9-19-12 */ 
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


/*Leah **************^   displayFile method   ^*********** 9-19-12 */ 



/*Nik **************V   removeItems method   V*********** DATE */
//returns void and takes in no params
//creates a file handler to the data file
//calls search method and passes in vector<string> to get location of item in vector
//displays header file by calling display file
//displays item to be deleted
//prompts user are you sure?
//deletes item if user is sure
//writes changes to file



/*Nik **************^   removeItems method   ^*********** DATE */


/*Todd **************V   search method   V*********** 9/14/12 */
//returns an int and takes in a vector<string>
//used to search thru and locate an item by its item number
int searchFor(vector<string> &myStack){
	int foundAt = -1;
	string findMe;
	cout << "Enter item# to search for: " << endl;
	cin >> findMe;
	cout << endl << "Locating item..." << endl;

	for (size_t i = 0; i < myStack.size(); i++)
	{
		int x = myStack[i].find(findMe);
		if (x > -1)
		{
			foundAt = i;
		}
	}
	if (foundAt == -1)
	{
		cout << endl << "Sorry did not find item number you are looking for" << endl;
	}
	return foundAt;
}//end searchFor
/*Todd **************^   search method   ^*********** 9/14/12 */