/* ***************************************************************************

Programmer:  Elizabeth Nenno

Filename: item.cpp

Requirements:	o	Create fields for items
				o	Get input from user
						ï	Verify strings are valid ñ an allowable number of characters
						ï	If not valid, ask user to re-enter
						ï	Verify numbers are valid ñ an allowable number of characters
						ï	If not, ask user to re-enter
				o	Enter input into file


Includes:	fields for items, setting the sizes of items and verification of size/characters

Course: Programming III

Date:	9/18/2012

Assignment: Final Project

Description:	 fields for items, setting the sizes of items

************************************************************************* */

#include "stdafx.h"
#include "item.h"


using namespace std;

//item constructor
item::item(string ItNumValue, string ItNameValue, string WhlslPriceValue, string NumHandValue, string MaxNumValue, string VendorNameValue, string ReOrderNumValue, string RetPriceValue, string DeptNameValue)
{
	ItNum = ItNumValue;
	ItName = ItNameValue;
	WhlslPrice = WhlslPriceValue;
	NumHand = NumHandValue;
	MaxNum = MaxNumValue;
	VendorName = VendorNameValue;
	ReOrderNum = ReOrderNumValue;
	RetPrice = RetPriceValue;
	DeptName = DeptNameValue;
} //end item constructor

//get item number 
string item::getItNum()
{
	return ItNum;
}//end function getitNum

//set size for item number up to 4 chars
void item::setItNum(string ItNum) 
{
	string itNum = ItNum;
	if (itNum.size() >= 5)
	{
		itNum.resize(4);
	}
}//end function setitNum

//get item name
string item::getItName() 
{
	return ItName;
}//end function getItName

//set size for item name up to 12 chars 
void item::setItName(string ItName) 
{
	string itName = ItName;
	if (itName.size() >= 13)
	{
		itName.resize(12);
	}
}//end function setitName

//get wholesale price 
string item::getWhlslPrice() 
{
	return WhlslPrice;
}//end function getwhlslPrice

//set size for wholesale price up to 6 chars
void item::setWhlslPrice(string WhlslPrice) 
{
	string whlslPrice = WhlslPrice;
	if (whlslPrice.size() >= 7)
	{
		whlslPrice.resize(6);
	}
}//end function setwhlslPrice

//get number on hand 
string item::getNumHand() 
{
	return NumHand;
}//end function getnumHand

//set size for number on hand up to 4 chars
void item::setNumHand(string NumHand) 
{
	string numHand = NumHand;
	if (numHand.size() >= 5)
	{
		numHand.resize(4);
	}
}//end function setnumHand

//get max number 
string item::getMaxNum() 
{
	return MaxNum;
}//end function getmaxNum

//set size for max number up to 4 chars
void item::setMaxNum(string MaxNum) 
{
	string maxNum = MaxNum;
	if (maxNum.size() >= 5)
	{
		maxNum.resize(4);
	}
}//end function setmaxNum

//get vendor name
string item::getVendorName() 
{
	return VendorName;
}//end function getvendorName

//set size for vendor name up to 16 chars
void item::setVendorName(string VendorName) 
{
	string vendorName = VendorName;
	if (vendorName.size() >= 17)
	{
		vendorName.resize(16);
	}
}//end function setvendorName

//get reorder number 
string item::getReOrderNum() 
{
	return ReOrderNum;
}//end function getreOrderNum

//set size for reOrder number up to 3 chars
void item::setReOrderNum(string ReOrderNum) 
{
	string reOrderNum = ReOrderNum;
	if (reOrderNum.size() >= 4)
	{
		reOrderNum.resize(3);
	}
}//end function setreOrderNum

//get retail price 
string item::getRetPrice() 
{
	return RetPrice;
}//end function getretPrice

//set size for retail price up to 6 chars
void item::setRetPrice(string RetPrice) 
{
	string retPrice = RetPrice;
	if (retPrice.size() >= 7)
	{
		retPrice.resize(6);
	}
}//end function retPrice

//get deptName
string item::getDeptName()  
{
	return DeptName;
}//end function getdeptName

//set size for dept name up to 12 chars
void item::setDeptName(string DeptName)
{
	string deptName = DeptName;
	if (deptName.size() >= 13)
	{
		deptName.resize(12);
	}
}//end function setdeptName

string item::toString()
{
	stringstream strstrm;
	strstrm << ItNum << " " << ItName << " " << WhlslPrice << " " << NumHand << " " << MaxNum << " " << VendorName << " " << ReOrderNum << " " << RetPrice << " " << DeptName;
	string s = strstrm.str();
	return s;
}
