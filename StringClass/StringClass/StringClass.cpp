// StringClass.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


/*#include <iostream> 
#include <string>               // make string class available 
using namespace std;
int main()
{
	char my_char1[20];            // create an empty array 
	char my_char2[20] = "C++"; // create an initialized array 
	string str1;                // create an empty string object 
	string str2 = "Java";    // create an initialized string 

	cout << "Enter a string: ";
	cin >> my_char1;
	cout << "Enter another string: ";
	cin >> str1;                // use cin for input 
	cout << my_char1 << " " << my_char2 << " "
		<< str1 << " " << str2 // use cout for output 
		<< endl;
	cout << "The third letter in " << my_char2 << " is "
		<< my_char2[2] << endl;
	cout << "The third letter in " << str2 << " is "
		<< str2[2] << endl;    // use array notation 

	return 0;
}*/

#include <iostream> 
#include <string>               // make string class available 
#include <cstring>              // C-style string library 
using namespace std;
int main()
{
	char my_char1[20];
	char my_char2[20] = "java2s.com";
	string str1;
	string str2 = "C++";

	str1 = str2;                // copy str2 to str1 
	strcpy_s(my_char1, my_char2); // copy my_char2 to my_char1 

	str1 += " vs ";              // add to the end of str1 
	strcat_s(my_char1, " Java");   // add to the end of my_char1 

	int len1 = str1.size();     // obtain length of str1 
	int len2 = strlen(my_char1);// obtain length of my_char1 

	cout << "The string " << str1 << " contains "
		<< len1 << " characters.\n";
	cout << "The string " << my_char1 << " contains "
		<< len2 << " characters.\n";

	return 0;
}