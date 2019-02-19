#include <iostream>

int main()
{
	for (char zahlen = 'a'; zahlen <= 'z'; zahlen++)
	{
		std::cout << zahlen << " " << static_cast<int>(zahlen) << " \n";
	}
	return 0;
}