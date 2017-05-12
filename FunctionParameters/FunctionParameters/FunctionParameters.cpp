// FunctionParameters.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

/*
#include <iostream>
using namespace std;

const int SIZE = 8;
int sum_arr(const int * begin, const int * end);      // prototype
int main()
{
	int cookies[SIZE] = { 1,2,4,8,16,32,64,128 };
	int sum = sum_arr(cookies, cookies + SIZE);
	cout << "Total cookies eaten: " << sum << "\n";
	sum = sum_arr(cookies, cookies + 3);        // first 3 elements
	cout << "First three eaters ate " << sum << " cookies.\n";
	sum = sum_arr(cookies + 4, cookies + 8);    // last 4 elements
	cout << "Last four eaters ate " << sum << " cookies.\n";
	return 0;
}

// return the sum of an integer array
int sum_arr(const int * begin,const int* end)
{
	const int * pt;
	int total = 0;

	for (pt = begin; pt != end; pt++)
		total = total + *pt;
	return total;
}
*/

#include <iostream>
using namespace std;
char * buildstr(char c, int n);
int main()
{
	int times;
	char ch;

	cout << "Enter a character: ";
	cin >> ch;
	cout << "Enter an integer: ";
	cin >> times;
	char *ps = buildstr(ch, times);
	cout << ps << endl;
	delete[] ps;                   // free memory
	ps = buildstr('+', 20);         // reuse pointer
	cout << ps << "-DONE-" << ps << endl;
	delete[] ps;                   // free memory
	return 0;
}
// builds string of characters
char * buildstr(char c, int n)
{
	char * pstr = new char[n + 1];
	pstr[n] = '\0';         // terminate string
	while (n-- > 0)
		pstr[n] = c;        // fill rest of string
	return pstr;
}