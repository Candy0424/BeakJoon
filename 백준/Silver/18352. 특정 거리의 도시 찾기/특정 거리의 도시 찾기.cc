#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;


int n, m, k, x;;
vector<vector<int>> graph(300001);
unordered_map<int, vector<int>> dist;
vector<int> visited(300001);
queue<int> q;

void bfs()
{
	q.push(x);
	visited[x] = 0;
	dist[0].push_back(x);

	while (!q.empty())
	{
		int next = q.front();
		
		q.pop();
		for (int i = 0; i < graph[next].size(); ++i)
		{
			int nextNode = graph[next][i];

			if (visited[nextNode] == -1)
			{
				q.push(nextNode);
				int dis = visited[next] + 1;
				visited[nextNode] = dis;
				dist[dis].push_back(nextNode);
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	fill(visited.begin(), visited.end(), -1);

	cin >> n >> m >> k >> x;

	for (int i = 0; i < m; ++i)
	{
		int a, b;

		cin >> a >> b;

		graph[a].push_back(b);
	}

	bfs();
	sort(dist[k].begin(), dist[k].end());
	if (dist[k].size() == 0)
	{
		cout << -1;
	}
	else
	{
		for (auto num : dist[k])
		{
			cout << num << "\n";
		}
	}
}