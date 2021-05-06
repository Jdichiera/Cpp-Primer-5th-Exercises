#include <iostream>

int main() {
	int sum = 0;
	int number = 0;

	std::cout << "This program will print the"
		<< " sum of a set integers entered by the user." << std::endl;
	
	std::cout << "Press enter after typing each integer, then" 
		<< "press Ctrl + z (Windows) or Cmd + d (UNIX) to enter the " 
		<< "End-of-File and sum the numbers you have entered." << std::endl;

	while (std::cin >> number) {
		sum += number;
	}

	std::cout << "The sum of the numbers entered is: " << sum << std::endl;

	return 0;
}