#include <iostream>
#include <algorithm>

int main()
{
	int num[28];
	int count = 0;

	for (int i = 0; i < 28; ++i)
	{
		std::cin >> num[i];
	}

	std::sort(num, num + 28);

	for (int i = 0; i < 30; ++i)
	{
		if (count == 2) break;
		if (num[i - count] != i + 1)
		{
			std::cout << i + 1 << "\n";
			count++;
		}
	}
}