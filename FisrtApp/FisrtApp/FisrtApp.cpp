// FisrtApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>                           // a PREPROCESSOR directive 
using std::cout;                      // make definitions visible 
using std::cin;
using std::endl;
int main()                                    // function header 
{                                            // start of function body 	
	std::cout << "this is a test.";  // message 
	cout << endl;                             // start a new line 
	cout << "hi!" << endl;   // more output 
	cin.get();									//To make the window stay open until you strike a key by adding the following line of code before the return statement:
	return 0;                                 // terminate main() 
}
