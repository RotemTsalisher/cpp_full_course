#include <iostream>

//#define TRY_AND_CATCH
#define NO_THROW
#define INF 1000000000

int main()
{
	//int* failed_alloc = new int[INF];
#ifdef TRY_AND_CATCH
	try
	{
		for (size_t i = 0; i < 100; i++)
		{
			int* data = new int[INF];
		}
	}
	catch (std::exception& ex)
	{
		std::cout << "Exeption! : " << ex.what() << std::endl;
	}
#elif defined(NO_THROW)
	for (size_t i = 0; i < 100; i++)
	{
		int* data = new(std::nothrow) int[INF];
		if (!data)
		{
			std::cout << "Bad Allocation!" << std::endl;
		}
	}
#endif
	return 0;
}