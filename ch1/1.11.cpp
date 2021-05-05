#include <iostream>

int main() {
	int rangeStartNumber;
	int rangeEndNumber;

	std::cout << "I will print out each number" 
		<< " within the range you specify" << std::endl;
	
	std::cout << "Please enter a number for the start of the range: ";
	std::cin >> rangeStartNumber;
	
	std::cout << "Please ener a number for the end of the range: ";
	std::cin >> rangeEndNumber;

	std::cout << "Printing numbers between " 
		<< rangeStartNumber << " and " << rangeEndNumber << std::endl;

	while (rangeStartNumber <= rangeEndNumber) {
		std::cout << rangeStartNumber << std::endl;
		++rangeStartNumber;
	}

	return 0;
}