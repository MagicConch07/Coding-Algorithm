#include <iostream>

int main() 
{
	int n, m;
	char board[50][50];
	int min = 64;

	std::cin >> n >> m;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cin >> board[i][j];
		}
	}

	for (int i = 0; i < n - 7; ++i)
	{
		for (int j = 0; j < m - 7; ++j)
		{
			int change1 = 0;
			int change2 = 0;

			for (int k = i; k < i + 8; ++k)
			{
				for (int p = j; p < j + 8; ++p)
				{
					if ((k + p) % 2 == 0)
					{
						if (board[k][p] != 'W') change1++;
						if (board[k][p] != 'B') change2++;
					}
					else 
					{
						if (board[k][p] != 'B') change1++;
						if (board[k][p] != 'W') change2++;
					}

				}
			}

			int temp = (change1 < change2) ? change1 : change2;

			if (temp == 0)
			{
				std::cout << 0;
				return 0;
			}
			else if (temp < min)
			{
				min = temp;
			}

		}
	}
	std::cout << min;
}
