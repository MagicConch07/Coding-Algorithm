#include <iostream>
#include <string>

int main()
{
	int input;
	int result = 0;

	std::cin >> input;

	for (int i = 0; i < 7; ++i)
	{
		if (input & (1 << i)) ++result;
	}

	std::cout << result;
}