#include <iostream>

int sumTo(int paramter)
{
	int temp = 0;
	for (int i = 1; i <= paramter; i++)
	{
		 temp += i;
	}
	return temp;
}

void printNumber(int zahl)
{
	std::cout << zahl << " \n";
}

int main()
{
	int eingabe{ 0 };
	std::cout << "Gebe eine Zahl ein: ";
	std::cin >> eingabe;

	printNumber(sumTo(eingabe));

	return 0;
}
