#include <iostream>
using namespace std;
int main()
{
	ios:: sync_with_stdio(false);
	cin.tie(NULL);

	int val;
	int a;
	int b;

	cin >> val;
	

	for (int i = 1; i <= val; i++) {
		cin >> a;
		cin >> b;

		cout << "Case #" << i << ":" << " " << a + b << endl;
	}

}	