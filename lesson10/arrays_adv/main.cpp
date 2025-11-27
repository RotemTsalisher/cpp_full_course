#include <iostream>

#define SIZE_(array) sizeof(array) / sizeof(array[0]) 
int main()
{
	int arr[] = { 1,2,3 };

	size_t size1 = std::size(arr);
	size_t size2 = SIZE_(arr);

	std::cout << "size1 = " << size1 << std::endl;
	std::cout << "size2 = " << size2 << std::endl;

	for (size_t i = 0; i < size2; i++)
	{
		std::cout << "arr[" << i << "]" << " = " << arr[i] << std::endl;
	}
	return 0;
}