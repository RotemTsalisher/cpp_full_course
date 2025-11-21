#include <iostream>

/* sizeof(bool) = 1 byte */
int main()
{
	bool red_light{ true };
	bool green_light{ false };

	if (red_light)
	{
		std::cout << "red light is on" << std::endl;
		std::cout << "red_light = " << red_light <<std::endl;
	}

	std::cout << " ------ " << std::endl;
	std::cout << "using std::boolalpha" << std::endl;

	std::cout << std::boolalpha;
	std::cout << "red_light = " << red_light << std::endl;

	std::cout << "green_light = " << green_light << std::endl;
	std:: cout <<std::noboolalpha << "green_light = " << green_light << std::endl;
	return 0;
}