/* ***************************************************************************

Programmer: Todd Pickell

Filename: node.h

Requirements: None

Includes: 
#include "StdAfx.h"

Course: Programming III

Date: 9/15/12

Assignment: Week 5: Linked List

Description: write a program that demonstrates using a linked list

************************************************************************* */

struct node
{
	int data;
	node *nextLink;
	node *previousLink;
};