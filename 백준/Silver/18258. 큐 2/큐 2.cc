#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int controlnumber{0};

	string inputCommand;
	int num{0};

	queue<int> q;

	cin >> controlnumber;

	for (int i = 0; i < controlnumber; ++i)
	{
		cin >> inputCommand;

		if (inputCommand == "push")
		{
			cin >> num;
			q.push(num);
		}
		else if (inputCommand == "pop")
		{
			if (q.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << q.front() << "\n";
				q.pop();
			}
		}
		else if (inputCommand == "size")
		{
			cout << q.size() << "\n";
		}
		else if (inputCommand == "empty")
		{
			cout << q.empty() << "\n";
		}
		else if (inputCommand == "front")
		{
			if (q.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << q.front() << "\n";
			}
		}
		else if (inputCommand == "back")
		{
			if (q.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << q.back() << "\n";
			}
		}

	}
}