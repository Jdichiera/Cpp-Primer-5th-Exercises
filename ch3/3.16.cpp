#include <iostream>
#include <vector>

int main() {
	std::vector<int> v1; // 0
	std::vector<int> v2(10); // 10, 0
	std::vector<int> v3(10, 42); // 10, 42
	std::vector<int> v4{10}; // 1
	std::vector<int> v5{10, 42}; // 2
	std::vector<std::string> v6{10}; // 10, ""
	std::vector<std::string> v7{10, "hi"}; // 10, "hi"

	std::cout << "v1 size: " << v1.size() 
		<< std:: endl << " contents: " << std::endl;
	for (decltype(v1.size()) i = 0; i < v1.size(); i++) {
		std::cout << "  " << v1[i] << std::endl;
	}

	std::cout << "v2 size: " << v2.size() 
		<< std:: endl << " contents: " << std::endl;
	for (decltype(v2.size()) i = 0; i < v2.size(); i++) {
		std::cout << "  " << v2[i] << std::endl;
	}

	std::cout << "v3 size: " << v3.size() 
		<< std:: endl << " contents: " << std::endl;
	for (decltype(v3.size()) i = 0; i < v3.size(); i++) {
		std::cout << "  " << v3[i] << std::endl;
	}

	std::cout << "v4 size: " << v4.size() 
		<< std:: endl << " contents: " << std::endl;
	for (decltype(v4.size()) i = 0; i < v4.size(); i++) {
		std::cout << "  " << v4[i] << std::endl;
	}

	std::cout << "v5 size: " << v5.size() 
		<< std:: endl << " contents: " << std::endl;
	for (decltype(v5.size()) i = 0; i < v5.size(); i++) {
		std::cout << "  " << v5[i] << std::endl;
	}

	std::cout << "v6 size: " << v6.size() 
		<< std:: endl << " contents: " << std::endl;
	for (decltype(v6.size()) i = 0; i < v6.size(); i++) {
		std::cout << "  " << v6[i] << std::endl;
	}

	std::cout << "v7 size: " << v7.size() 
		<< std:: endl << " contents: " << std::endl;
	for (decltype(v7.size()) i = 0; i < v7.size(); i++) {
		std::cout << "  " << v7[i] << std::endl;
	}

	return 0;
}