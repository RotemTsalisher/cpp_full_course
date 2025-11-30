#include <iostream>

int main()
{
	const char message[] = { 'H','e', 'l', 'l', 'o', '\0' };
	const char message_[] = { 'H','e', 'l', 'l', 'o' };

	std::cout << "message = " << message << std::endl;

	std::cout << std::endl;
	std::cout << "message_ = ";
	for (char a : message_)
	{
		std::cout << a;
	}
	std::cout << std::endl;
	std::cout << "LOOP DONE!" << std::endl;

	return 0;
}