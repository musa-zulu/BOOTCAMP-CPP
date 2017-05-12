// Files.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

/*
#include <iostream>
#include <fstream>                  // for file I/O
using namespace std;
int main()
{
	char automobile[50];
	int year;
	double a_price;

	ofstream outFile;               // create object for output
	outFile.open("test.txt");    // associate with a file

	cout << "Enter the make and model: ";
	cin.getline(automobile, 50);
	cout << "Enter the model year: ";
	cin >> year;
	cout << "Enter the price: ";
	cin >> a_price;

	// display information
	cout << fixed;
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	cout << "Model: " << automobile << endl;
	cout << "Year: " << year << endl;
	cout << "$" << a_price << endl;

	//File
	outFile << fixed;
	outFile.precision(2);
	outFile.setf(ios_base::showpoint);
	outFile << "Model: " << automobile << endl;
	outFile << "Year: " << year << endl;
	outFile << "$" << a_price << endl;

	outFile.close();                // done with file
	return 0;
}
*/

#include <iostream>
#include <fstream>        
#include <cstdlib>        
using namespace std;
const int SIZE = 60;
int main()
{
	char filename[SIZE];
	ifstream inFile;        // object for handling file input

	cout << "Enter file name:";
	cin.getline(filename, SIZE);
	inFile.open(filename);  // associate inFile with a file
	if (!inFile.is_open())  // if failed to open file, error out
	{
		cout << "Could not open the file " << filename << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}
	double value;
	double sum = 0.0;
	int count = 0;          // number of items read

	inFile >> value;        // get first value
	while (inFile.good())   // while input good and not at EOF
	{
		++count;            // one more item read
		sum += value;
		inFile >> value;    // get next value
	}
	if (inFile.eof())
		cout << "End of file reached.\n";
	else if (inFile.fail())
		cout << "Input terminated by data mismatch.\n";
	else
		cout << "Input terminated for unknown reason.\n";

	if (count == 0)
		cout << "No data processed.\n";
	else
	{
		cout << "Items read: " << count << endl;
		cout << "Sum: " << sum << endl;
		cout << "Average: " << sum / count << endl;
	}
	inFile.close();         // finished with the file
	return 0;
}