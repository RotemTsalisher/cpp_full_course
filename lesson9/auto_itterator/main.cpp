#include <iostream>
#define SIZE 5

int main()
{
	float arr[SIZE] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	size_t i = 0; // enumeratora

	for (auto v : arr)
	{
		std::cout << "(" << (i++ + 1) << "). v = " << v << std::endl;
	}
	std::cout << "Loop Done!" << std::endl;
	return 0;
}