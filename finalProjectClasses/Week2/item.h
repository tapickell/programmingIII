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

using namespace std;

#pragma once
class item
{
public:
	item();
	item(int sku, string name, string dept, string vendor, int max, int reorder, int onhand);
	~item(void);
	string toString();

	int ItemSKU() const;
	void ItemSKU(int val);
	string ItemName() const;
	void ItemName(string val);
	string VendorName() const;
	void VendorName(string val);
	int MaxNumb() const;
	void MaxNumb(int val);
	int ReorderNumb() const;
	void ReorderNumb(int val);
	int OnHandNumb() const;
	void OnHandNumb(int val);

private:
	int itemSKU;
	string itemName;
	string itemDept;
	string vendorName;
	int maxNumb;
	int reorderNumb;
	int onHandNumb;
};