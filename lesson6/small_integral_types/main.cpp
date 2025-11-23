#include <iostream>
#include <cmath>

//#define DEFINE_RESULT_TYPE
#define AUTO_RESULT_TYPE

int main()
{

	short int a = 10, b = 20;
	char a_ = 10, b_ = 20;

#ifdef DEFINE_RESULT_TYPE
	short res = a * b;
	short res_ = a_ * b_;
#elif defined(AUTO_RESULT_TYPE)
	auto res = a + b;
	auto res_ = a_ + b_;
	// will produce 4 byte result
	// be interprated as int
#endif
	std::cout << "a = " << a << ", b = " << b << std::endl << "res = " << res << std::endl;
	std::cout << "a_ = " << a_ << ", b_ = " << b_ << std::endl << "res_ = " << res_ << std::endl;

	std::cout << std::endl;

	std::cout << "sizeof(a) = " << sizeof(a) << ", sizeof(b) = " << sizeof(b) << std::endl << "sizeof(res) = " << sizeof(res) << std::endl;
	std::cout << "sizeof(a_) = " << sizeof(a_) << ", sizeof(b_) = " << sizeof(b_) << std::endl << "sizeof(res_) = " << sizeof(res_) << std::endl;

	std::cout << std::endl;
	return 0;
}