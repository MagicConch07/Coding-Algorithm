#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	float result = 0;
	cin >> str;

	if (str == "A+")
	{
		result = 4.3;
	}
	else if (str == "A0")
	{
		result = 4.0;
	}
	else if (str == "A-")
	{
		result = 3.7;
	}
	else if (str == "B+")
	{
		result = 3.3;
	}
	else if (str == "B0")
	{
		result = 3.0;
	}
	else if (str == "B-")
	{
		result = 2.7;
	}
	else if (str == "C+")
	{
		result = 2.3;
	}
	else if (str == "C0")
	{
		result = 2.0;
	}
	else if (str == "C-")
	{
		result = 1.7;
	}
	else if (str == "D+")
	{
		result = 1.3;
	}
	else if (str == "D0")
	{
		result = 1.0;
	}
	else if (str == "D-")
	{
		result = 0.7;
	}


	cout.precision(1);
	cout << fixed;
	cout << result;
}
