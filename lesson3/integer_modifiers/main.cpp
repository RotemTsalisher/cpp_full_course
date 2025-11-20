#include <iostream>

//#define INIT_POS_WITH_NEG

int main()
{
	signed int v1{ 400 };
	signed int v2{ -400 };
#ifdef INIT_POS_WITH_NEG
	unsigned int v3{ -200 }; // compile error
#endif

	std::cout << "v1 = " << v1 << std::endl;
	std::cout << "v2 = " << v2 << std::endl;

	std::cout << "sizeof(v1) = " << sizeof(v1) << std::endl;
	std::cout << "sizeof(v2) = " << sizeof(v2) << std::endl;
	return 0;
}