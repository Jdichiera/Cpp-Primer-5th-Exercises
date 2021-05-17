#include <iostream>

int main() {
	int someValue = 1;

	// Point to the address of someValue using the address-of operator
	int *pointerToSomeValue = &someValue;

	/*
		Print the memory address of the pointer and the variable.
		Note that we do not have to address-of operator on the pointer because
		the pointer is holding the address of someValue. Using the address-of
		operator in line 20 will return the address of someValue instead of the 
		value of someValue.
	*/
	std::cout << "Pointer mem address: " << pointerToSomeValue << std::endl;
	std::cout << "Variable mem address: " << &someValue << std::endl;

	/*
		Print the values stored in the object at the address that the pointer 
		is pointing to. Note that we use the dereference operator to return the
		object from the pointer. If we did not use dereference then we would 
		return the memory address and not the object.
	*/
	std::cout << "Value of the pointer: " << *pointerToSomeValue << std::endl;
	std::cout << "Value of the variable: " << someValue << std::endl;

	/*
		Update the value in someValue usng the pointer
	*/
	*pointerToSomeValue = 5;
	std::cout << "Value after update: " << *pointerToSomeValue << std::endl;
	std::cout << "Value after update: " << someValue << std::endl;

	return 0;
}