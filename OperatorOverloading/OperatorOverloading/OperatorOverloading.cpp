// OperatorOverloading.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Time.h"
using std::cout;
using std::endl;

int main()
{

	Time movie_time(4, 35);
	Time dinner_time(2, 47);
	Time total;
	Time diff;
	Time adjusted;

	cout << "movie_time time = ";
	movie_time.Show();
	cout << endl;

	cout << "dinner_time time = ";
	dinner_time.Show();
	cout << endl;

	cout << "total work time = ";
	total = movie_time + dinner_time;   // use operator+() 
	total.Show();
	cout << endl;

	diff = movie_time - dinner_time;    // use operator-() 
	cout << "movie_time time - dinner_time time = ";
	diff.Show();
	cout << endl;

	adjusted = total * 1.5;          // use operator+() 
	cout << "adjusted work time = ";
	adjusted.Show();
	cout << endl;

	return 0;
}

