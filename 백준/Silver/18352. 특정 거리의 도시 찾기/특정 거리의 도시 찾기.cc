#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
vector<int>visited;
vector<vector<int>>v;

void BFS(int n)
{
	queue<int> q;
	q.push(n);
	visited[n] = 0;

	while (q.empty() == false)
	{
		int x = q.front();
		q.pop();

		for (int i = 0; i < v[x].size(); ++i)
		{
			int next = v[x][i];
			if (visited[next] == -1)
			{
				q.push(next);
				visited[next] = visited[x] + 1;
			}
		}
	}
}
	
int main()
{
	int n, m, dis, start, v1, v2;
	cin >> n >> m >> dis >> start;
	v.resize(n + 1);
	visited.resize(n + 1, -1);

	for (int i = 0; i < m; i++)
	{
		cin >> v1 >> v2;
		v[v1].push_back(v2);
	}
	BFS(start);

	bool none = true;
	for (int i = 1; i <= n; i++)
	{
		if (visited[i] == dis) {
			cout << i << "\n";
			none = false;
		}
	}
	if (none) cout << -1;
}