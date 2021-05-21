#include <iostream>
#include <vector>

int main() {
	std::string input;
	std::vector<std::string> myVector;

	std::cout << "The size of myVector is: " << myVector.size() << std::endl;
	std::cout << "Please enter 5 words, I " 
		<< "will add them to the vector." << std::endl;

	for (int i = 0; i < 5; i++) {
		std::cin >> input;
		myVector.push_back(input);
	}

	std::cout << "Now the size of myVector is: " << myVector.size() << std::endl;

	return 0;
}