#include <iostream>
#include <string>

#define SUCCESS 0

int main()
{
	int age;
	std::string name;

	std::cout << "Please enter your name and age: ";
	std::getline(std::cin, name);
	std::cin >> age;

	std::cout << "Hello " << name << "! You are " << age << " years old" << std::endl;

	return SUCCESS;
}