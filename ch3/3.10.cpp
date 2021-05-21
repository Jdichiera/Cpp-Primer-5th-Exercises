#include <iostream>
#include <string>

int main() {
	std::string input;
	std::string processedString;
	std::cout << "Please enter a string with punctuation: ";

	// Using getline to capture spaces.
	getline(std::cin, input);

	std::cout << "String before processing: " << input << std::endl;

	for (auto character : input) {
		if (!ispunct(character)) {
			processedString += character;
		}
	}

	std::cout << "String after processing: " << processedString << std::endl;

	return 0;
}