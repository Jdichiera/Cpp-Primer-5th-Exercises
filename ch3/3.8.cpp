#include <iostream>
#include <string>

/*
	For these exercises I would much prefer to use the 'range for' loop pattern
	used in exercise 3.6. It is much more succint and readable. 
*/
int main() {
	std::string myString1 = "This is my first string.";
	std::string myString2 = "This is my second string.";

	std::cout << "String 1 before processing: " << myString1 << std::endl;

	int iterator = 0;
	while (iterator <= myString1.length()) {
		myString1[iterator] = toupper(myString1[iterator]);
		iterator++;
	}

	std::cout << "String 1 after processing: " << myString1 << std::endl;

	std::cout << "String 2 before processing: " << myString2 << std::endl;

	/*
		Using decltype to detect the type returned by myString.size()
	*/
	for (decltype (myString2.size()) i = 0; i < myString2.size(); i++) {
		myString2[i] = toupper(myString2[i]);
	}

	std::cout << "String 2 after processing: " << myString2 << std::endl;

	return 0;
}