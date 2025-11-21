#include <iostream>

int main()
{
	char val = 0x41;

	std::cout << "val = " << val << std::endl;
	std::cout << "(int)val = " << static_cast<int>(val) << std::endl;
	return 0;
}