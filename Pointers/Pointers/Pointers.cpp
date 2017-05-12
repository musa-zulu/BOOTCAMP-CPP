// Pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

/*
#include <iostream> 
int main()
{
	using namespace std;
	int updates = 6;        // declare a variable 
	int * p_updates;        // declare pointer to an int 
	p_updates = &updates;   // assign address of int to pointer 

							// express values two ways 
	cout << "Values: updates = " << updates;
	cout << ", *p_updates = " << *p_updates << endl;

	// express address two ways 
	cout << "Addresses: &updates = " << &updates;
	cout << ", p_updates = " << p_updates << endl;

	// use pointer to change value 
	*p_updates = *p_updates + 1;
	cout << "Now updates = " << updates << endl;
	cout << "p_updates : " << *p_updates << endl;
	return 0;
}

*/

/*
#include <iostream> 
using namespace std;
int main()
{
	int nights = 1001;
	int * pt = new int;         // allocate space for an int 
	*pt = 1001;                 // store a value there 

	cout << "nights value = ";
	cout << nights << ": location " << &nights << endl;
	cout << "int ";
	cout << "value = " << *pt << ": location = " << pt << endl;
	double * pd = new double;   // allocate space for a double 
	*pd = 10000001.0;           // store a double there 

	cout << "double ";
	cout << "value = " << *pd << ": location = " << pd << endl;
	cout << "location of pointer pd: " << &pd << endl;
	cout << "size of pt = " << sizeof(pt);
	cout << ": size of *pt = " << sizeof(*pt) << endl;
	cout << "size of pd = " << sizeof pd;
	cout << ": size of *pd = " << sizeof(*pd) << endl;

	delete pt;
	delete pd;

	pt = NULL;
	pd = NULL;

	return 0;
}
*/
/*
#include <iostream> 
using namespace std;
int main()
{
	double wages[3] = { 1.0, 2.0, 3.0 };
	short stacks[3] = { 3, 2, 1 };

	// two ways to get the address of an array 
	double * pw = wages;     // name of an array = address 
	short * ps = &stacks[0]; // or use address operator 

							 // with array element 
	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	pw = pw + 1;
	//add 1 to the pw pointer 
	cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";
	cout << "ps = " << ps << ", *ps = " << *ps << endl;
	ps = ps + 1;

	//add 1 to the ps pointer
	cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";

	//access two elements with array notation
	cout << "stacks[0] = " << stacks[0]
		<< ", stacks[1] = " << stacks[1] << endl;
	//access two elements with pointer notation
	cout << "*stacks = " << *stacks
		<< ", *(stacks + 1) =  " << *(stacks + 1) << endl;

	cout << sizeof(wages) << " = size of wages array\n";
	cout << sizeof(pw) << " = size of pw pointer (size of pointer)\n";
	
	return 0;
}
*/

/*
#include <iostream> 
#include <cstring>              // declare strlen(), strcpy() 
using namespace std;

int main()
{
	char animal[20] = "C++";   // animal holds bear 
	const char * bird = "Java"; // bird holds address of string 
	char * ps;                  // uninitialized 

	cout << animal << " and ";  // display bear 
	cout << bird << "\n";       // display wren 

	cout << "Enter a kind of animal: ";
	cin >> animal;              // ok if input < 20 chars 

	ps = animal;                // set ps to point to string 
	cout << ps << "!\n";       // ok, same as using animal 

							   //Before using strcpy()
	cout << animal << " at " << (int *)animal << endl;
	cout << ps << " at " << (int *)ps << endl;

	ps = new char[strlen(animal) + 1];  // get new storage 
	strcpy_s(ps,(strlen(animal) + 1), animal);         // copy string to new storage 
	cout << "After using strcpy():\n";
	cout << animal << " at " << (int *)animal << endl;
	cout << ps << " at " << (int *)ps << endl;
	delete[] ps;
	return 0;
}
*/

/*
#include <iostream> 
using namespace std;
struct Product   // structure definition 
{
	char name[20];
	float volume;
	double price;
};
int main()
{
	Product * ps = new Product; // allot memory for structure 
	cout << "Enter name of Product item: ";
	cin.get(ps -> name, 20);            // method 1 for member access 
	cout << "Enter volume in cubic feet: ";
	cin >> (*ps).volume;              // method 2 for member access 
	cout << "Enter price: $";
	cin >> ps->price;
	cout << "Name: " << (*ps).name << endl;              // method 2 
	cout << "Volume: " << ps->volume << " cubic feet\n"; // method 1 
	cout << "Price: $" << ps->price << endl;             // method 1 
	delete ps;                        // free memory used by structure 
	return 0;
}
*/


#include <iostream> 
#include <cstring>      // or string.h 
using namespace std;
char * getname(void);   // function prototype 
int main()
{
	char * name;        // create pointer but no storage 

	name = getname();   // assign address of string to name 
	cout << name << " at " << (int *)name << "\n";
	delete[] name;     // memory freed 

	name = getname();   // reuse freed memory 
	cout << name << " at " << (int *)name << "\n";
	delete[] name;     // memory freed again 
	return 0;
}
char * getname()        // return pointer to new string 
{
	char temp[80];      // temporary storage 
	cout << "Enter last name: ";
	cin >> temp;
	char * pn = new char[strlen(temp) + 1];
	strcpy_s(pn, (strlen(temp) + 1),temp);   // copy string into smaller space 

	return pn;          // temp lost when function ends 
}