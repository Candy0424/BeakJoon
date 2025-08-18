#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

void DFS(int start, vector<int>*& graph, vector<bool>& visited)
{
	vector<int> nextNodes;
	visited[start-1] = true;
	cout << start << " ";
	for (int i = 0; i < graph[start - 1].size(); ++i)
	{
		int next = graph[start - 1][i];
		if (!visited[next-1])
		{
			nextNodes.push_back(next);
		}
	}

	if (!nextNodes.empty())
	{
		sort(nextNodes.begin(), nextNodes.end());
		for (int i = 0; i < nextNodes.size(); ++i)
		{
			if (!visited[nextNodes[i] - 1])
			{
				DFS(nextNodes[i], graph, visited);
			}
		}
	}
}

void BFS(int start, vector<int>*& graph, vector<bool>& visited)
{
	queue<int> q;

	q.push(start);
	visited[start - 1] = true;

	while (!q.empty())
	{
		vector<int> nextNodes;

		int node = q.front();
		q.pop();
		cout << node << " ";

		for (int i = 0; i < graph[node - 1].size(); ++i)
		{
			int next = graph[node - 1][i];

			if (!visited[next - 1])
			{
				nextNodes.push_back(next);	
			}
		}

		if (!nextNodes.empty())
		{
			sort(nextNodes.begin(), nextNodes.end());

			for (int i = 0 ; i < nextNodes.size(); ++i)
			{
				if (!visited[nextNodes[i] - 1])
				{
					q.push(nextNodes[i]);
					visited[nextNodes[i] - 1] = true;
				}
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, v;

	cin >> n >> m >> v;

	vector<bool> visited(n);
	vector<int>* graph = new vector<int>[n];

	for (int i = 0; i < m; ++i)
	{
		int node, next;

		cin >> node >> next;
		graph[node - 1].push_back(next);
		graph[next - 1].push_back(node);
	}


	DFS(v, graph, visited);
	visited = vector<bool>(n);
	cout << '\n';
	BFS(v, graph, visited);
}