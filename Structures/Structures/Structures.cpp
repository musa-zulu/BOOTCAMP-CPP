// Structures.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream> 
using namespace std;
struct Product
{
	char name[20];
	float volume;
	double price;
};
int main()
{
	Product guests[2] =          // initializing an array of structs 
	{
		{ "A", 0.5, 21.99 },      // first structure in array 
		{ "B", 2,   5.99 }  // next structure in array 
	};

	cout << "The guests " << guests[0].name << " and " << guests[1].name
		<< "\nhave a combined volume of "
		<< guests[0].volume + guests[1].volume << " cubic feet.\n"
		<< "have a price of " << guests[0].price + guests[1].price << endl;
	return 0;
}