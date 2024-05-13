#include <iostream>

using namespace std;

int main()
{
	long int n = 0, m = 0;

	cin >> n >> m;

	cout << (n > m ? n - m : m - n);
}   