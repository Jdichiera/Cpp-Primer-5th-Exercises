#include <iostream>
#include <vector>

int main() {
	std::string input;
	std::string processedInput;
	std::vector<std::string> myVector;
	
	std::cout << "Please enter as many words as you would like." 
		<< " I will capture them in a vector and print them out"
		<< " in all capital letters." << std::endl;;
	
	while(std::cin >> input) {
		myVector.push_back(input);
	}

	/*
		This works by binding a reference to each string held in the vector.
		Then we bind a reference to each character in the string. 
		Since we have bound this reference we can perform operations on it
		as if we were performing operations on the underlying entity.
		If we do not use the address-of operator to bind to the string and
		character, we would not be able to update the character in the string
		or the string in the vector.
	*/
	for (auto &vectorString : myVector) {
		for (auto &character : vectorString) {
			character = toupper(character);
		}
	}

	for (decltype(myVector.size()) i = 0; i < myVector.size(); i++) {
		std::cout << myVector[i];
		if (i % 8 == 0) {
			std::cout << std::endl;
		}
	}

	return 0;
}