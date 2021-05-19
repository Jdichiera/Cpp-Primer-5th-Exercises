// Rewriting exercise 1.10 with using statements
#include <iostream>

using std::cout;
using std::endl;

int main() {
	int number = 10;

	cout << "Printing numbers from 10 to 0 with decrement operator." << endl;

	while (number >= 0) {
		cout << number << endl;
		--number;
	}
	
	return 0;
}