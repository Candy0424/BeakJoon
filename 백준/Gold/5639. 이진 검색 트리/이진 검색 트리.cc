#include <iostream>
#include <vector>

using namespace std;

void MakeNode(int& key, vector<int> tree[], int node)
{
	tree[node].push_back(key);
	tree[node].push_back(-1);
	tree[node].push_back(-1);
}

void insertNode(int& key, vector<int> tree[], int target)
{
	if (tree[0].size() == 0)
	{
		MakeNode(key, tree, 0);
		return;
	}

	while(true)
	{
		if (key < tree[target][0])
		{
			if (tree[target][1] == -1)
			{
				MakeNode(key, tree, key);
				tree[target][1] = key;
				return;
			}
			else
			{
				target = tree[target][1];
				continue;
			}
		}
		else if (key > tree[target][0])
		{
			if (tree[target][2] == -1)
			{
				MakeNode(key, tree, key);
				tree[target][2] = key;
				return;
			}
			else
			{
				target = tree[target][2];
				continue;
			}
		}
	}
}

void PostorderTraverse(vector<int> tree[], int a)
{
	if (tree[a][1] != -1)
		PostorderTraverse(tree, tree[a][1]);
	if (tree[a][2] != -1)
		PostorderTraverse(tree, tree[a][2]);
	cout << tree[a][0] << '\n';
}

int main()
{
	vector<int> tree[10000001];

	int a;

	while (cin >> a)
	{
		insertNode(a, tree, 0);
	}
	PostorderTraverse(tree, 0);
}