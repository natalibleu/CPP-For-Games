#include <iostream>

void swap(int* a, int* b);

void swapR(int& a, int& b);

int main()
{
	int a = 3;
	int b = 5;

	std::cout << "The values of a & b: " << a << " & " << b << std::endl;

	//swapping with pointers
	swap(&a, &b);

	//cleaning it for the next run!
	a = 3;
	b = 5;

	//swapping with references
	swapR(a, b);

	return 0;
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

	std::cout << "The values of a & b: " << *a << " & " << *b << std::endl;
}

void swapR(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;

	std::cout << "The values of a & b: " << a << " & " << b << std::endl;
}