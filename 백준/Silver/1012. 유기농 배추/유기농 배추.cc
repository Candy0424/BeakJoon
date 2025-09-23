#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void dfs(vector<vector<int>>& graph, vector<vector<bool>>& visited, int& x, int& y)
{
	queue<pair<int, int>> q;
	q.push({ x, y });
	visited[x][y] = true;
	
	while (!q.empty())
	{
		int dX = q.front().first;
		int dY = q.front().second;

		q.pop();

		if (dX + 1 < graph.size())
		{
			if (graph[dX + 1][dY] == 1 && !visited[dX + 1][dY])
			{
				int nextX = dX + 1;
				int nextY = dY;
				q.push({ nextX, nextY });
				visited[nextX][nextY] = true;
			}
		}
		if (dX - 1 >= 0)
		{
			if (graph[dX - 1][dY] == 1 && !visited[dX - 1][dY])
			{
				int nextX = dX - 1;
				int nextY = dY;
				q.push({ nextX, nextY });
				visited[nextX][nextY] = true;
			}
		}
		if (dY + 1 < graph[0].size())
		{
			if (graph[dX][dY + 1] == 1 && !visited[dX][dY + 1])
			{
				int nextX = dX;
				int nextY = dY + 1;
				q.push({ nextX, nextY });
				visited[nextX][nextY] = true;
			}
		}
		if (dY - 1 >= 0)
		{
			if (graph[dX][dY - 1] == 1 && !visited[dX][dY - 1])
			{
				int nextX = dX;
				int nextY = dY - 1;
				q.push({ nextX, nextY });
				visited[nextX][nextY] = true;
			}
		}
	}

}

int main()
{
	int t, m, n, k;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		int num = 0;
		cin >> m >> n >> k;
		vector<vector<int>> graph(m, vector<int>(n));
		vector<vector<bool>> visited(m, vector<bool>(n));
		for (int j = 0; j < k; ++j)
		{
			int a, b;

			cin >> a >> b;

			graph[a][b] = 1;
		}

		for (int x = 0; x < m; ++x)
		{
			for (int y = 0; y < n; ++y)
			{
				if (graph[x][y] == 1 && !visited[x][y])
				{
					num++;
					dfs(graph, visited, x, y);
				}
			}
		}

		cout << num << '\n';
	}
}