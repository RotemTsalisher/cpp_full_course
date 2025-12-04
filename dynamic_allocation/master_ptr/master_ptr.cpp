#include <iostream>

int main()
{
	int* master{ nullptr }, * slave{ nullptr };

	master = new int{ 10 };
	slave = master;

	if (master)
	{
		*slave += 2;
		std::cout << "new value = " << *slave << std::endl;
	}
	else
	{
		std::cout << "master not initialized!" << std::endl;
	}

	delete master;
	master = nullptr;

	if (master)
	{
		*slave += 2;
		std::cout << "new value = " << *slave << std::endl;
	}
	else
	{
		std::cout << "master not initialized!" << std::endl;
	}
	return 0;
}