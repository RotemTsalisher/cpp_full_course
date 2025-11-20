#include <iostream>

int main()
{
	int a{ 1 }, b{ 2 }, c{ a + b };
	int sum(a + b + c);

	std::cout << "a = " << a << std::endl << "b = " << b << std::endl << "c = " << c << std::endl << "sum = " << sum << std::endl;
	
	return 0;
}