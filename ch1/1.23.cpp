#include <iostream>
#include "Sales_item.h"

int main() {
	Sales_item sale1;
	Sales_item sale2;
	Sales_item sale3;
	Sales_item sale4;
	Sales_item sale5;
	Sales_item currentSale;
	/*
		Initialized to 1 since we are entering in a sales item to match on 
		before we enter the loop
	*/
	int isbn1TransactionCount = 1;
	int isbn2TransactionCount = 1;
	int isbn3TransactionCount = 1;
	int isbn4TransactionCount = 1;
	int isbn5TransactionCount = 1;

	/*
		I am restricting myself to what has been covered in the text so far.
		I would probably refactor this program to use a map which would allow
		the user to enter in an unlimited number of transactions to be counted, 
		and would not require an initial setup of 5 transactions to track.
	*/
	std::cout << "Please enter 5 transactions in the "
			<< "following format: ISBN UNITS_SOLD PRICE" << std::endl;

	std::cout << "Enter data for the sale1: ";
	std::cin >> sale1;

	std::cout << "Enter data for the sale2: ";
	std::cin >> sale2;

	std::cout << "Enter data for the sale3: ";
	std::cin >> sale3;

	std::cout << "Enter data for the sale4: ";
	std::cin >> sale4;

	std::cout << "Enter data for the sale5: ";
	std::cin >> sale5;

	std::cout << "Now enter as many transactions as you would like "
		<< "transactions that have a ISBN number that match one of the " 
		<< "initial 5 transaction ISBN numbers will be tallied to show the " 
		<< "number of transactions for those ISBNs" << std::endl << std::endl;

	/* 
		Give the user an initial prompt for the transaction.
		We do this outside the while loop because the condition will happen
		and prompt the user for input before the while loop body is entered.
		The loop will have to happen at least once before the prompt inside
		the while body will execute.
	*/
	std::cout << "Transaction: ";
	
	while (std::cin >> currentSale) {
		if (currentSale.isbn() == sale1.isbn()) {
			isbn1TransactionCount++;
		}

		if (currentSale.isbn() == sale2.isbn()) {
			isbn2TransactionCount++;
		}

		if (currentSale.isbn() == sale3.isbn()) {
			isbn3TransactionCount++;
		}

		if (currentSale.isbn() == sale4.isbn()) {
			isbn4TransactionCount++;
		}

		if (currentSale.isbn() == sale5.isbn()) {
			isbn5TransactionCount++;
		}

		// Give the user a prompt before the next iteration.
		std::cout << "Transaction: ";
	}

	std::cout << "Ending ISBN transaction counts:" << std::endl;
	std::cout << "ISBN: " << sale1.isbn() 
		<< "TotalSales: " << isbn1TransactionCount << std::endl;
	std::cout << "ISBN: " << sale2.isbn() 
		<< "TotalSales: " << isbn2TransactionCount << std::endl;
	std::cout << "ISBN: " << sale3.isbn() 
		<< "TotalSales: " << isbn3TransactionCount << std::endl;
	std::cout << "ISBN: " << sale4.isbn() 
		<< "TotalSales: " << isbn4TransactionCount << std::endl;
	std::cout << "ISBN: " << sale5.isbn() 
		<< "TotalSales: " << isbn5TransactionCount << std::endl;
	
	return 0;
}