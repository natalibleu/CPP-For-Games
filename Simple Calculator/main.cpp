#include <iostream>

int main()
{
	double numberOne;

	std::cout << "Enter a number:" << std::endl;
	std::cin >> numberOne;

	while (std::cin.fail())
	{
		std::cout << "That's not a number. Try again." << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> numberOne;
	}

	char symbol;
	std::cout << "Enter an operator: " << std::endl;
	std::cin >> symbol;

	while (symbol != '+' && symbol != '-' && symbol != '*' && symbol != '/')
	{
		std::cout << "That's not a operator. Try again." << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> symbol;
	}

	double numberTwo;

	std::cout << "Enter a second number:" << std::endl;
	std::cin >> numberTwo;

	while (std::cin.fail())
	{
		std::cout << "That's not a number. Try again." << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> numberTwo;
	}

	if (numberTwo == 0 && symbol == '/')
	{
		std::cout << "Operation impossible. You can't divide by 0. Try again." << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> numberTwo;
	}

	float result;

	switch (symbol)
	{
	case '+':
		result = numberOne + numberTwo;
		break;
	case '*':
		result = numberOne * numberTwo;
		break;
	case '-':
		result = numberOne - numberTwo;
		break;
	case '/':
		result = numberOne/numberTwo;
		break;
	}

	std::cout << "Here is your result: " << result << std::endl;
	std::cout << "Thank you for using my calculator " << std::endl;

	return 0;
}