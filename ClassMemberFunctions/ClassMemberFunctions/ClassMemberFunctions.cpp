// ClassMemberFunctions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Product.h"

#include <iostream> 
int main()
{
	Product computer;
	computer.acquire("NanoSmart", 20, 12.50);
	computer.show();
	computer.buy(15, 18.125);
	computer.show();
	computer.sell(400, 20.00);
	computer.show();
	computer.buy(300000, 40.125);
	computer.show();
	computer.sell(300000, 0.125);
	computer.show();
	return 0;
}