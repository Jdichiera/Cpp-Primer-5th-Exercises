// Rewriting exercise 2.41.3 with using statements
#include <iostream>
#include <sales_data.h>

using std::cin;
using std::cout;
using std::endl;

int main() {
	// Rewriting exercise 1.23
	double price;
	Sales_data sale1;
	Sales_data sale2;
	Sales_data sale3;
	Sales_data sale4;
	Sales_data sale5;
	Sales_data currentSale;
	int isbn1TransactionCount = 1;
	int isbn2TransactionCount = 1;
	int isbn3TransactionCount = 1;
	int isbn4TransactionCount = 1;
	int isbn5TransactionCount = 1;

	/*
		we could simplify the sale entry by only recording the ISBN number. 
		I made the sale data input the same as it was in previous exercises 
		so it was less confusing to the user but I did not calculate the 
		revenue like I did in previous exercises simply because we do not need 
		that data.
	*/
	cout << "Please enter 5 transactions in the "
			<< "following format: ISBN UNITS_SOLD PRICE" << endl;

	cout << "Enter data for the sale1: ";
	cin >> sale1.bookNo >> sale1.units_sold >> price;

	cout << "Enter data for the sale2: ";
	cin >> sale2.bookNo >> sale2.units_sold >> price;

	cout << "Enter data for the sale3: ";
	cin >> sale3.bookNo >> sale3.units_sold >> price;

	cout << "Enter data for the sale4: ";
	cin >> sale4.bookNo >> sale4.units_sold >> price;

	cout << "Enter data for the sale5: ";
	cin >> sale5.bookNo >> sale5.units_sold >> price;

	cout << "Now enter as many transactions as you would like "
		<< "transactions that have a ISBN number that match one of the " 
		<< "initial 5 transaction ISBN numbers will be tallied to show the " 
		<< "number of transactions for those ISBNs" << endl << endl;

	cout << "Transaction: ";
	
	while (cin >> currentSale.bookNo >> currentSale.units_sold >> price) {
		if (currentSale.bookNo == sale1.bookNo) {
			isbn1TransactionCount++;
		}

		if (currentSale.bookNo == sale2.bookNo) {
			isbn2TransactionCount++;
		}

		if (currentSale.bookNo == sale3.bookNo) {
			isbn3TransactionCount++;
		}

		if (currentSale.bookNo == sale4.bookNo) {
			isbn4TransactionCount++;
		}

		if (currentSale.bookNo == sale5.bookNo) {
			isbn5TransactionCount++;
		}

		// Give the user a prompt before the next iteration.
		cout << "Transaction: ";
	}

	cout << "Ending ISBN transaction counts:" << endl;
	cout << "ISBN: " << sale1.bookNo 
		<< "TotalSales: " << isbn1TransactionCount << endl;
	cout << "ISBN: " << sale2.bookNo 
		<< "TotalSales: " << isbn2TransactionCount << endl;
	cout << "ISBN: " << sale3.bookNo 
		<< "TotalSales: " << isbn3TransactionCount << endl;
	cout << "ISBN: " << sale4.bookNo 
		<< "TotalSales: " << isbn4TransactionCount << endl;
	cout << "ISBN: " << sale5.bookNo 
		<< "TotalSales: " << isbn5TransactionCount << endl;

	return 0;
}