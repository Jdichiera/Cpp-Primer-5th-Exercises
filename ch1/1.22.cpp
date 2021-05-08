#include <iostream>
#include <string>
#include "Sales_item.h"

int main() {
	std::string isbn;
	Sales_item totalSale;
	Sales_item currentSale;
	
	std::cout << "Please enter all sales for the same ISBN in the "
			<< "following format: ISBN UNITS_SOLD PRICE" << std::endl;
	std::cout << "Sales entered for a different ISBN "
		<< "than the first entry will be ignored" << std::endl << std::endl;

	std::cout << "Enter data for the sale: ";
	std::cin >> currentSale;

	/*
		We only want to sum matching ISBN numbers so in the initial run
		we will capture the ISBN in a variable to match on later.
	*/
	isbn = currentSale.isbn();

	/*
		While we have a matching ISBN number we will continue allowing the
		user to enter sales and sum the sales in the totalSales variable.
		We are looping by asking the user for a new sale at the bottom of the 
		while loop. We could also loop on the entry of the sale :
		' while(std::cin >> currentSale) ' but that could make things more
		complicated when we have to set and compare ISBNs inside of the while
		loop.
	*/
	while (currentSale.isbn() == isbn) {
		totalSale += currentSale;

		std::cout << "Enter data for the next sale: ";
		std::cin >> currentSale;
	}


	std::cout << "Total sales for ISBN: " << isbn << std::endl;
	std::cout << "(UNITS_SOLD TOTAL_REVENUE AVERAGE_PRICE)" << std::endl;
	std::cout << totalSale << std::endl;
	
	return 0;
}