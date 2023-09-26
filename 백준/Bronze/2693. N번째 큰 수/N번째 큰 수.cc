	#include <iostream>

	using namespace std;

	int main()
	{
		int A[10];
		const int N = 3;
		int T = 0;
		int firstMax = 0;
		int secondMax = 0;
		int thirdMax = 0;

		cin >> T;

		for(int i = 0; i < T; i++)
		{
			firstMax = 0;
			secondMax = 0;
			thirdMax = 0;

			for(int j = 0; j < 10; j++)
			{
				cin >> A[j];
			}

			for (int j = 0; j < 10; j++)
			{
				if (A[j] > firstMax)
					firstMax = A[j];
			}

			for (int j = 0; j < 10; j++)
			{
				if (A[j] > secondMax && A[j] != firstMax)
					secondMax = A[j];
			}

			for (int j = 0; j < 10; j++)
			{
				if (A[j] > thirdMax && A[j] != firstMax && A[j] != secondMax)
					thirdMax = A[j];
			}

			cout << thirdMax << endl;

		}
	}
