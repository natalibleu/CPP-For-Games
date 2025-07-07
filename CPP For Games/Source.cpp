#include <iostream>
#include <limits>

int main()
{
	int age;
	std::string name;

	std::cout << "What's your name?" << std::endl;
	std::cin >> name;

	std::cout << "How old are you?" << std::endl;
	std::cin >> age;

	while (std::cin.fail())
	{
		std::cout << "You have written an invalid response" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> age;
	}

	if (age < 25)
	{
		std::cout << "Hello " << name << ", you are only" << age << " years old." << std::endl;
	}
	else if (age >= 50)
	{
		std::cout << "Hello " << name << ".You are very wise for your age." << std::endl;
	}
	else if (25 < age < 50)
	{
		std::cout << "Hello " << name << ", you are already "<< age <<" years old." << std::endl;
	}

	return 0;
}