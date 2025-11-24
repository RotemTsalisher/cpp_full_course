#include <iostream>

const int Ellipse = 0x01;
const int Marker  = 0x02;
const int Pen     = 0x03;

int main()
{
	int tool{ Ellipse };

	std::cout << "Active tool is ";

	if (tool == Ellipse)
	{
		std::cout << "Ellipse!";
	}
	else if (tool == Marker)
	{
		std::cout << "Marker!";
	}
	else if (tool == Pen)
	{
		std::cout << "Pen!";
	}
	else
	{
		std::cout << "N/A";
	}
	std::cout << std::endl;
	return 0;
}