#include <iostream>
#include "Sales_item.h"

int main() {
	Sales_item sale1;
	Sales_item sale2;

	std::cout << "Please enter sale data in the "
		<< "following format: ISBN UNITS_SOLD PRICE" << std::endl;
	
	std::cout << "Enter data for sale 1: ";
	std::cin >> sale1;

	std::cout << "Enter data for sale 2: ";
	std::cin >> sale2;


	std::cout << "Sale 1: " << sale1 << std::endl;
	std::cout << "Sale 2: " << sale2 << std::endl;

	return 0;
}