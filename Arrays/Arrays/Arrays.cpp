// Arrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

/*#include <iostream> 
using namespace std;
int main()
{
	int my_array[3];    // creates array with three elements 
	my_array[0] = 7;    // assign value to first element 
	my_array[1] = 8;
	my_array[2] = 6;

	int my_value[3] = { 20, 30, 5 }; // create, initialize array 
	cout << my_array[0] + my_array[1] + my_array[2] << endl;
	cout << my_array[1] << " my_array costs ";
	cout << my_value[1] << ".\n";
	int total = my_array[0] * my_value[0] + my_array[1] * my_value[1];
	total = total + my_array[2] * my_value[2];
	cout << total << " cents.\n";

	cout << "\nSize of my_array array = " << sizeof my_array;
	cout << " bytes.\n";
	cout << "Size of one element = " << sizeof my_array[0];
	cout << " bytes.\n";
	cin.get();
	return 0;
}*/

/*#include <iostream> 
#include <iomanip> 
using namespace std;

int main()
{
	int n[10]; // n is an array of 10 integers 

			   // initialize elements of array n to 0 
	for (int i = 0; i < 10; ++i)
		n[i] = i*2; // set element at location i to 0 

	cout << "Element" << setw(13) << "Value" << endl;

	// output each array element's value 
	for (int j = 0; j < 10; ++j)
		cout << setw(7) << j << setw(13) << n[j] << endl;
}*/

/*#include <iostream> 
#include <iomanip> 
using namespace std;

int main()
{
	// use initializer list to initialize array n 
	int n[10] = { 32, 27, 64, 18, 95, 14, 90, 70, 60, 37 };

	cout << "Element" << setw(13) << "Value" << endl;

	// output each array element's value 
	for (int i = 0; i < 10; ++i)
		cout << setw(7) << i << setw(13) << n[i] << endl;
}*/

#include <iostream> 
const int Cities = 5;
const int Years = 4;
int main()
{
	using namespace std;
	const char * cities[Cities] =   // array of pointers 
	{                               // to 5 strings 
		"A",
		"AA",
		"AAA",
		"AAAA",
		"AAAAA"
	};

	int maxtemps[Years][Cities] =   // 2-D array 
	{
		{ 96, 100, 87, 101, 105 },   // values for maxtemps[0] 
		{ 96, 98, 91, 107, 104 },    // values for maxtemps[1] 
		{ 97, 101, 93, 108, 107 },   // values for maxtemps[2] 
		{ 98, 103, 95, 109, 108 }    // values for maxtemps[3] 
	};

	cout << "Maximum temperatures for 2008 - 2011\n\n";
	for (int city = 0; city < Cities; ++city)
	{
		cout << cities[city] << ":\t";
		for (int year = 0; year < Years; ++year)
			cout << maxtemps[year][city] << "\t";
		cout << endl;
	}
	return 0;
}