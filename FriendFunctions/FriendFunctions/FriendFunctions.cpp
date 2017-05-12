// FriendFunctions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "String.h"

const int SIZE = 10;
const int MaxLen = 81;
using std::cout;
using std::cin;
using std::endl;
int main()
{
	String name;
	cout << "Your name:\n>> ";
	cin >> name;

	cout << name << ", please enter up to " << SIZE
		<< " short sayings < empty line to quit>:\n";
	String sayings[SIZE];     // array of objects 
	char temp[MaxLen];          // temporary string storage 
	int i;
	for (i = 0; i < SIZE; i++)
	{
		cout << i + 1 << ": ";
		cin.get(temp, MaxLen);
		while (cin && cin.get() != '\n')
			continue;
		if (!cin || temp[0] == '\0')    // empty line? 
			break;              // i not incremented 
		else
			sayings[i] = temp;  // overloaded assignment 
	}
	int total = i;              // total # of lines read 

	if (total > 0)
	{
		cout << "Here are your sayings:\n";
		for (i = 0; i < total; i++)
			cout << sayings[i][0] << ": " << sayings[i] << endl;

		int shortest = 0;
		int first = 0;
		for (i = 1; i < total; i++)
		{
			if (sayings[i].length() < sayings[shortest].length())
				shortest = i;
			if (sayings[i] < sayings[first])
				first = i;
		}
		cout << sayings[shortest] << endl;;
		cout << sayings[first] << endl;
		cout << String::HowMany() << " String objects. \n";
	}
	return 0;
}

