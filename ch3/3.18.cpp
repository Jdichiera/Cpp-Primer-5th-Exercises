#include <vector>

int main() {
	/*
		Three ways to define a vector with 10 elements that are 42.
		I believe the v1 method would be preferred since it is the most
		concise, easy to read, and least error prone from mistyping.
	*/ 
	std::vector<int>v1(10, 42);
	std::vector<int>v2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
	std::vector<int>v3;
	
	for (int i = 0; i < 10; i++) {
		v1.push_back(42);
	}
}