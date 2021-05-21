#include <iostream>
#include <string>

int main() {
	std::string input;
	std::string longString;
	std::string spaceString;

	std::cout << "Please type in 5 words. I will concatenate " 
		<< "all of the words into a single string." << std::endl;
	
	for (int i = 0; i < 5; i++) {
		std::cin >> input;
		longString += input;
	}
	std::cout << longString << std::endl;

	std::cout << "Please type in 5 more words. I will concatenate " 
		<< "all of the words into a single string with spaces." << std::endl;

	for (int i = 0; i < 5; i++) {
		std::cin >> input;
		spaceString += input + ' ';
	}
	std::cout << spaceString << std::endl;

	return 0;
}