#include <iostream>

int main()
{
	char zahlen{ 'a' };
	while (zahlen <= 'z' )
	{
		std::cout << zahlen << " " << static_cast<int>(zahlen) << " \n";
		++zahlen;
	}
	return 0;
}