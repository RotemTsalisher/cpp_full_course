#include <iostream>

int main()
{
	const char* cstring_ = "Hello World!";

	std::cout << "cstring = " << cstring_ << std::endl;
	
	int string_size = sizeof(cstring_)/sizeof(cstring_[0]);
	std::cout << "*cstring_ = " << *cstring_ << std::endl;
	std::cout << "cstring size = " << string_size << std::endl;


	std::cout << "string in a loop: " << std::endl;
	for (size_t i = 0; i < string_size; cstring_++, i++)
	{
		std::cout << "cstring_ = " << *cstring_ << std::endl;
	}

	return 0;
};