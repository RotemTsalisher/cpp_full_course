#include <iostream>

int main()
{
	int n1 = 45, n2 = 60;

	std::cout << "n1 = " << n1 << ", n2 = " << n2 << std::endl;
	std::cout << "COMPARING NUMBERS: " << std::endl;

	/* compare result evaluated as bool */
	auto res = (n1 <= n2);

	std::cout << std::boolalpha << "n1 <= n2 : " << res << std::endl;

	return 0;
}