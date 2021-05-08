#include <iostream>
#include "book_source_files/1/Sales_item.h"

int main() {
	Sales_item sale1;
	Sales_item sale2;
	
	std::cout << "Please enter two sales for the same ISBN in the "
			<< "following format: ISBN UNITS_SOLD PRICE" << std::endl << std::endl;


	std::cout << "Enter data for sale 1: ";
	std::cin >> sale1;

	std::cout << "Enter data for sale 2: ";
	std::cin >> sale2;

	while (sale1.isbn() != sale2.isbn()) {
		std::cout << "The sales should have the " 
			<< "same ISBN. Please enter the sales again." << std::endl;

		std::cout << "Enter data for sale 1: ";
		std::cin >> sale1;

		std::cout << "Enter data for sale 2: ";
		std::cin >> sale2;
	}

	std::cout << "The sum of the sales is in the format" << std::endl
		<< "(ISBN UNITS_SOLD TOTAL_REVENUE AVERAGE_PRICE)" << std::endl;

	std::cout << sale1 + sale2 << std::endl;
	return 0;
}