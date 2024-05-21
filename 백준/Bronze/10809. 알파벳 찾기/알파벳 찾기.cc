#include <iostream>

using namespace std;

int main()
{
	int alphabet[26];
	int alphabetNum[26];
	string s;

	cin >> s;

	for (int i = 0; i < sizeof(alphabet) / sizeof(alphabet[0]); ++i)
	{
		alphabet[i] = 97 + i;
		alphabetNum[i] = -1;
	}

	for (int i = 0; i < s.size(); ++i)
	{
		for (int j = 0; j < sizeof(alphabet) / sizeof(alphabet[0]); ++j)
		{
			if (s[i] == alphabet[j])
			{
				if (alphabetNum[j] != -1) break;
				alphabetNum[j] = i;
				break;
			}
		}
	}

	for (int i = 0; i < sizeof(alphabetNum) / sizeof(alphabetNum[0]); ++i)
	{
		cout << alphabetNum[i] << " ";
	}
	
}