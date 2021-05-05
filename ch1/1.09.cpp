#include <iostream>

int main() {
	int sum = 0;
	int number = 50;

	while (number <= 100) {
		sum += 50;
		++number;
	}

	std::cout 
		<< "The inclusive sum of numbers 50 to 100 is: " << sum << std::endl;

	return 0;
}