#include <iostream>
#include <vector>

int main() {
	int input;
	std::vector<int> myVector;

	std::cout << "Please enter integers to be added to the vector." << std::endl;
	while(std::cin >> input) {
		myVector.push_back(input);
	}

	std::cout << "Adding adjacent integers in the vector." << std::endl;
	for (decltype(myVector.size()) i = 0; i < myVector.size(); i++) {
		std::cout << myVector[i] << " + " << myVector[i+1] 
			<< " = " << myVector[i] + myVector[i+1] << std::endl;
	}

	std::cout << std::endl << "Adding first and last integers " 
		<< " in the vector,then second and second to last etc." << std::endl;
	for (decltype(myVector.size()) i = 0; i < (myVector.size() + 1) / 2; i++) {
		std::cout << myVector[i] << " + " 
			<< myVector[(myVector.size() -1) - i] << " = " 
			<< myVector[i] + myVector[(myVector.size() -1) - i] << std::endl;
	}

	return 0;
}