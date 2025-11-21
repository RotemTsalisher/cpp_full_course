#include <iostream>
#include <iomanip>

#define SUCCESS 0
//#define ENDL
//#define FLUSH
//#define WIDTH
//#define FILL_CHAR
#define NUMS_AND_SIGNS

int main()
{

#ifdef ENDL
	/* std::endl -> new line */
	std::cout << "Hello";
	std::cout << " World!";
	std::cout << std::endl;
#endif

#ifdef FLUSH

	/* flush sends the output buffer to the destination */
	/* implicit: std::cout << std::righ -> data is justified to the righ */
	std::cout << "This is a sentence " << std::endl << std::flush;
	std::cout << "interrupted in the middle by std::flush" << std::endl;
#endif

#ifdef WIDTH
	/* stdw(size) makes sure the next arg streamed to cout is size long */
	int size = 10;

	std::cout << std::setw(size) << "First Name" << std::setw(size) << "Lastname" << std::endl;
	std::cout << std::setw(size) << "Rotem" << std::setw(size) << "Tsalisher" << std::endl;

	std::cout << std::left;
	std::cout << std::endl << "JUSTIFIED TO THE LEFT: " << std::endl;

	std::cout << std::setw(size) << "First Name" << std::setw(size) << "Lastname" << std::endl;
	std::cout << std::setw(size) << "Rotem" << std::setw(size) << "Tsalisher" << std::endl;
#endif

#ifdef FILL_CHAR
	std::cout << std::setfill('.');
	std::cout << std::setw(10) << "Rotem" << std::endl;
#endif

#ifdef NUMS_AND_SIGNS
	float a = -122.25;
	int b = 10, c = -10;

	std::cout << std::internal << std::setw(10);
	std::cout << a << std::endl;

	std::cout << std::showpos;
	std::cout << "b = " << b << ", c = " << c << std::endl;
	std::cout << std::noshowpos;
	std::cout << "b = " << b << ", c = " << c << std::endl;

#endif
	return SUCCESS;
}