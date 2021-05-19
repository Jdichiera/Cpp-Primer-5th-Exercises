#include <iostream>
#include <sales_data.h>

int main() {
	// Rewriting exercise 1.22
	double price;
	double averagePrice;
	Sales_data totalSale;
	Sales_data currentSale;
	
	std::cout << "Please enter all sales for the same ISBN in the "
			<< "following format: ISBN UNITS_SOLD PRICE" << std::endl;
	std::cout << "A sale entered for a different ISBN " 
		<< "will end the program and print out the total " 
		<<  "sales entered for the initial ISBN." << std::endl << std::endl;

	std::cout << "Enter data for the sale: ";
	std::cin >> currentSale.bookNo >> currentSale.units_sold >> price;
	currentSale.revenue = currentSale.units_sold * price;

	/*
		We only want to count sales with the same ISBN so we save the ISBN 
		entered and match on it. When the sales ISBN entered does not match the
		initial ISBN we do not have a match and the while loop ends.
	*/
	totalSale.bookNo = currentSale.bookNo;

	while (currentSale.bookNo == totalSale.bookNo) {
		totalSale.revenue += currentSale.revenue;
		totalSale.units_sold += currentSale.units_sold;

		std::cout << "Enter data for the next sale: ";
		std::cin >> currentSale.bookNo >> currentSale.units_sold >> price;
		currentSale.revenue = currentSale.units_sold * price;
	}

	/*
		We will always have at least one sale so there is no need to make sure
		that the sales are greater than 0 before we find the average.
	*/
	averagePrice = totalSale.revenue / totalSale.units_sold;


	std::cout << "Total sales for ISBN: " << totalSale.bookNo << std::endl;
	std::cout << "(UNITS_SOLD TOTAL_REVENUE AVERAGE_PRICE)" << std::endl;
	std::cout << totalSale.units_sold << ' ' 
		<< totalSale.revenue << ' ' << averagePrice << std::endl;
	
	return 0;
}