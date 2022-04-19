#include <iostream>

int main()
{
	int variable = 8; // -2b -> 2b (2b=2^31)
	float variable1 = 5.5;
	double var = 5.2;
	bool* a = 2;

	std::cout << a << std::endl;
	std::cout << sizeof(bool) << std::endl;
	std::cout << variable1 << std::endl;
	std::cout << variable << std::endl;
	variable = 20;
	std::cout << variable << std::endl;
	std::cin.get();
}