#include <iostream>

int main()
{
	int n1{ 50 }, n2{ 60 };
	auto res = (n1 < n2);

	std::cout << std::boolalpha << "res = " << res << std::endl;

	std::cout << n1;
	if (res)
	{
		std::cout << " is less than ";
	}
	else
	{
		std::cout << " is bigger than ";
	}
	std::cout << n2 << std::endl;

	return 0;
}