// FloatingPoint.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
using namespace std;
int main()
{
	cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point,  makes cout print floats with a fixed number of decimals
	float tub = 10.0 / 3.0;     // good to about 6 places 
	double mint = 10.0 / 3.0;   // good to about 15 places 
	const float million = 1.0e6;

	cout << "tub = " << tub;
	cout << ", a million tubs = " << million * tub;
	cout << 10 * million * tub << endl;

	cout << "mint = " << mint << " and a million mints = ";
	cout << million * mint << endl;
	cin.get();
	return 0;
}

