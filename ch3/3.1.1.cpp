// Rewriting exercise 1.9 with using statements
#include <iostream>

using std::cout;
using std::endl;

int main() {
	int sum = 0;
	int number = 50;

	while (number <= 100) {
		sum += 50;
		++number;
	}

	cout << "The inclusive sum of numbers 50 to 100 is: " << sum << endl;

	return 0;
}