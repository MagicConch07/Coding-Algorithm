#include <iostream>
#include <algorithm>

int main()
{
	int num[10];
	int changeNum = 0, result = 1;

	for (int i = 0; i < 10; ++i)
	{
		std::cin >> num[i];
		num[i] %= 42;
	}

	std::sort(num, num + 10);


	for (int i = 0; i < 9; ++i)
	{
		changeNum = num[i];
		if (changeNum != num[i + 1])
		{
			result++;
		}
	}

	std::cout << result;
}