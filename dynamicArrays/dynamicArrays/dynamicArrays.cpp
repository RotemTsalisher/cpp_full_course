#include <iostream>

//#define RANGE_BASED_FOR
void print_array(int* arr, size_t size);
#ifdef RANGE_BASED_FOR
void print_array(int arr)
#endif

int main()
{
	size_t size = 20;

	int* a1 = new int[size];
	int* a2 = new int[size] {};
	int* a3 = new(std::nothrow) int[size] {1, 2, 3, 4, 5};
	
	print_array(a1, size);
	print_array(a2, size);
	print_array(a3, size);
	return 0;
}
void print_array(int* arr, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
#ifdef RANGE_BASED_FOR
void print_array(int arr)
{
	for (auto ele : arr)
	{
		std::cout << ele << " ";

	}
	std::cout << std::endl;
}
#endif