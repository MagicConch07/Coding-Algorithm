#include <iostream>;
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> numCard;
	vector<int> result;
	int n = 0;
	int m = 0;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int temp = 0;
		cin >> temp;
		numCard.push_back(temp);
	}

	sort(numCard.begin(), numCard.end());

	cin >> m;

	for (int i = 0; i < m; ++i)
	{
		int temp = 0;
		cin >> temp;

		result.push_back(upper_bound(numCard.begin(), numCard.end(), temp) - lower_bound(numCard.begin(), numCard.end(), temp));
	}

	for (auto v: result)
	{
		cout << v << " ";
	}
}