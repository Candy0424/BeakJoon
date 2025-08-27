#include <iostream>
#include <vector>

using namespace std;

void insertNode(vector<pair<int, pair<int, int>>>& tree, pair<int, pair<int, int>> target, int idx)
{
	if (tree.size() == 0)
	{
		tree.push_back(target);
		return;
	}

	while(true)
	{
		if (target.first < tree[idx].first)
		{
			if (tree[idx].second.first == -1)
			{
				tree[idx].second.first = tree.size();
				tree.push_back(target);
				return;
			}
			else
			{
				idx = tree[idx].second.first;
				continue;
			}
		}
		else if (target.first > tree[idx].first)
		{
			if (tree[idx].second.second == -1)
			{
				tree[idx].second.second = tree.size();
				tree.push_back(target);
				return;
			}
			else
			{
				idx = tree[idx].second.second;
				continue;
			}
		}
	}
}

void PostorderTraverse(vector<pair<int, pair<int, int>>>& tree, int a)
{
	if (tree[a].second.first != -1)
		PostorderTraverse(tree, tree[a].second.first);
	if (tree[a].second.second != -1)
		PostorderTraverse(tree, tree[a].second.second);
	cout << tree[a].first << '\n';
}

int main()
{
	vector<pair<int, pair<int, int>>> tree;

	int a;

	while (cin >> a)
	{
		insertNode(tree, { a, {-1, -1} }, 0);
	}
	PostorderTraverse(tree, 0);
}