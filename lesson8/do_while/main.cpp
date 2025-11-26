#include <iostream>

int main()
{
	const unsigned int COUNT{ 10 };
	unsigned int i{ 0 };

	do
	{
		std::cout << "(" << i + 1 << "}. I Love C++!" << std::endl;
	} while (++i < COUNT);
	std::cout << "Loop Done!" << std::endl;
	return 0;
} 