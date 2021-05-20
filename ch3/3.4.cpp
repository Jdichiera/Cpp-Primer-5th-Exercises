#include <iostream>
#include <string>

int main() {
	std::string string1;
	std::string string2;

	std::cout << "Please enter two strings and I will " 
		<< "tell you if the strings are equal or not." << std::endl;
	std::cout << "String 1: ";
	std::cin >> string1;

	std::cout << "String 2: ";
	std::cin >> string2;

	if (string1 == string2) {
		std::cout << "The strings are equal." << std::endl;
	} else {
		std::cout << "The strings are not equal." << std::endl;
	}

	std::cout << "Please enter two strings and I will " 
		<< "tell you if the strings have the same lenght." 
		<< " If they do not have the same length I will"
		<< " tell you which string is longer." << std::endl;
	std::cout << "String 1: ";
	std::cin >> string1;

	std::cout << "String 2: ";
	std::cin >> string2;
	
	if (string1.length() == string2.length()) {
		std::cout << "The strings have an equal length." << std::endl;
	} else {
		std::cout << "The strings do not have an equal length." << std::endl;
	}

	return 0;
}