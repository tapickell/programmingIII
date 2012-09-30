/* ***************************************************************************

Programmer: Elizabeth Nenno

Filename: item.h

Requirements:	o	Create fields for items
				o	Get input from user
				o	Set the sizes of the items
				o	Enter input into vector


Includes: fields for items, setting the sizes of items, changing to items, changing to strings, 
			entering strings into vector

Course: CISS 243A C++ Programming III

Date: 9/18/2012

Assignment: Final Project

Description:  Setting sizes and items

************************************************************************* */

#pragma once
#ifndef item_h
#define item_h

#include <string>
using namespace std;

class item
{
private:


	public:
	string ItNum;
	string ItName;
	string WhlslPrice;
	string NumHand;
	string MaxNum;
	string VendorName;
	string ReOrderNum;
	string RetPrice;
	string DeptName;
	//constructor
	item();
	item(string, string, string, string, string, string, string, string, string); //default constructor

	//accessor for item number
	void setItNum(string);
	string getItNum();

	//accessor for item name
	void setItName(string);
	string getItName();

	//accessor for wholesale price
	void setWhlslPrice(string);
	string getWhlslPrice();

	//accessor for Num on Hand
	void setNumHand(string);
	string getNumHand();

	//accessor for Max Num 
	void setMaxNum(string);
	string getMaxNum();	

	//accessor for vendor name
	void setVendorName(string);
	string getVendorName();

	//accessor for reOrderNum
	void setReOrderNum(string);
	string getReOrderNum();

	//accessor for retail price
	void setRetPrice(string);
	string getRetPrice();

	//accessor for dept
	void setDeptName(string);
	string getDeptName();

};//end class - item
#endif
