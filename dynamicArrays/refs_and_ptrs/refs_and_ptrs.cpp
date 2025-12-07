#include <iostream>

int main()
{
	double d_val = 55.5;
	double some_other_double = 1.11;
	double& d_val_ref = d_val;
	double* d_val_ptr = &d_val;

	std::cout << "PRINTING: " << std::endl;
	std::cout << "d_val = " << d_val << std::endl;
	std::cout << "d_val_ref = " << d_val_ref << std::endl;
	std::cout << "d_val_ptr = " << d_val_ptr << std::endl;
	std::cout << "*d_val_ptr = " << *d_val_ptr << std::endl;
	
	// CHANGING THE REF MEANS CHANGING VARIABLES VALUES:
	d_val = 7.77;
	d_val_ref = some_other_double;

	//printing again:
	std::cout << "PRINTING: " << std::endl;
	std::cout << "d_val = " << d_val << std::endl;
	std::cout << "d_val_ref = " << d_val_ref << std::endl;
	std::cout << "d_val_ptr = " << d_val_ptr << std::endl;
	std::cout << "*d_val_ptr = " << *d_val_ptr << std::endl;


	//
	return 0;
}