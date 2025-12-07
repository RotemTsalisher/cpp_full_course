#include <iostream>
//#define SHOW_MEMORY_LEAKAGE

int main()
{
	int* pnum1 = new int{ 50 };
	int num = 51;

	std::cout << "pnum1 = " << std::hex << pnum1 << std::endl;
#ifndef SHOW_MEMORY_LEAKAGE
	delete pnum1;
#endif
	pnum1 = &num; // this will make us loose the memory initiated 
	// at line 6

	std::cout << "pnum1 = " << pnum1 << std::endl;
	std::cout << "&num = " << &num << std::endl;

	std::cout << std::endl << "num = " << std::dec << num << std::endl;
	return 0;
}