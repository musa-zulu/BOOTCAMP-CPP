// Templates.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
/*
#include <iostream>
using namespace std;

// function template prototype
template <typename T>  // or class T
void Swap(T &a, T &b);

int main()
{
	int i = 10;
	int j = 20;
	cout << "i, j = " << i << ", " << j << ".\n";
	Swap(i, j);  // generates void Swap(int &, int &)
	cout << "Now i, j = " << i << ", " << j << ".\n";

	double x = 2.5;
	double y = 8.7;
	cout << "x, y = " << x << ", " << y << ".\n";
	Swap(x, y);  // generates void Swap(double &, double &)
	cout << "Now x, y = " << x << ", " << y << ".\n";
	return 0;
}

// function template definition
template <typename T>  // or class T
void Swap(T &a, T &b)
{
	T temp;   // temp a variable of type T
	temp = a;
	a = b;
	b = temp;
}
*/

#include <iostream>
using namespace std;
template <typename T>     // original template
void Swap(T &a, T &b);

template <typename T>     // new template
void Swap(T *a, T *b, int n);

void Show(int a[]);
const int Lim = 8;
int main()
{

	int i = 10, j = 20;
	cout << "i, j = " << i << ", " << j << ".\n";
	Swap(i, j);              // matches original template
	cout << "Now i, j = " << i << ", " << j << ".\n";

	int d1[Lim] = { 0,7,2,4 };
	int d2[Lim] = { 1,7,2,0 };

	Show(d1);
	Show(d2);
	Swap(d1, d2, Lim);        // matches new template
	Show(d1);
	Show(d2);
	return 0;
}

template <typename T>
void Swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <class T>
void Swap(T a[], T b[], int n)
{
	T temp;
	for (int i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}

void Show(int a[])
{
	cout << a[0] << a[1] << "/";
	cout << a[2] << a[3] << "/";
	for (int i = 4; i < Lim; i++)
		cout << a[i];
	cout << endl;
}