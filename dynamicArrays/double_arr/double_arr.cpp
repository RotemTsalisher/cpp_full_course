#include <iostream>

int main()
{
	int size = 0;

	std::cout << "enter array size: ";
	std::cin >> size;

	double* array_ = new(std::nothrow) double[size] {};

	std::cout << std::endl << "Printing Array: " << std::endl;
	for (size_t i = 0; i < size; i++)
	{
		std::cout << array_[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}