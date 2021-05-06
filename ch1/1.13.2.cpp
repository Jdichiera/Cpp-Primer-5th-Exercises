#include <iostream>

int main() {
	std::cout << "Printing numbers from 10 to 0" << std::endl;

	for (int number = 10; number >= 0; number--) {
		std::cout << number << std::endl;
	}
	
	return 0;
}