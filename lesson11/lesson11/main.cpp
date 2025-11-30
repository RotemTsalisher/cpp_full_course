#include <iostream>

int main()
{
	int var = 10;
	int* p_var = nullptr;
	p_var = &var;

	std::cout << "var = " << var << std::endl;
	std::cout << "p_var = " << std::hex << p_var << std::endl;
	std::cout << "*(p_var) = " << std::dec <<*p_var << std::endl;
	
	std::cout << std::endl;
	std::cout << "Changing value using pointer: " << std::endl;


	// de-refrencing 
	*p_var = 5;
	std::cout << "var = " << var << std::endl;
	std::cout << "p_var = " << std::hex << p_var << std::endl;
	std::cout << "*(p_var) = " << std::dec << *p_var << std::endl;
	return 0;
}