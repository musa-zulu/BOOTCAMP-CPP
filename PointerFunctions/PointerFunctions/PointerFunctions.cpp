// PointerFunctions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

/*
#include <iostream>
using namespace std;

double my_func(int);
void estimate(int lines, double(*pf)(int));

int main()
{
	int code = 40;

	estimate(code, my_func);
	return 0;
}

double my_func(int lns)
{
	return 0.05 * lns;
}

void estimate(int lines, double(*pf)(int))
{
	cout << lines << " lines will take ";
	cout << (*pf)(lines) << " hour(s)\n";
}*/

// Overloaded functions. 
#include <iostream> 
using namespace std;

// function square for int values 
int square(int x)
{
	cout << "square of integer " << x << " is ";
	return x * x;
} // end function square with int argument 

  // function square for double values 
double square(double y)
{
	cout << "square of double " << y << " is ";
	return y * y;
} // end function square with double argument 

int main()
{
	cout << square(7); // calls int version 
	cout << endl;
	cout << square(7.5); // calls double version 
	cout << endl;
}
