/*
	For information on printing variable types see
	https://stackoverflow.com/questions/81870/is-it-possible-to-print-a-variables-type-in-standard-c
*/
#include <iostream>

int main() {
	
	int i = 0;

	// Reference to i which is an integer
	int &r = i;

	/*
		a is automatically an int because 
		r is an alias to i which is an int
	*/
	auto a = r; 

	// ci is a const int
	const int ci = i;

	/*
		cr is a reference to a const int
	*/
	const int &cr = ci;

	/*
		ci is a const int assigned to b. The top level const is 
		dropped during an auto assignment so b will be an int instead of a const
		int.
	*/
	auto b = ci;

	/*
		cr is a reference to ci which is a const int. The top level const is a 
		still ignored when referenced so c is an int 
	*/
	auto c = cr;

	/*
		When you use the address-of operator outside of an initialization it
		returns the address of the object. This is auto assigned as a pointer
		Since i is an int, d will be an int*
	*/
	auto d = &i;

	/*
		Again we are using the address-of operator to return the address of
		ci which is a const int. Since a pointer to a const is a low level
		pointer and low level pointers are not ignored by auto, 
		e is an int const*
	*/
	auto e = &ci;

	/*
		ci is a const int and it is not a pointer nor do we use the
		address-of operator so ci has a top level constant.
		Top level constants are ignored by auto, however we are declaring it
		as a const so f will be a int const
	*/
	const auto f = ci;

	/*
		We can create a auto reference by using the 
		reference (address-of) operator. ci is a const int and we are making a
		reference to it, so ci has a top level constant but g will have a low
		level const. g will be an int const&
	*/
	auto &g = ci;

	// a is an int which can be modified
	std::cout << "Value of a before assignment: " << a << std::endl;
	a = 42;
	std::cout << "Value of a after assignment: " << a << std::endl;

	// b is an int since the top level const is dropped during auto assignment
	std::cout << "Value of b before assignment: " << b << std::endl;
	b = 42;
	std::cout << "Value of b after assignment: " << b << std::endl;
	
	// c is an int since the top level const is dropped during auto assignment
	std::cout << "Value of c before assignment: " << c << std::endl;
	c = 42;
	std::cout << "Value of c after assignment: " << c << std::endl;

	/*
		We cannot assign an int to an int*. The value of d is the 
		memory address of i. Assignment commented out to allow compiling
	*/
	std::cout << "Value of d before assignment: " << d << std::endl;
	// d = 42;
	std::cout << "Value of d after assignment: " << d << std::endl;

	/*
		We cannot assign an int to a const int*. The value of e is the memory
		address of ci. Assignment commented out to allow compiling
	*/
	std::cout << "Value of e before assignment: " << e << std::endl;
	// e = 42;
	std::cout << "Value of e after assignment: " << e << std::endl;

	/*
		g is a constant and cannot be modified. The value of g is 0 which
		is the initial value of i. Assignment commented out to allow compiling
	*/
	std::cout << "Value of g before assignment: " << g << std::endl;
	// g = 42;
	std::cout << "Value of g after assignment: " << g << std::endl;

	return 0;
}