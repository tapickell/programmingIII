// FinalProject.cpp : main project file.
//This Works!

#include "stdafx.h" //extra includes go in this file   <---#@#@#@#@
#include "fileHandler.h"
#include "item.h"

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
void handleMenuChoice(int choice);
void displayFile(vector<string> &stringsToDisplay);
void displayItems();
int searchFor(vector<string> &myStack);
void removeItem();
void editItem();
void addItems();

int kickMeOut = 0;
 
//main method
int main(array<System::String ^> ^args)
{
	/*Jody ******************** Main ********************* 9-27-12 */
	
	//read and display introduction
	fileHandler introFile(INTROP);
	displayFile(introFile.getFile());

	//read and display 
	displayItems();
		
	//get and handle menu choice 
	
	while (kickMeOut != 6)//flag not working. ** Fixed ** tpickell 9-29-12
	{
		handleMenuChoice(displayMenu());	
	}//end while loop
	
	/*Jody ******************** Main ********************* 9-27-12 */

	system("PAUSE");
	return 0;
}//end main

/* *************  _-_--_--_--_V    FILL IN METHODS BELOW HERE   V _-_--_--_--_  ************** */


/*McKinley ********************V displayMenu method V************* 9-21-12 */
//returns an int and takes in no parameters
//displays the main menu and gets users choice as an int and returns it to the calling function
//this can use the display file method and the menu.pkl file
int displayMenu()
{
    fileHandler myFile(MENUP);
    displayFile(myFile.getFile());

    int choices = 0;
    cin >> choices;
    return choices;
}

/*McKinley ********************^ displayMenu method ^************* 9-21-12 */


/*Jody ********************V  handleMenuChoice method  V************* 9-19-12 */
//returns void and takes in an int
//calls method according to int passed in
void handleMenuChoice(int choice)
{
	fileHandler myHandle(HELP);

	switch ( choice )
	{         

	case 1: 					
		addItems(); break;// Call ADD function, then break the switch

	case 2: 
		editItem(); break;// Call EDIT function, then break the switch

	case 3: 		
		removeItem(); break;// Call REMOVE ITEM function, then break the switch

	case 4: 	
		displayItems(); break;// Call DISPLAY function, then break the switch

	case 5: 
		displayFile(myHandle.getFile()); break;// Call  HELP function, then break the switch

	case 6: 
		kickMeOut = 6; break;//exit program   WORKS!

	default: 
		cout << "Invalid number\n"; break;// Default to invalid number error statement
	}//end switch         
}//end handleMenuChoice method


/*Jody ********************^  handleMenuChoice method  ^************* 9-19-12 */


/*Elizabeth ********************V stringsToItems method V************* DATE */
//returns a vector<item> and takes in a vector<string>
//converts params to proper format before calling the constructor passing in the formated params to create items.
//pushes newly created items onto vector before returning
vector<item> stringsToItems(vector<string> &myChangingArray)
	{
		vector<item> myItems;

		//get strings from vector items
		for(size_t x = 0; x < myChangingArray.size(); x++)
		{
			vector<string> myStack;
        	//tokenizes string into separate items
			//string *tokenString;
			//String myCharStar = myChangingArray[x];
			//tokenString = strtok(myCharStar, " "); //use for space separate format
			//while (pkl != NULL)
			//{
			//	myStack.push_back(pkl);
			//	pkl = strtok(NULL, " ");
			//}

			stringstream myStr(myChangingArray[x]);
			myStr >> myStack[0] >> myStack[1] >> myStack[2] >> myStack[3] >> myStack[4] >> myStack[5] >> myStack[6] >> myStack[7] >> myStack[8];
    
			//create new inventory items from variables
			item myItem = item(myStack[0], myStack[1], myStack[2], myStack[3], myStack[4], myStack[5], myStack[6], myStack[7], myStack[8]);

			myItems.push_back(myItem);

		}
		return myItems;
	}

/*Elizabeth ********************^ stringsToItems method ^************* DATE */


/*Elizabeth ********************V itemsToStrings method V************* DATE */
//returns a vector<string> and takes in a vector<item>
//calls toString on each item in vector and pushes that onto vector of strings to be returned
vector<string> itemsToString(vector<item> itemsForMe)
{
	vector<string> stringsForYou;
	for (size_t i = 0; i < itemsForMe.size(); i++)
	{
		string temp = itemsForMe[i].toString();
		stringsForYou.push_back(temp);
	}
	return stringsForYou;
}


/*Elizabeth ********************^ itemsToStrings method ^************* DATE */


/*Elizabeth ********************V add method V************* DATE */
<<<<<<< HEAD
//returns void and takes in no params.........DONE
//creates file handler to data file.......NOT DONE
//prompts user for field input........DONE
//writes vector<string> out to file.........NOT DONE
void addItems()
	{
		vector <string> stringItems;//create the vector for items

		fileHandler myFile(STOREP);//get file handler
		

=======
//returns void and takes in no params........DONE
//creates file handler to data file...................NOT DONE!
//prompts user for field input..........DONE
//writes vector<string> out to file.............NOT DONE!
	void addItems()
	{
		vector <string> stringItems;//create the vector for items

>>>>>>> f4d2595d0514d3ecc0e4be9f5af4637d58d4137b
		//create items for function
		string itNum;
		string itName;
		string whlslPrice;
		string numHand;
		string maxNum;
		string vendorName;
		string reOrderNum;
		string retPrice;
		string deptName;

<<<<<<< HEAD
		string quit;

		bool QUIT = false;// instructions to user state enter QUIT to return to menu

			while(!QUIT)
			{
				vector<string> fileStrings = myFile.getFile();
				//user enters data in format of screen shots, flow chart and algorithm
				cout << "Enter item number(0111 to 9999): \n";
=======
		string tempString;//for exit

		bool QUIT = false;// instructions to user state enter QUIT to return to menu

		//NEED TO CHECK FOR USER ENTERING QUIT

			while(!QUIT)
			{
				//user enters data in format of screen shots, flow chart and algorithm
				cout << "Enter item number(0111 to 9999): \n";//wtf why is this limited to a max val
>>>>>>> f4d2595d0514d3ecc0e4be9f5af4637d58d4137b
				cin >> itNum;
				cout << endl;
				cout <<"Enter Item Name (up to 12 characters): ";
				cin >>  itName;
				cout << endl;
				cout <<"Enter Wholesale Price (###.##): ";
				cin >>  whlslPrice;
				cout << endl;
				cout <<"Enter number on hand (0111 to 9999): ";
				cin >> numHand;
				cout << endl;
				cout <<"Enter Max number (0111 to 9999): ";
				cin >> maxNum;
				cout << endl;
				cout << "Enter the Vendor Name(up to 16 characters):";
				cin >>  vendorName;
				cout << endl;
				cout << "Enter Reorder Base Number(001 to 999): ";
				cin >> reOrderNum;
				cout << endl;
				cout <<"Enter Retail Price (###.##): ";
				cin >> retPrice;
				cout << endl;
				cout << "Enter Department Name (up to 12 characters): ";
				cin >>  deptName;
				cout << endl;
<<<<<<< HEAD
				cout << "Done? type \"QUIT\" stop adding items.";
				cin >> quit;

				if (quit == "QUIT")
				{
					QUIT = true;
				}
=======
				cout << endl << "Done?? Y/N: ";
				cin >> tempString;
				cout << endl;
>>>>>>> f4d2595d0514d3ecc0e4be9f5af4637d58d4137b


			//add items to the vector
			stringItems.push_back(itNum);
			stringItems.push_back(itName);
			stringItems.push_back(whlslPrice);
			stringItems.push_back(numHand);
			stringItems.push_back(maxNum);
			stringItems.push_back(vendorName);
			stringItems.push_back(reOrderNum);
			stringItems.push_back(retPrice);
			stringItems.push_back(deptName);
<<<<<<< HEAD
			

			item tempItem = item(stringItems[0], stringItems[1], stringItems[2], stringItems[3], stringItems[4], stringItems[5], stringItems[6], stringItems[7], stringItems[8]);

			fileStrings.push_back(tempItem.toString());

			myFile.putFile(fileStrings);

			}
	}

=======
			}
			//give user option to quit

			if(QUIT)
			{
				cout << "whoops" << endl;//for testing purposes
			//	displayMenu(); // commented because it will work when the program is put together
			}
			else
			{
				cerr;//wtf
				system("pause");//nope
			}

			//this doesn't do anything!
//commented out because it doesn't work....
/*	vector<string> itemsToString(vector<string> &itemsIn)
	{
		vector<string>stringItems;
	}
	*/
	}
>>>>>>> f4d2595d0514d3ecc0e4be9f5af4637d58d4137b

/*Elizabeth ********************^ add method ^************* DATE */


/*Leah - Jody **************V   editItems method  V *********** 9-29-12 */
//returns void and takes in no params
//this method will call search to get item number to edit
//then display item to edit
//after user edits the new item can be saved into the vector
//write changes to file
void editItem()//returns void and takes no params      FIXED :)
{
	fileHandler myFile(STOREP);//get file handler
	vector<string> change = myFile.getFile();
	int x = searchFor(change);//call search function
	if (x > -1)
	{
		//passing a header fileHandler then calls the method again
		fileHandler myFile2(HEADERP);
		displayFile (myFile2.getFile());
		cout<<change[x]<<endl;	
		//allows the user to make changes
		cout<<endl<<"Enter Changes: "<<endl;
		displayFile(myFile2.getFile());
		string a, b, c, d, e, f, g, h, i;//creates a string to save changes of user input
		cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;//input from user
		item myTempItem = item(a, b, c, d, e, f, g, h, i);
		change.at(x)= myTempItem.toString();//call at method to replace info
		myFile.putFile(change);//use file handler to add changes to the file
	}
}


/*Leah - Jody **************^   editItems method   ^*********** 9-29-12 */


/*Leah **************V   displayItems method   V*********** 9-25-12 */ 
//returns void and takes in no params
//this is a wrapper method that calls displayFile
//passing a header fileHandler then calls th method again 
//passing a store fileHandler

//Calls the displayFile function which iterates through the vector of strings
void displayItems()
{
	fileHandler myHeader(HEADERP);
	displayFile(myHeader.getFile());
	fileHandler myFile(STOREP);
	displayFile(myFile.getFile());
}



/*Leah **************^   displayItems method   ^*********** 9-25-12 */ 


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



/*Nik - Todd **************V   removeItems method   V*********** 9-27-12 */
//returns void and takes in no params
//creates a file handler to the data file
//calls search method and passes in vector<string> to get location of item in vector
//displays header file by calling display file
//displays item to be deleted
//prompts user are you sure?
//deletes item if user is sure
//writes changes to file

void removeItem()
{
	string removeItem;
    		//creates a file handler to the data file (this works)
    fileHandler myFile(STOREP);
    		//create an int to store an index number in
	int myVal; 
    		//create a vector<string> object
	vector<string> myremoveItem;
    		//assign (=) the output of myFile.getFile() to the vector<string> created above
	myremoveItem = myFile.getFile();
    		//assign (=) the output of searchFor( passing in your vector<string> here ) to the int created above
	myVal = searchFor(myremoveItem);
	
	if (myVal > -1)
	{
    		//creates a file handler to the HEADERP file *** just like above but different file ***
		fileHandler myItem(HEADERP);
    		//displays header file by calling display file
		displayFile (myItem.getFile());
    
    		//displays item to be deleted *** the int created above is the index of the item ***
		cout << myremoveItem[myVal] << endl;
    		//prompts user are you sure?
    		cout << endl << "Are you sure you want to remove item " << myVal << " ??? [REMOVE] or [CANCEL]"<< endl;
    		cin >> removeItem; //this variable needs to be initialized before you can write to it
    		//deletes item if user is sure
    		//could use an if statement to test the removeItem variable
		if (removeItem == "REMOVE")
		{		
    		//remove the element of the vector<string> at the index we got from searchFor
			myremoveItem.erase(myremoveItem.begin()+myVal);
    		//writes changes to file
			myFile.putFile(myremoveItem);
		}
	}
}


/*Nik - Todd **************^   removeItems method   ^*********** 9-27-12 */


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
