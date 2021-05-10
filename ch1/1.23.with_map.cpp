#include <map>
#include <string>
#include <iostream>
#include <iterator>
#include "Sales_item.h"

int main() {
	/*
		Solving the same problem with a map allows us to enter in any number of
		transactions rather than having to work with a set number.
	*/
	Sales_item currentSale;
	std::map<std::string, int> transactionsByIsbn;
	std::map<std::string, int>::iterator transactionsByIsbnIterator;

	std::cout << "Please enter transactions in the "
			<< "following format: ISBN UNITS_SOLD PRICE" << std::endl;

	std::cout << "Transaction: ";

	while (std::cin >> currentSale) {
		// Look for the current sales ISBN and store the return in an iterator
		transactionsByIsbnIterator = transactionsByIsbn.find(currentSale.isbn());
		
		/*
			If the iterator is not at the end of the map then we must have found
			that ISBN in our search. If that is the case then increment the 
			transaction count. If the iterator is at the end of the map then
			the ISBN is not found. Add the ISBN that is not found and set the 
			transaction count to 1.
		*/
		if (transactionsByIsbnIterator != transactionsByIsbn.end()) {
			transactionsByIsbnIterator->second++;
		} else {
			transactionsByIsbn[currentSale.isbn()] = 1;
		}

		std::cout << "Transaction: ";
	}

	std::cout << std::endl << "Ending ISBN transaction counts:" << std::endl;

	// Loop through the map and print out all of the isbns and transaction counts 
	for (auto &transacton: transactionsByIsbn) {
		std::cout << "ISBN: " << transacton.first
			<< " | TotalSales: " << transacton.second << std::endl;
	}
	
	return 0;
}