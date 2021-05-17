/*
	For information on printing variable types see
	https://stackoverflow.com/questions/81870/is-it-possible-to-print-a-variables-type-in-standard-c
*/
#include <iostream>

int main() {
	/*
		i is an int const
	*/
	const int i = 42;

	/*
		j is an int since the top level const from the i variable will be dropped.
	*/
	auto j = i;

	/*
		k is an int const& since const is specified in the auto declaration
	*/
	const auto &k = i;

	/*
		p is an int const* since p is a pointer which creates a low level constant
	*/
	auto *p = &i;

	/*
		I thought j2 would be an int const since const is specified in 
		the auto declaration but it is an int. The high level const on
		the i variable is dropped. Since i is no longer a const, the const
		in the auto declaration is ignored. Const is not making the variable
		const, it is preserving const.
	*/
	const auto j2 = i;
	
	/*
		k2 is an int const& since const is specified in the auto declaration and
		k2 has the reference operator
	*/
	const auto &k2 = i;

	return 0;
}