#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, k, max = 0;
	cin >> n >> k;
	vector<int> vec(n);
	
	for (int i = 0; i < n; ++i)
	{
		int input = 0;
		cin >> input;
		vec.push_back(input);

		if (input > max)
			max = input;
	}

	long long left = 1;
	long long right = max;
	long long mid = (left + right) / 2;

	while (left <= right)
	{
		int count = 0;
		
		for (auto v : vec)
			count += v / mid;

		if (count >= k)
			left = mid + 1;
		else
			right = mid - 1;

		mid = (left + right) / 2;
	}

	cout << mid;
}