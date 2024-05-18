#include <iostream>

using namespace std;

int main()
{
	int t = 0;
	int r = 0;
	string s;
	string p[1000];

	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		cin >> r;
		cin >> s;
		
		for (int j = 0; j < s.size(); ++j)
		{
			for (int k = 0; k < r; ++k)
			{
				p[i] += s[j];
			}
		}
	}
	
	for (int i = 0; i < t; ++i)
	{
		cout << p[i] << endl;
	}

}