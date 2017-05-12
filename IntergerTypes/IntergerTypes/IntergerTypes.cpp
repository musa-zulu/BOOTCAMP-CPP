// IntergerTypes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//#include <iostream> 
//int main()
//{
//	using namespace std;
//	int my_decimal = 42;     // decimal integer literal 
//	int my_hexi = 0x42;      // hexadecimal integer literal 
//	int my_oct = 042;        // octal integer literal 
//
//	cout << "my_decimal = " << my_decimal << " (42 in decimal)\n";
//	cout << "my_hexi = " << my_hexi << " (0x42 in hex)\n";
//	cout << "my_oct = " << my_oct << " (042 in octal)\n";
//	cin.get();
//	return 0;
//}

//#include <iostream>                    // For output to the screen 
//int main()
//{
//	unsigned int yards = 10, feet = 10, inches = 10;
//
//	const unsigned int feet_per_yard{ 3U };
//	const unsigned int inches_per_foot{ 12U };
//	unsigned int total_inches{};
//	total_inches = inches + inches_per_foot*(yards*feet_per_yard + feet);
//	std::cout << "The distances corresponds to " << total_inches << " inches.\n";
//
//	std::cout << "Enter a distance in inches: ";
//	std::cin >> total_inches;
//	feet = total_inches / inches_per_foot;
//	inches = total_inches%inches_per_foot;
//	yards = feet / feet_per_yard;
//	feet = feet%feet_per_yard;
//	std::cout << "The distances corresponds to "
//		<< yards << " yards "
//		<< feet << " feet "
//		<< inches << " inches." << std::endl;
//	std::cin.get();
//	return 0;
//}

//c-char-type
#include <iostream> 
int main()
{
	using namespace std;
	cout << "\ahi \"hey\" is now activated!\n";
	cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
	long code;
	cin >> code;
	cout << "\aYou entered " << code << "...\n";
	cout << "\ahi! !\n";
	return 0;
}