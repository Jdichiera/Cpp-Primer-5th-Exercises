#include <iostream>

int main() {
	int sum = 0;
	int number = 10;

	while (number >= 0) {
		sum += number;
		--number;
	}

	std::cout << "The inclusive sum of numbers 10 to 0 is: " << sum << std::endl;
	
	return 0;
}