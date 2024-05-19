#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	bool word = false;
	int result = 0;

	getline(cin, s);
	s += " ";
	for (int i = 0; i < s.size() - 1; ++i)
	{
		if (s[i] != ' ')
			word = true;
		else
			word = false;
		
		if (word && s[i + 1] == ' ')
			result++;
	}

	cout << result;
}