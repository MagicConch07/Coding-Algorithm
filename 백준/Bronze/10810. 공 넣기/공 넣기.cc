#include <iostream>

int main()
{
	int n, m, i, j, k;
	int arr[101] = { 0 };

	std::cin >> n >> m;

	for (int x = 0; x < m; ++x)
	{
		std::cin >> i >> j >> k;
		for (; i <= j; ++i)
		{
			arr[i - 1] = k;
		}
	}

	for (int z = 0; z < n; ++z)
	{
		std::cout << arr[z] << " ";
	}
}