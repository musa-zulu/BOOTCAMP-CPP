#include "stdafx.h"
#include "Product.h"


Product::Product()
{
}


Product::~Product()
{
}

void Product::acquire(const std::string & co, long n, double pr)
{
	company = co;
	if (n < 0)
	{
		std::cout << "Number of shares can't be negative; "
			<< company << " shares set to 0.\n";
		shares = 0;
	}
	else
		shares = n;
	normal_val = pr;
	set_tot();
}

void Product::buy(long num, double price)
{
	shares += num;
	normal_val = price;
	set_tot();
}

void Product::sell(long num, double price)
{
	using std::cout;
	shares -= num;
	normal_val = price;
	set_tot();
}

void Product::update(double price)
{
	normal_val = price;
	set_tot();
}

void Product::show()
{
	std::cout << "Company: " << company
		<< "  Shares: " << shares << '\n'
		<< "  Share Price: $" << normal_val
		<< "  Total Worth: $" << discount_val << '\n';
}
