#include <iostream>

void add_two(int* p_val);

int main()
{
	int* p_val = new int{ 10 };
	std::cout << "p_val = " << p_val << std::endl;
	std::cout << "*p_val = " << *p_val << std::endl;
	add_two(p_val);
	
	std::cout << "p_val = " << p_val << std::endl;
	std::cout << "*p_val = " << *p_val << std::endl;

	delete p_val;
	std::cout << "p_val = " << p_val << std::endl;

	p_val = nullptr;
	return 0;
}
void add_two(int* p_val)
{
	std::cout << "Hello from " << __func__ << std::endl;
	*p_val += 2;
	std::cout << "Bye from " << __func__ << std::endl;
}