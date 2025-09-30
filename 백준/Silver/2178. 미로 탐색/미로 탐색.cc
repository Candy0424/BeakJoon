#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

vector<string> board;
vector<vector<int>> visited;

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

		if (dX + 1 < board[0].size())
		{
			if (board[dY][dX + 1] == '1' && visited[dY][dX + 1] == 0)
			{
				visited[dY][dX + 1] = visited[next.second][next.first] + 1;
				q.push({ dX + 1, dY });
			}
		}
		if (dX - 1 >= 0)
		{
			if (board[dY][dX - 1] == '1' && visited[dY][dX - 1] == 0)
			{
				visited[dY][dX - 1] = visited[next.second][next.first] + 1;
				q.push({ dX - 1, dY });
			}
		}
		if (dY + 1 < board.size())
		{
			if (board[dY + 1][dX] == '1' && visited[dY + 1][dX] == 0)
			{
				visited[dY + 1][dX] = visited[next.second][next.first] + 1;
				q.push({ dX, dY + 1 });
			}
		}
		if (dY - 1 >= 0)
		{
			if (board[dY - 1][dX] == '1' && visited[dY - 1][dX] == 0)
			{
				visited[dY - 1][dX] = visited[next.second][next.first] + 1;
				q.push({ dX, dY - 1 });
			}
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