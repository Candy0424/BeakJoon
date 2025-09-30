#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

vector<string> board;
vector<vector<int>> visited;

void InsertQueue(queue<pair<int, int>>& q, int& x, int& y, pair<int, int>& next)
{
	if (board[y][x] != '1' || visited[y][x] != 0) return;

	q.push({ x, y });
	visited[y][x] = visited[next.second][next.first] + 1;
}

void bfs(int x, int y)
{
	queue<pair<int, int>> q;


	q.push({ x, y });

	visited[y][x] = 1;

	while (!q.empty())
	{
		pair<int, int> next = q.front();
		q.pop();

		int dX = next.first;
		int dY = next.second;

		int xIdx[] = { 1, -1, 0, 0 };
		int yIdx[] = { 0, 0, 1, -1 };

		for (int i = 0; i < 4; ++i)
		{
			int nX = dX + xIdx[i];
			int nY = dY + yIdx[i];
			if (nX < 0 || nY < 0 || nX >= board[0].size() || nY >= board.size()) continue;
			InsertQueue(q, nX, nY, next);
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;

	cin >> n >> m;

	board = vector<string>(n);
	visited = vector<vector<int>>(n, vector<int>(m));
	for (int i = 0; i < n; i++)
	{
		cin >> board[i];
	}

	bfs(0, 0);
	cout << visited[n - 1][m - 1];
}