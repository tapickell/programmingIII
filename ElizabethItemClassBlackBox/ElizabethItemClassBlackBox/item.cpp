/* ***************************************************************************

Programmer:  Elizabeth Nenno

Filename: item.cpp

Requirements:	o	Create fields for items
				o	Get input from user
						•	Verify strings are valid – an allowable number of characters
						•	If not valid, ask user to re-enter
						•	Verify numbers are valid – an allowable number of characters
						•	If not, ask user to re-enter
				o	Enter input into file


Includes:	fields for items, setting the sizes of items and verification of size/characters

Course: Programming III

Date:	9/18/2012

Assignment: Final Project

Description:	 fields for items, setting the sizes of items and verification of size/characters

************************************************************************* */

#include "StdAfx.h"
#include "item.h"
#include <string>
#include <cstdlib>

using namespace std;

//default InvData constructor
item::item(int itNumValue, string itNameValue, string whlslPriceValue, string numHandValue, string maxNumValue, string vendorNameValue, string reOrderNumValue, string retPriceValue, string deptNameValue)
{
	setItNum (itNumValue);
	setItName (itNameValue);
	setWhlslPrice(whlslPrice);
	setNumHand (numHandValue);
	setMaxNum (maxNumValue);
	setVendorName (vendorNameValue);
	setReOrderNum (reOrderNumValue);
	setRetPrice (retPrice);
	setDeptName (deptNameValue);
} //end InvData constructor

//get item number value
int item::getItNum()
{
	return itNum[];
}//end function getItNum

//set size for item number value
void item::setItNum(int itNumValue) 
{
	itNum = itNumValue;
	int length = itNumString.size();
	length = (length < 4 ? length : 3);
	itNumString.copy ("", length);
	itNum[length] = '\0'; 
}//end function setitNum

//get Item Name value
string item::getItName() 
{
	return itName[];

}//end function getItName

//set size for Item Name value
void item::setItName(string itNameValue) 
{
	//copy up to 14 chars for item name
	itName = itNameValue;
	int length = itNameString.size();
	length = (length < 14 ? length : 13);
	itNameString.copy ("", length);
	itName[length] = '\0'; //append null character to vendor 
}//end function setitName

//get Wholesale Price value
string item::getWhlslPrice() 
{
	return whlslPrice[];
}//end function getwhlslPrice

//get Number on Wholesale Price Value
void item::setWhlslPrice(string whlslPriceValue) 
{
	whlslPrice = whlslPriceValue;
	int length = whlslPriceString.size();
	length = (length < 6 ? length : 5);
	whlslPriceString.copy ("", length);
	whlslPrice[length] = '\0'; 
}//end function whlslPrice

//get Number on Hand value
string item::getNumHand() 
{
	return numHand[];
}//end function getNumHand

//get size for Number on Hand value
void item::setNumHand(string numHandValue) 
{
	numHand = numHandValue;
	int length = numHandString.size();
	length = (length < 4 ? length : 3);
	numHandString.copy ("", length);
	numHand[length] = '\0'; 
}//end function setNumHand

//get Max Number value
string item::getMaxNum() 
{
	return maxNum[];
}//end function getMax

//set size for Max Number value
void item::setMaxNum(string maxNumValue) 
{
	maxNum = maxNumValue;
	int length = maxNumString.size();
	length = (length < 4 ? length : 3);
	maxNumString.copy ("", length);
	maxNum[length] = '\0'; 
}//end function setMaxNum

//get Vendor value
string item::getVendorName() 
{
	return vendorName[];
}//end function getVendor

//set size for Vendor value
void item::setVendorName(string vendorNameValue) 
{
	//copy vendor name up to size of 16
	vendorName = vendorNameValue;
	int length = vendorNameString.size();
	length = (length < 16 ? length : 15);
	vendorNameString.copy ("", length);
	vendorName[length] = '\0'; //append null character to vendor 
}//end function setVendor

//get reOrder Num value
string reOrderNum::getReOrderNum() 
{
	return reOrderNum[];
}//end function reOrderNum

//set size for reOrder Number value
void item::setReOrderNum(string reOrderNumValue) 
{
	reOrderNum = reOrderNumValue;
	int length =reOrderNumString.size();
	length = (length < 4 ? length : 3);
	reOrderNumString.copy ("", length);
	reOrderNum[length] = '\0'; 
}//end function setreOrderNum

//get Retail Price value
string item::getRetPrice() 
{
	return retPrice[];
}//end function getretPrice

//set size for Retail Price Value
void item::setRetPrice(string retPriceValue) 
{
	retPrice = retPriceValue;
	int length = retPriceString.size();
	length = (length < 6 ? length : 5);
	retPriceString.copy ("", length);
	retPrice[length] = '\0'; 
}//end function retPrice

//get Dept value
string item::getDeptName()  
{
	return deptName[];
}//end function getDept

//set size for Dept value
void item::setDeptName(string deptNameValue)
{
	//copy up to 12 chars for department
	deptName = deptNameValue
	int length = deptNameString.size();
	length = (length < 12 ? length : 11);
	deptNameString.copy ("", length);
	deptName[length] = '\0'; //append null character to vendor 
}//end function setDept