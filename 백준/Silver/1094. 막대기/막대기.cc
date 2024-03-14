#include <iostream>
#include <bitset>
#include <string>

int main()
{
	std::string input;
	int result = 0;

	std::cin >> input;

	input = std::bitset<7>(std::stoi(input)).to_string();

	for (int i = 0; i < 7; ++i)
	{
		if (input[i] == '1')
		{
			++result;
		}
	}

	std::cout << result;
}