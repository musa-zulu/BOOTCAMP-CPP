// Strings.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
/*#include <iostream> 
#include <cstring>  // for the strlen() function 
using namespace std;
int main()
{
	const int Size = 15;
	char name1[Size];               // empty array 
	char name2[Size] = "java2s.com";  // initialized array 

	cout << "I'm " << name2;
	cout << "What's your name?\n";
	cin >> name1;
	cout << name1 << ", your name has ";
	cout << strlen(name1) << " letters and is stored\n";
	cout << "in an array of " << sizeof(name1) << " bytes.\n";
	cout << "Your initial is " << name1[0] << ".\n";
	name2[3] = '\0';                // set to null character 
	cout << "Here are the first 3 characters of my name: ";
	cout << name2 << endl;

	cout << name2[4] << endl;
	//cout << name2 +4<< endl;
	cout << name2 + 16 << endl;
	return 0;
}*/


/*#include <iostream> 
using namespace std;
int main()
{
	const int SIZE = 20;
	char name[SIZE];
	char dessert[SIZE];

	cout << "Enter your name:\n";
	cin >> name;
	cout << "Enter your favorite dessert:\n";
	cin >> dessert;
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
	return 0;
}
*/

/*#include <iostream> 
using namespace std;
int main()
{
	const int SIZE = 20;
	char name[SIZE];
	char dessert[SIZE];

	cout << "Enter your name:\n";
	cin.getline(name, SIZE);  // reads through newline 
	cout << "Enter your favorite dessert:\n";
	cin.getline(dessert, SIZE);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
	return 0;
}*/

/*
#include <iostream> 
using namespace std;
int main()
{
	const int SIZE = 20;
	char name[SIZE];
	char dessert[SIZE];

	cout << "Enter your name:\n";
	cin.get(name, SIZE).get();    // read string, newline 
	cout << "Enter your favorite dessert:\n";
	cin.get(dessert, SIZE).get();
	cout << dessert;
	cout << " for you, " << name << ".\n";
	return 0;
}*/


#include <iostream> 
using namespace std;
int main()
{
	int my_int, my_result, my_value;

	// adds the values as double then converts the result to int 
	my_int = 19.99 + 11.99;

	// these statements add values as int 
	my_result = (int) 19.99 + (int) 11.99;   // old C syntax 
	//my_value = static_cast<int>(19.99) + static_cast<int>(11.99);  
	my_value = int(19.99) + (11.99);  // new C++ syntax 
	cout << "my_int = " << my_int << ", my_result = " << my_result;
	cout << ", my_value = " << my_value << endl;

	char ch = 'Z';
	cout << "The code for " << ch << " is ";    // print as char 
	cout << int(ch) << endl;                    // print as int 
	cout << "Yes, the code is ";
	cout << static_cast<int>(ch) << endl;       // using static_cast 
	return 0;
}