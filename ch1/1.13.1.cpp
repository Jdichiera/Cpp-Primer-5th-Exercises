#include <iostream>

int main() {
	int sum = 0;

	for (int number = 50; number <= 100; ++number) {
		sum += number;
	}

	std::cout << "The sum of 50 to 100 inclusive is: " << sum << std::endl;
	
	return 0;
}