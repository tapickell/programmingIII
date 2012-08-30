/* ***************************************************************************

Programmer: Todd Pickell

Filename: fileHandler.h

Requirements: None

Includes: None

Course: Programming III

Date: 8/17/12

Assignment: Week 2: File Processing

Description: write a program that demonstrates creating a file, reading file contents and writing to a file

************************************************************************* */

#include "StdAfx.h"
#include "item.h"

using namespace std;

item::item()
{

};
item::item(int sku, string name, string dept, string vendor, int max, int reorder, int onhand)
{
	itemSKU = sku;
	itemName = name;
	itemDept = dept;
	vendorName = vendor;
	maxNumb = max;
	reorderNumb = reorder;
	onHandNumb = onhand;
}

item::~item(void)
{
}

string item::toString()
{
	stringstream ss;
	ss << itemSKU << " " << itemName << " " << itemDept << " " << vendorName << "   " << maxNumb << "    " << reorderNumb << "    " << onHandNumb;
	string s = ss.str();
	return s;
}

int item::ItemSKU() const { return itemSKU; }
void item::ItemSKU(int val) { itemSKU = val; }

string item::ItemName() const { return itemName; }
void item::ItemName(string val) { itemName = val; }

string item::VendorName() const { return vendorName; }
void item::VendorName(string val) { vendorName = val; }

int item::MaxNumb() const { return maxNumb; }
void item::MaxNumb(int val) { maxNumb = val; }

int item::ReorderNumb() const { return reorderNumb; }
void item::ReorderNumb(int val) { reorderNumb = val; }

int item::OnHandNumb() const { return onHandNumb; }
void item::OnHandNumb(int val) { onHandNumb = val; }