#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

void bfs(int& start, vector<int>*& graph, vector<bool>& visite, int& num)
{
	queue<int> q;

	q.push(start);
	visite[start - 1] = true;
	
	while (!q.empty())
	{
		vector<int> nextNodes;
		int node = q.front() - 1;
		q.pop();
		for (int i = 0; i < graph[node].size(); ++i)
		{
			int next = graph[node][i];
			if (!visite[next - 1])
				nextNodes.push_back(next);
		}

		if (!nextNodes.empty())
		{
			for (int i = 0; i < nextNodes.size(); ++i)
			{
				int next = nextNodes[i];
				if (!visite[next - 1])
				{
					q.push(next);
					visite[next - 1] = true;
					num++;
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
	
	int n, m, num = 0, start = 1;

	cin >> n >> m;

	vector<bool> visite(n);
	vector<int>* graph = new vector<int>[n];

	for (int i = 0; i < m; ++i)
	{
		int node, next;
		cin >> node >> next;

		graph[node - 1].push_back(next);
		graph[next - 1].push_back(node);
	}

	if (!graph->empty())
		bfs(start, graph, visite, num);

	cout << num;
}