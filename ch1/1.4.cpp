#include <iostream>

int main() {
	int number1;
	int number2;

	std::cout << "Enter two integers to multiply: " << std::endl;
	
	std::cin >> number1 >> number2;
	
	std::cout << "The product of " << number1 
		<< " and " << number2 << " is: " << number1 * number2 << std::endl;
	
	return 0;
}