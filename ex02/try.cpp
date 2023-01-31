#include "Array.hpp"
#include <iostream>

int main() {
	int *a = new int();
	std::cout << *a << std::endl;

	Array<int> tmp;
	Array<int> other(5);
	tmp = other;
}