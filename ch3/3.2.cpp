#include <iostream>
#include <string>

int main() {
	std::string input;

	/*
		Read in 3 lines of text a line at a time using getLine()
	*/
	for (int i = 0; i < 3; i++) {
		std::cout << "Enter line " << i + 1 << ": ";
		getline(std::cin, input);
		std::cout << "You entered: " << input << std::endl;
	}

	/*
		Read in 3 words using cin which will capture a whitespace 
		separated string (individual words or characters delimited by space).
		If the user enters multiple words, the words will be captured 
		individually with each word counting as one input. 
		For example, if the user enters "one two three", the word "one" will be
		captured as input, leaving "two three" in the std::cin buffer. The 
		loop will iterate and since there is already something in the 
		std::cin buffer, the next word will be captured, so the next input
		would be "two", leaving "three" in the std::cin buffer. The loop would
		iterate again and capture "three" as the third input.
	*/
	for (int i = 0; i < 3; i++) {
		std::cout << "Enter word " << i + 1 << ": ";
		std::cin >> input;
		std::cout << "You entered: " << input << std::endl;
	}

	return 0;
}