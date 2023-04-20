#include <iostream>
using namespace std;
int main()
{
	int budget = 0;
	int item;
	int	a, b;
	int total;
	int maxtotal = 0;

	cin >> budget;
	cin >> item;

	int loop = item;

	for (int i = 0; i < loop; i++) {
		cin >> a >> b;
		total = a * b;
		maxtotal += total;

	}

	if (maxtotal == budget) {
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}

}	


	