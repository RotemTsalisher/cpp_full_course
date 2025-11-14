#include <iostream>

#define SUCCESS 0

#define COMP_ERR_
//#define RUN_ERR_
//#define WARNING_

int main()
{
#ifdef COMP_ERR_
	std::cout << "Hello Wotld in C++20!" << std::endl
#elif defined( RUN_ERR_)
	int i = 0;
	for (i;;i++);

#elif defined( WARNING_ )
	int x = 20;
	float y = x;
#endif
	std::cout << "Goodbye!" << std::endl;
	return SUCCESS;
}