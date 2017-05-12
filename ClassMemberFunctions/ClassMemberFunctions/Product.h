#pragma once
#include <iostream>
#include <string>

class Product
{
private:
	std::string company;
	long shares;
	double normal_val;
	double discount_val;
	void set_tot() { discount_val = shares * normal_val; }
public:
	Product();
	~Product();
	void acquire(const std::string & co, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
};

