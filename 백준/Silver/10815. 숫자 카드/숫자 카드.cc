#include <iostream>
#include <set>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, input = 0;
	set<int> s;

	cin >> n;
	
	for (int i = 0; i < n; ++i)
	{
		cin >> input;
		s.insert(input);
	}

	cin >> m;

	for (int i = 0; i < m; ++i)
	{
		int result = 0;

		cin >> input;
		if (s.find(input) != s.end())
			cout << "1 ";
		else
			cout << "0 ";
	}
}