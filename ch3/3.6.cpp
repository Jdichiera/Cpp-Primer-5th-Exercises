#include <iostream>
#include <string>

int main() {
	std::string myString = "This is my string.";

	std::cout << "String before processing: " << myString << std::endl;

	for (auto &letter : myString) {
		letter = toupper(letter);
	}

	std::cout << "String after processing: " << myString << std::endl;

	return 0;
}