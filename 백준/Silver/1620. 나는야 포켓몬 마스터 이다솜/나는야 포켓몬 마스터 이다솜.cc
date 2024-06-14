#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
	int n, m = 0;
	string input;
	unordered_map<string, int> stringList;
	unordered_map<int, string> numList;
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n; ++i)
	{
		cin >> input;
		stringList[input] = i + 1;
		numList[i + 1] = input;
	}

	for (int i = 0; i < m; ++i)
	{
		cin >> input;

		if (input[0] >= '0' && input[0] <= '9')
			cout << numList[stoi(input)] << "\n";
		else
			cout << stringList[input] << "\n";
	}
}