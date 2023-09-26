	#include <iostream>

	using namespace std;

	int main()
	{
	    int n[9];
		int max = 0;
		int index = 0;

		for(int i = 0; i < 9; i++)
		{
			cin >> n[i];
		}

		for(int i = 0; i < 9; i++)
		{
			if (n[i] > max)
			{
				max = n[i];
				index = i + 1;
			}
		}

		cout << max << "\n" << index;

	}
