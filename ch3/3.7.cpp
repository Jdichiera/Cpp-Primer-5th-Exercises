#include <iostream>
#include <string>

int main() {
	std::string myString = "This is my string.";

	std::cout << "String before processing: " << myString << std::endl;

	/*
		Will not compile. char is a reserved keyword and cannot be used as 
		a variable name.
	*/
	for (auto &char : myString) {
		char = toupper(letter);
	}

	std::cout << "String after processing: " << myString << std::endl;

	return 0;
}