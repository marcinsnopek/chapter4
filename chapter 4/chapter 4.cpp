// chapter 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <list>
#include <string>
#include <iostream>

using namespace std;

void printVector(list <string>& shopList)
{

	for (list <string>::iterator it = shopList.begin(); it!=shopList.end();++it)
	{
		cout << *it << endl;
	}
}

void addElement(list <string>& shopList, string newElement)
{
	shopList.push_back(newElement);
}

void removeLastElement(list <string>& shopList)
{
	shopList.pop_back();
}
void replaceElement(list <string>& shopList, string element)
{
	for (list <string>::iterator it = shopList.begin(); it != shopList.end(); ++it)
	{
		if (*it == element)
		{
			*it = "honey";
		}
	}
}
void removeElement(list <string>& shopList, string element)
{
	for (list <string>::iterator it = shopList.begin(); it != shopList.end(); ++it)
	{
		if (*it == element)
		{
			*it = "";
		}
	}
}


int main()
{
	list <string> shopList;

	shopList.push_back("eggs");
	shopList.push_back("milk");
	shopList.push_back("sugar");
	shopList.push_back("chocolate");
	shopList.push_back("flour");

	cout << "List in the beginning  :" << endl;
	printVector(shopList);
	cout << endl;

	removeLastElement(shopList);
	cout << "List after remove last element : " << endl;
	printVector(shopList);
	cout << endl;

	cout << "List after append new item " << endl;
	addElement(shopList, "cofee");
	printVector(shopList);
	cout << endl;

	cout << "After replace sugar by honey : " << endl;
	replaceElement(shopList, "sugar");
	printVector(shopList);
	cout << endl;

	cout << "After remove milk from the vector : " << endl;
	removeElement(shopList, "milk");
	printVector(shopList);
	cout << endl;

	system("PAUSE");
	return 0;
}


