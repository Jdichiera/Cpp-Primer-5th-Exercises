#include <iostream>

struct Sales_data {
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int main() {
	// Rewriting exercise 1.21
	double price;
	Sales_data sale1;
	Sales_data sale2;

	std::cout << "Please enter two sales with the " 
		<< "same ISBN to see the sum of the sale." << std::endl;
	std::cout << "Sales should be entered in the following " 
		<< "format: ISBN_Number Units_Sold Unit_Cost" << std::endl;

	std::cout << "Sale 1: ";
	std::cin >> sale1.bookNo >> sale1.units_sold >> price;
	sale1.revenue = sale1.units_sold * price;

	std::cout << "Sale 2: ";
	std::cin >> sale2.bookNo >> sale2.units_sold >> price;
	sale2.revenue = sale2.units_sold * price;

	if (sale1.bookNo == sale2.bookNo) {
		unsigned totalUnitsSold = sale1.units_sold + sale2.units_sold;
		double totalRevenue = sale1.revenue + sale2.revenue;

		if (totalUnitsSold != 0) {
			std::cout << "Average unit price: $" 
				<< totalRevenue / totalUnitsSold << std::endl;
		} else {
			std::cout << "No units sold." << std::endl;
			return 0;
		}
	} else {
		std::cerr << "Sale data entered must be " 
			<< "for the same ISBN number" << std::endl;
			return -1;
	}

	return 0;
}