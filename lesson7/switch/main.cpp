#include <iostream>

const int Ellipse = 0x01;
const int Marker = 0x02;
const int Pen = 0x03;


int main()
{
	int tool = Ellipse;

	std::cout << "** SWITCH CASE **" << std::endl;
	std::cout << "The active tool is ";

	switch (tool)
	{
	case Ellipse:
		std::cout << "Ellipse!";
		break;

	case Marker:
		std::cout << "Marker!";
		break;

	case Pen:
		std::cout << "Pen!";
		break;

	default:
		std::cout << "N/A!";
	}
	std::cout << std::endl;
	return 0;
}