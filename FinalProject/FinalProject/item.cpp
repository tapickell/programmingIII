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

Description:	 fields for items, setting the sizes of items

************************************************************************* */

#include "StdAfx.h"
#include "item.h"
#include <string>
#include <cstdlib>

using namespace std;

//default InvData constructor
string item();
void item(string ItNumValue, string ItNameValue, string WhlslPriceValue, string NumHandValue, string MaxNumValue, string VendorNameValue, string ReOrderNumValue, string RetPriceValue, string DeptNameValue)
{
	string ItNum (ItNumValue);
	string ItName (ItNameValue);
	string WhlslPrice(WhlslPriceValue);
	string NumHand (NumHandValue);
	string MaxNum (MaxNumValue);
	string VendorName (VendorNameValue);
	string ReOrderNum (ReOrderNumValue);
	string RetPrice (RetPriceValue);
	string DeptName (DeptNameValue);
} //end item constructor

//get item number 
string getItNum(string ItNumValue)
{
	string ItNum = ItNumValue;
	return ItNum;
}//end function getitNum

//set size for item number up to 4 chars
void setItNum(string ItNum) 
{
	string itNum = ItNum;
	if (itNum.size() >= 5)
	{
		itNum.resize(4);
	}
}//end function setitNum

//get item name
string getItName(string ItNameValue) 
{
	string ItName = ItNameValue;
	return ItName;
}//end function getItName

//set size for item name up to 12 chars 
void setItName(string ItName) 
{
	string itName = ItName;
	if (itName.size() >= 13)
	{
		itName.resize(12);
	}
}//end function setitName

//get wholesale price 
string getWhlslPrice(string WhlslPriceValue) 
{
	string WhlslPrice = WhlslPriceValue;
	return WhlslPrice;
}//end function getwhlslPrice

//set size for wholesale price up to 6 chars
void setWhlslPrice(string WhlslPrice) 
{
	string whlslPrice = WhlslPrice;
	if (whlslPrice.size() >= 7)
	{
		whlslPrice.resize(6);
	}
}//end function setwhlslPrice

//get number on hand 
string getNumHand(string NumHandValue) 
{
	string NumHand = NumHandValue;
	return NumHand;
}//end function getnumHand

//set size for number on hand up to 4 chars
void setNumHand(string NumHand) 
{
	string numHand = NumHand;
	if (numHand.size() >= 5)
	{
		numHand.resize(4);
	}
}//end function setnumHand

//get max number 
string getMaxNum(string MaxNumValue) 
{
	string MaxNum = MaxNumValue;
	return MaxNum;
}//end function getmaxNum

//set size for max number up to 4 chars
void setMaxNum(string MaxNum) 
{
	string maxNum = MaxNum;
	if (maxNum.size() >= 5)
	{
		maxNum.resize(4);
	}
}//end function setmaxNum

//get vendor name
string getVendorName(string VendorNameValue) 
{
	string VendorName = VendorNameValue;
	return VendorName;
}//end function getvendorName

//set size for vendor name up to 16 chars
void setVendorName(string VendorName) 
{
	string vendorName = VendorName;
	if (vendorName.size() >= 17)
	{
		vendorName.resize(16);
	}
}//end function setvendorName

//get reorder number 
string getReOrderNum(string ReOrderNumValue) 
{
	string ReOrderNum = ReOrderNumValue;
	return ReOrderNum;
}//end function getreOrderNum

//set size for reOrder number up to 3 chars
void setReOrderNum(string ReOrderNum) 
{
	string reOrderNum = ReOrderNum;
	if (reOrderNum.size() >= 4)
	{
		reOrderNum.resize(3);
	}
}//end function setreOrderNum

//get retail price 
string getRetPrice(string RetPriceValue) 
{
	string RetPrice = RetPriceValue;
	return RetPrice;
}//end function getretPrice

//set size for retail price up to 6 chars
void setRetPrice(string RetPrice) 
{
	string retPrice = RetPrice;
	if (retPrice.size() >= 7)
	{
		retPrice.resize(6);
	}
}//end function retPrice

//get deptName
string getDeptName(string DeptNameValue)  
{
	string DeptName = DeptNameValue;
	return DeptName;
}//end function getdeptName

//set size for dept name up to 12 chars
void setDeptName(string DeptName)
{
	string deptName = DeptName;
	if (deptName.size() >= 13)
	{
		deptName.resize(12);
	}
}//end function setdeptName