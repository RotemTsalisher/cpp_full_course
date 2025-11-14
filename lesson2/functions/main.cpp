#include <iostream>
#define SUCCESS 0

int add(int a, int b);

int main()
{
	int n1 = 10, n2 = 3;

	std::cout << n1 << " + " << n2 << " = " << add(n1, n2) << std::endl;
	return SUCCESS;
}
int add(int a, int b)
{
	return a + b;
}