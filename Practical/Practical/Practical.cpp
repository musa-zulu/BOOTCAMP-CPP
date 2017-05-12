// Practical.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
#include <cstring>      
using namespace std;

//void Add(char MyArray);
int main()
{

	char MyArray[3][10][3] =
	{
		{ "24", "93", "80", "28", "31", "96", "9", "54", "22", "37" }
		,{ "84", "61", "67", "71", "49", "26", "78", "13", "55", "39" },
		{ "38", "25", "37", "25", "49", "95", "32", "21", "21", "97" }
	};
	int MyArray2[10];

	for (int row = 0; row < 10; row++)
	{
		int sum = 0;
		for (int col = 0; col < 3; col++)
		{
			sum += atoi(MyArray[col][row]);
			MyArray2[row] = sum;
		}	
	}

	cout << "Addition \t\tSum" << endl;
	for (int row = 0; row < 10; row++)
	{
		for (int col = 0; col < 3; col++)
		{
			if (col % 3 == 0)
				cout << endl;
		//	cout << MyArray[col][row] << "\t";
		}
			
	//	cout << MyArray2[row] << " ";
	}
	

	for (int row = 0; row < 10; row++)
	{		
		int temp = 0;
		int temp2 = 0;
		int value = 0;
		int diff = 0;
	
		for (int col = 0; col < 3; col++)
		{
			temp = atoi(MyArray[col][row]);
			if (temp > temp2)
			{
				temp2 = temp;
			}
		}

		for (int i = 0; i < 3; i++)
		{
			int val = atoi(MyArray[i][row]);
			if(temp2 != val)
			{
				diff = temp2 - val;	
			}				
		}

		cout << diff;

		
	}
	return 0;
}

