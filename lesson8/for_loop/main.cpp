#include <iostream>

int main()
{
	unsigned int i;
	const size_t UPPER_LIM{ 10 };
	
	for (i = 0; i < 10; i++)
	{
		std::cout << "I Love C++!" << std::endl;
	}

	for (size_t i{}; i < 10; i++)
	{
		std::cout << "Another loop!" << std::endl;
	}

	for (size_t i{ 0 }; i < 5; i++)
	{
		std::cout << "i = " << i << std::endl;
	}

	for (size_t j{ 0 }; j < UPPER_LIM; j++)
	{
		std::cout << "(" << (j + 1) << "). " << "Loops are fun!" << std::endl;
	}
	return 0;
}