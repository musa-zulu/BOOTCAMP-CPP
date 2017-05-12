// Functions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//#include <iostream> 
//using std::cout;
//using std::cin;
//using std::endl;
/*#include <iostream> 
#include <climits>              // use limits.h for older systems 
using namespace std;
int main()
{
	int examples;            // declare an integer variable 

	/*examples = 25;            // assign a value to the variable 
	cout << "I have ";
	cout << examples;        // display the value of the variable 
	cout << " examples.";
	cout << endl;
	examples = examples - 1;  // modify the variable 
	cout << "I have " << examples << " examples." << endl;
	*/

	/*cout << "How many examples do you have?" << endl;
	cin >> examples;                // C++ input 
	cout << "Here are two more. ";
	examples = examples + 2;

	// the next line concatenates output 
	cout << "Now you have " << examples << " examples." << endl;
	*/

	/*int x;
	const int Months(12);
	cout << Months << endl;


	cout << "The expression x = 100 has the value ";
	cout << (x = 100) << endl;
	cout << "Now x = " << x << endl;
	cout << "The expression x < 3 has the value ";
	cout << (x < 3) << endl;
	cout << "The expression x > 3 has the value ";
	cout << (x > 3) << endl;
	cout.setf(ios_base::boolalpha);   //a newer C++ feature 
	cout << "The expression x < 3 has the value ";
	cout << (x < 3) << endl;
	cout << "The expression x > 3 has the value ";
	cout << (x > 3) << endl;*/

	/*int apple_count{ 15 };                            // Number of apples    you can assin private values in a function or constructor but using apple_count(15) u can't
	int orange_count{ 5 };                            // Number of oranges 
	int total_fruit{ apple_count + orange_count };    // Total number of fruit 

	std::cout << "The value of apple_count is " << apple_count << std::endl;
	std::cout << "The value of orange_count is " << orange_count << std::endl;
	std::cout << "The value of total_fruit is " << total_fruit << std::endl;

	short MyShort(10);
	long MyLong(100);
	long long MyVeryLong(MyShort * MyLong);

	std::cout << "MyShort size = " << sizeof(MyShort) << " bytes" << std::endl;
	std::cout << "MyLong size = " << sizeof(MyLong) << " bytes" << std::endl;
	std::cout << "MyVeryLong size = " << sizeof(MyVeryLong) << " bytes" << std::endl;*/

	/*using namespace std;
	int n_int = INT_MAX;        // initialize n_int to max int value 
	short n_short = SHRT_MAX;   // symbols defined in climits file 
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	// sizeof operator yields size of type or of variable 
	cout << "int is " << sizeof(int) << " bytes." << endl;
	cout << "short is " << sizeof(n_short) << " bytes." << endl;
	cout << "long is " << sizeof(n_long) << " bytes." << endl;
	cout << "long long is " << sizeof(n_llong) << " bytes." << endl;
	cout << endl;

	cout << "Maximum values:" << endl;
	cout << "int: " << n_int << endl;
	cout << "short: " << n_short << endl;
	cout << "long: " << n_long << endl;
	cout << "long long: " << n_llong << endl << endl;

	cout << "Minimum int value = " << INT_MIN << endl;
	cout << "Bits per byte = " << CHAR_BIT << endl;


	std::cin.get();

	return 0;
}*/


#include <iostream> 
#include <climits>  // defines INT_MAX as largest int value 
#define ZERO 0      // makes ZERO symbol for 0 value 

int main()
{
	using namespace std;
	short s = SHRT_MAX;     // initialize a variable to max value 
	unsigned short sue = s;

	cout << "s has " << s << " dollars and Sue has " << sue <<endl;
	cout << "Add $1 to each account." << endl << "Now ";
	s = s + 1;
	sue = sue + 1;
	cout << "s has " << s << " dollars and Sue has " << sue;
	s = ZERO;
	sue = ZERO;
	cout << "\ns has " << s << " dollars and Sue has " << sue;
	s = s - 1;
	sue = sue - 1;
	cout << "\ns has " << s << " dollars and Sue has " << sue;
	cout << "\nHi!" << endl;
	cin.get();
	return 0;
}
