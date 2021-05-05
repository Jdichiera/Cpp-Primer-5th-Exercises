#include <iostream>

int main() {
	int number = 10;

	std::cout 
		<< "Printing numbers from 10 to 0 with decrement operator." << std::endl;

	while (number >= 0) {
		std::cout << number << std::endl;
		--number;
	}
	
	return 0;
}