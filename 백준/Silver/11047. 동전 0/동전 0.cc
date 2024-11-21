#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, k;
	int answer = 0;
	cin >> n >> k;
	vector<int> coin;

	for (int i = 0; i < n; ++i)
	{
		int input = 0;
		cin >> input;
		coin.push_back(input);
	}

	while (k > 0)
	{
		int max = 0;

		for (int i = 0; i < coin.size(); ++i)
		{
			if (coin[i] <= k && max < coin[i])
			{
				max = coin[i];
			}
		}

		k -= max;
		answer++;
	}

	cout << answer;
}
