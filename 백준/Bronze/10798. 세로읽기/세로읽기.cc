#include <iostream>

using namespace std;

int main()
{
	string arr[5];

	for (int x = 0; x < 6; ++x)
	{
		if (x < 5) 
		{
			cin >> arr[x];
		}
		else
		{
			for (int i = 0; i < 15; ++i)
			{
				for (int j = 0; j < 5; ++j)
				{
					if (arr[j].size() > i)
						cout << arr[j][i];
				}
			}
		}

	}
}