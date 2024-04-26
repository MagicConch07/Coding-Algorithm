#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue<int> q;
	int n = 0;

	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		q.push(i);
	}

	if (n == 1)
	{
		cout << q.front();

		return 0;
	}
	
	for (int i = 0; i < n - 1; ++i)
	{
		q.pop();  // 빼고
		int temp = q.front();  // 앞을 넣고
		q.pop();  // 빼고
		q.push(temp);  // 넣고
	}

	cout << q.front();

}