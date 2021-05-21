#include <iostream>
#include <vector>

int main() {
	int input;
	std::vector<int> myVector;

	std::cout << "The size of myVector is: " << myVector.size() << std::endl;
	std::cout << "Please enter 5 integers, I " 
		<< "will add them to the vector." << std::endl;

	for (int i = 0; i < 5; i++) {
		std::cin >> input;
		myVector.push_back(input);
	}

	std::cout << "Now the size of myVector is: " << myVector.size() << std::endl;

	return 0;
}