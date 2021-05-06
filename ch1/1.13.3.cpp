#include <iostream>

int main() {
	int startRangeNumber = 0;
	int endRangeNumber = 0;

	std::cout << "This program will print "
		<< "the range of numbers between two integers." << std::endl;

	std::cout << "Please enter an integer for the start of the range: ";
	std::cin >> startRangeNumber;

	std::cout << "Please enter an integer for the end of the range: ";
	std::cin >> endRangeNumber;


	std::cout << "Printing the range between " 
		<< startRangeNumber << " and " << endRangeNumber <<  '.' << std::endl;
	
	for (; startRangeNumber <= endRangeNumber; startRangeNumber++) {
		std::cout << startRangeNumber << std::endl;
	}

	return 0;
}