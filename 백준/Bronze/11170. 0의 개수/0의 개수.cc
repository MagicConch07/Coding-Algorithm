	#include <iostream>
#include <string>

	using namespace std;

	int main()
	{
		int T = 0;
		int N = 0;
		int M = 0;
		int answer = 0;

		cin >> T;

		for(int i = 0; i < T; i++)
		{
			answer = 0;
			cin >> N >> M;

			for(int j = N; j <= M; j++)
			{
				string check = "";
				check = to_string(j);

				for(int k = 0; k < check.size(); k++)
				{
					if (check[k] == '0')
						answer++;
				}

			}

			cout << answer << endl;
		}
		
	}
