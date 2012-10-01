<<<<<<< HEAD
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
=======
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
>>>>>>> f4d2595d0514d3ecc0e4be9f5af4637d58d4137b
	return ItNum;
}//end function getitNum

//set size for item number up to 4 chars
<<<<<<< HEAD
void item::setItNum(string ItNum) 
=======
void setItNum(string ItNum) 
>>>>>>> f4d2595d0514d3ecc0e4be9f5af4637d58d4137b
{
	string itNum = ItNum;
	if (itNum.size() >= 5)
	{
		itNum.resize(4);
	}
}//end function setitNum

//get item name
<<<<<<< HEAD
string item::getItName() 
{
=======
string getItName(string ItNameValue) 
{
	string ItName = ItNameValue;
>>>>>>> f4d2595d0514d3ecc0e4be9f5af4637d58d4137b
	return ItName;
}//end function getItName

//set size for item name up to 12 chars 
<<<<<<< HEAD
void item::setItName(string ItName) 
=======
void setItName(string ItName) 
>>>>>>> f4d2595d0514d3ecc0e4be9f5af4637d58d4137b
{
	string itName = ItName;
	if (itName.size() >= 13)
	{
		itName.resize(12);
	}
}//end function setitName

//get wholesale price 
<<<<<<< HEAD
string item::getWhlslPrice() 
{
=======
string getWhlslPrice(string WhlslPriceValue) 
{
	string WhlslPrice = WhlslPriceValue;
>>>>>>> f4d2595d0514d3ecc0e4be9f5af4637d58d4137b
	return WhlslPrice;
}//end function getwhlslPrice

//set size for wholesale price up to 6 chars
<<<<<<< HEAD
void item::setWhlslPrice(string WhlslPrice) 
=======
void setWhlslPrice(string WhlslPrice) 
>>>>>>> f4d2595d0514d3ecc0e4be9f5af4637d58d4137b
{
	string whlslPrice = WhlslPrice;
	if (whlslPrice.size() >= 7)
	{
		whlslPrice.resize(6);
	}
}//end function setwhlslPrice

//get number on hand 
<<<<<<< HEAD
string item::getNumHand() 
{
=======
string getNumHand(string NumHandValue) 
{
	string NumHand = NumHandValue;
>>>>>>> f4d2595d0514d3ecc0e4be9f5af4637d58d4137b
	return NumHand;
}//end function getnumHand

//set size for number on hand up to 4 chars
<<<<<<< HEAD
void item::setNumHand(string NumHand) 
=======
void setNumHand(string NumHand) 
>>>>>>> f4d2595d0514d3ecc0e4be9f5af4637d58d4137b
{
	string numHand = NumHand;
	if (numHand.size() >= 5)
	{
		numHand.resize(4);
	}
}//end function setnumHand

//get max number 
<<<<<<< HEAD
string item::getMaxNum() 
{
=======
string getMaxNum(string MaxNumValue) 
{
	string MaxNum = MaxNumValue;
>>>>>>> f4d2595d0514d3ecc0e4be9f5af4637d58d4137b
	return MaxNum;
}//end function getmaxNum

//set size for max number up to 4 chars
<<<<<<< HEAD
void item::setMaxNum(string MaxNum) 
=======
void setMaxNum(string MaxNum) 
>>>>>>> f4d2595d0514d3ecc0e4be9f5af4637d58d4137b
{
	string maxNum = MaxNum;
	if (maxNum.size() >= 5)
	{
		maxNum.resize(4);
	}
}//end function setmaxNum

//get vendor name
<<<<<<< HEAD
string item::getVendorName() 
{
=======
string getVendorName(string VendorNameValue) 
{
	string VendorName = VendorNameValue;
>>>>>>> f4d2595d0514d3ecc0e4be9f5af4637d58d4137b
	return VendorName;
}//end function getvendorName

//set size for vendor name up to 16 chars
<<<<<<< HEAD
void item::setVendorName(string VendorName) 
=======
void setVendorName(string VendorName) 
>>>>>>> f4d2595d0514d3ecc0e4be9f5af4637d58d4137b
{
	string vendorName = VendorName;
	if (vendorName.size() >= 17)
	{
		vendorName.resize(16);
	}
}//end function setvendorName

//get reorder number 
<<<<<<< HEAD
string item::getReOrderNum() 
{
=======
string getReOrderNum(string ReOrderNumValue) 
{
	string ReOrderNum = ReOrderNumValue;
>>>>>>> f4d2595d0514d3ecc0e4be9f5af4637d58d4137b
	return ReOrderNum;
}//end function getreOrderNum

//set size for reOrder number up to 3 chars
<<<<<<< HEAD
void item::setReOrderNum(string ReOrderNum) 
=======
void setReOrderNum(string ReOrderNum) 
>>>>>>> f4d2595d0514d3ecc0e4be9f5af4637d58d4137b
{
	string reOrderNum = ReOrderNum;
	if (reOrderNum.size() >= 4)
	{
		reOrderNum.resize(3);
	}
}//end function setreOrderNum

//get retail price 
<<<<<<< HEAD
string item::getRetPrice() 
{
=======
string getRetPrice(string RetPriceValue) 
{
	string RetPrice = RetPriceValue;
>>>>>>> f4d2595d0514d3ecc0e4be9f5af4637d58d4137b
	return RetPrice;
}//end function getretPrice

//set size for retail price up to 6 chars
<<<<<<< HEAD
void item::setRetPrice(string RetPrice) 
=======
void setRetPrice(string RetPrice) 
>>>>>>> f4d2595d0514d3ecc0e4be9f5af4637d58d4137b
{
	string retPrice = RetPrice;
	if (retPrice.size() >= 7)
	{
		retPrice.resize(6);
	}
}//end function retPrice

//get deptName
<<<<<<< HEAD
string item::getDeptName()  
{
=======
string getDeptName(string DeptNameValue)  
{
	string DeptName = DeptNameValue;
>>>>>>> f4d2595d0514d3ecc0e4be9f5af4637d58d4137b
	return DeptName;
}//end function getdeptName

//set size for dept name up to 12 chars
<<<<<<< HEAD
void item::setDeptName(string DeptName)
=======
void setDeptName(string DeptName)
>>>>>>> f4d2595d0514d3ecc0e4be9f5af4637d58d4137b
{
	string deptName = DeptName;
	if (deptName.size() >= 13)
	{
		deptName.resize(12);
	}
<<<<<<< HEAD
}//end function setdeptName

string item::toString()
{
	stringstream strstrm;
	strstrm << ItNum << " " << ItName << " " << WhlslPrice << " " << NumHand << " " << MaxNum << " " << VendorName << " " << ReOrderNum << " " << RetPrice << " " << DeptName;
	string s = strstrm.str();
	return s;
}
=======
}//end function setdeptName
>>>>>>> f4d2595d0514d3ecc0e4be9f5af4637d58d4137b
