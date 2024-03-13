#include <iostream>

int main()
{
	int n, m, i, j, temp;
	int arr[101] = { 0 };

	std::cin >> n >> m;

	for (int x = 0; x < n; ++x)
	{
		arr[x] = x + 1;
	}

	for (int x = 0; x < m; ++x)
	{
		std::cin >> i >> j;

		temp = arr[i - 1];
		arr[i - 1] = arr[j - 1];
		arr[j - 1] = temp;

	}

	for (int z = 0; z < n; ++z)
	{
		std::cout << arr[z] << " ";
	}
}