#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

void dfs(int& start, vector<int>*& graph, vector<bool>& visite)
{
	vector<int> nextNodes;
	visite[start - 1] = true;
	cout << start << ' ';

	for (int i = 0; i < graph[start - 1].size(); ++i)
	{
		int next = graph[start - 1][i];
		if (!visite[next-1])
		{
			nextNodes.push_back(next);
		}
	}

	if (!nextNodes.empty())
	{
		sort(nextNodes.begin(), nextNodes.end());
		for (int i = 0; i < nextNodes.size(); ++i)
		{
			if (!visite[nextNodes[i] - 1])
				dfs(nextNodes[i], graph, visite);
		}
	}
}
void bfs(int& start, vector<int>*& graph, vector<bool>& visite)
{
	queue<int> q;

	q.push(start);
	visite[start - 1] = true;

	while (!q.empty())
	{
		vector<int> nextNodes;

		int value = q.front();
		cout << value << ' ';
		q.pop();

		for (int i = 0; i < graph[value - 1].size(); ++i)
		{
			int next = graph[value - 1][i];
			if (!visite[next - 1])
				nextNodes.push_back(next);
		}

		if (!nextNodes.empty())
		{
			sort(nextNodes.begin(), nextNodes.end());
			for (int i = 0; i < nextNodes.size(); ++i)
			{
				int next = nextNodes[i];
				if (!visite[next - 1])
				{
					q.push(next);
					visite[next - 1] = true;
				}
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, v;
	
	cin >> n >> m >> v;

	vector<bool> visite(n);
	vector<int>* graph = new vector<int>[n];

	for (int i = 0; i < m; ++i)
	{
		int node, next;
		cin >> node >> next;
		graph[node - 1].push_back(next);
		graph[next - 1].push_back(node);
	}

	dfs(v, graph, visite);
	cout << '\n';
	visite = vector<bool>(n);
	bfs(v, graph, visite);
}