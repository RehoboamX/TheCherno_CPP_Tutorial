#include <iostream>

int Multiply(int a, int b)
{
	return a * b;
}

void MultiplyAndLog(int a, int b)
{
	int result = Multiply(a, b);   
	std::cout << result << std::endl;
}

int main()
{
	//int result = Multiply(3, 5);   // call the function,and store the return value in result
	//std::cout << result << std::endl;  // use a funtion is more convenient
	MultiplyAndLog(3, 5);
	MultiplyAndLog(37, 5);
	MultiplyAndLog(198, 34);
	std::cin.get();
}