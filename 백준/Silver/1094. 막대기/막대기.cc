#include <iostream>
#include <bitset>

int main()
{
	std::string input;
    int num = 0;
	int result = 0;

	std::cin >> num;

	input = std::bitset<7>(num).to_string();

	for (int i = 0; i < 7; ++i)
	{
		if (input[i] == '1')
		{
			++result;
		}
	}

	std::cout << result;
}