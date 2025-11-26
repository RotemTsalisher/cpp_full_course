#include <iostream>
#define SIZE 10

int main()
{

	int scores[SIZE] = { 1,2 };

	std::cout << "scores[0] = " << scores[0] << std::endl;
	std::cout << "scores[1] = " << scores[1] << std::endl;
	std::cout << "scores[2] = " << scores[2] << std::endl;
	std::cout << "scores[3] = " << scores[3] << std::endl;

	std::cout << std::endl;
	
	for (size_t i = 0; i < SIZE; i++)
	{
		scores[i] = (i + 1);
	}
	std::cout << "LOOP: " << std::endl;

	for (size_t i = 0; i < SIZE; i++)
	{
		std::cout << "scores[" << i << "] = " << scores[i] << std::endl;
	}
	std::cout << "Loop Done!" << std::endl;
	return 0;
}