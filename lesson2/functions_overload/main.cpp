#include <iostream>

#define SUCCESS 0
/* cannot overload return val */
//#define OVERLOAD_RETUEN_VAL

int add(int  , int  );
float add(float, float);

#ifdef OVERLOAD_RETUEN_VAL
float add(float a, float b);
#endif

int main()
{
	int int_n1{ 3 }, int_n2{ 5 };
	float float_n1{ 3.1 }, float_n2{ 1.2 };

	/* add ints */
	std::cout << int_n1 << " + " << int_n2 << " = " << add(int_n1, int_n2) << std::endl;

	/* add floats */
	std::cout << float_n1 << " + " << float_n2 << " = " << add(float_n1, float_n2) << std::endl;

	return SUCCESS;
}
int add(int a , int b)
{
	std::cout << "ADDING INTEGER TYPES" << std::endl;
	return a + b;
}
float add(float a, float b)
{
	std::cout << "AFFING FLOAT TYPES" << std::endl;
	return a + b;
}