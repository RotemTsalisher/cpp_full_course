#include <iostream>

int main()
{
	int* ptr1{ nullptr }, * ptr2{ nullptr };

	ptr1 = new int{ 10 };
	ptr2 = ptr1;

	std::cout << "ptr1 = " << std::hex << ptr1 << ", *ptr1 = " << std::dec << *ptr1 <<std::endl;
	std::cout << "ptr2 = " << std::hex << ptr2 << ", *ptr2 = " << std::dec << *ptr2<<std::endl;
	
	delete ptr1;

	std::cout << "ptr1 = " << std::hex << ptr1 <<std::endl;
	std::cout << "ptr2 = " << std::hex << ptr2 << ", *ptr2 = " << std::dec << *ptr2<<std::endl;

	return 0;
}