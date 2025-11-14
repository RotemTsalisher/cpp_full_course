#include <iostream>

#define SUCCESS 0

int main()
{
	int firstNumber = 12, secondNumber = 9, sum;

	sum = firstNumber + secondNumber;
	std::cout << "The sum of " << firstNumber << " and " << secondNumber << " is " << sum << std::endl;

	return SUCCESS;
}