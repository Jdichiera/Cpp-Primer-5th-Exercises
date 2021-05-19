// Rewriting exercise 2.41.1 with using statements
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::string;

struct Sales_data {
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int main() {
	// Rewriting exercise 1.21
	double price;
	Sales_data sale1;
	Sales_data sale2;

	cout << "Please enter two sales with the " 
		<< "same ISBN to see the sum of the sale data objects." << endl;
	cout << "Sales should be entered in the following " 
		<< "format: ISBN_Number Units_Sold Unit_Cost" << endl;

	cout << "Sale 1: ";
	cin >> sale1.bookNo >> sale1.units_sold >> price;
	sale1.revenue = sale1.units_sold * price;

	cout << "Sale 2: ";
	cin >> sale2.bookNo >> sale2.units_sold >> price;
	sale2.revenue = sale2.units_sold * price;

	if (sale1.bookNo == sale2.bookNo) {
		unsigned totalUnitsSold = sale1.units_sold + sale2.units_sold;
		double totalRevenue = sale1.revenue + sale2.revenue;

		if (totalUnitsSold != 0) {
			cout << "Average unit price: $" 
				<< totalRevenue / totalUnitsSold << endl;
		} else {
			cout << "No units sold." << endl;
			return 0;
		}
	} else {
		cerr << "Sale data entered must be " 
			<< "for the same ISBN number" << endl;
			return -1;
	}

	return 0;
}