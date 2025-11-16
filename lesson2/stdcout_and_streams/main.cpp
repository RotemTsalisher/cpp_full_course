#include <iostream>
#include <string>

#define SUCCESS 0
#define READ_STR
//#define READ_NUM

int main()
{
#ifdef READ_NUMS
	int a, b;

	std::cout << "Enter 2 Numbers: ";
	std::cin >> a >> b;

	std::cout << "a = " << a << " , " << "b = " << b << std::endl;
#elif defined(READ_STR)
	std::string full_name;
	std::cout << "Enter Your Full Name: ";
	std::getline(std::cin, full_name);

	std::cout << "Echo: " << full_name << std::endl;
#endif
	return SUCCESS;
}