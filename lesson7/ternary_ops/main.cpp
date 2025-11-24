#include <iostream>

#define IMPLICIT_CONV

int main()
{
	int a{ 100 }, b{ 20 };

#ifdef IMPLICIT_CONV
	// get the max
	auto res = (a >= b) ? a : 22.5f;
#else
	int res;
	res = (a >= b) ? a : b;
#endif
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "Max(a,b) = " << res << std::endl;
	return 0;
}