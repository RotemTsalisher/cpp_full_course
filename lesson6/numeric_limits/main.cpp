#include <iostream>
#include <limits>
#include <cstdint>

#define SUCCESS 0

int main()
{
	std::cout << "std::numeric_limits<short>::min() = " << std::numeric_limits<short>::min()<<std::endl;
	std::cout << "std::numeric_limits<short>::max() = " << std::numeric_limits<short>::max() << std::endl;
	
	std::cout << std::endl;

	//

	std::cout << "std::numeric_limits<unsigned short>::min() = " << std::numeric_limits<unsigned short>::min() << std::endl;
	std::cout << "std::numeric_limits<unsigned short>::max() = " << std::numeric_limits<unsigned short>::max() << std::endl;

	std::cout << std::endl;

	//

	std::cout << "std::numeric_limits<int>::min() = " << std::numeric_limits<int>::min() << std::endl;
	std::cout << "std::numeric_limits<int>::max() = " << std::numeric_limits<int>::max() << std::endl;

	std::cout << std::endl;

	//

	std::cout << "std::numeric_limits<unsigned int>::min() = " << std::numeric_limits<unsigned int>::min() << std::endl;
	std::cout << "std::numeric_limits<unsigned int>::max() = " << std::numeric_limits<unsigned int>::max() << std::endl;

	std::cout << std::endl; 

	// 8 bit integer is built on char data type!:

	std::cout << "std::numeric_limits<uint8>::min() = " << std::numeric_limits<uint8_t>::min() << std::endl;
	std::cout << "std::numeric_limits<uint8>::max() = " << std::numeric_limits<uint8_t>::max() << std::endl;

	std::cout << std::endl;
	return SUCCESS;
}