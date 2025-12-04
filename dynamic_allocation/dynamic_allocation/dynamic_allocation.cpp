#include <iostream>

int main()
{
	int* ptr1 = nullptr, *ptr2 = nullptr;

	ptr1 = new int;
	ptr2 = new int{ 15 };

	std::cout << "ptr1 = " << std::hex << ptr1 << ", *ptr1 = " << std::dec << *ptr1 << std::endl;
	std::cout << "ptr2 = " << std::hex << ptr2 << ", *ptr2 = " << std::dec << *ptr2 << std::endl;

	return 0;
}