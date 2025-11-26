#include <iostream>

int main()
{
	float arr[5] = { 1.1, 2.2, 3,3 };
	float sum1 = 0, sum2 = 0;

	size_t i = 0;
	for (auto v : arr)
	{
		sum1 += v;
		sum2 += arr[i++];
	}
	std::cout << "sum1 = " << sum1 << std::endl;
	std::cout << "sum2 = " << sum2 << std::endl;

	return 0;
}