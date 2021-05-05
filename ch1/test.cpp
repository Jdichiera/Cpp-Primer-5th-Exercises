#include <iostream>

int main() {
	int sum = 0;
	int val = 1;

	while (val <= 10) {
		std::cout << "sum: " << sum << " val: " << val << std::endl;
		sum += val;
		++val;
	}

	std::cout << "sum: " << sum << " val: " << val << std::endl;

	return 0;

}