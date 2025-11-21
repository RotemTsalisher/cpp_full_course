#include <iostream>

int main()
{
	auto a = 45, b = 11, c = 20;

	std::cout << "!(a < b) || (b > c): " << std::boolalpha << (!(a < b) || (b > c)) << std::endl;
	std::cout << "!(" << (a < b) << ") || (" << (b > c) << ")" << std::endl;
	std::cout << !(a < b) << " || " << (b > c) << std::endl;
}