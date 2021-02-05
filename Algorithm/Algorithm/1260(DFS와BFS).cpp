#include <iostream>
#include <queue>
#include<cstring>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> vec[10001];
bool check[10001]; // 정점을 들렸는지 안들렸는지.
int n, m, v;

void DFS(int index)
{
	check[index] = true;
	cout << index << " ";
	int len = vec[index].size();
	for (int i = 0; i < len; i++)
	{
		int temp = vec[index][i];
		if (check[temp] == false)
			DFS(temp);
	}
}

void BFS(int index)
{
	queue<int> qu;
	qu.push(index);
	check[index] = true;

	while (!qu.empty())
	{
		int temp = qu.front();
		qu.pop();

		cout << temp << " ";

		int len = vec[temp].size();
		for (int i = 0; i < len; i++)
		{
			int temp2 = vec[temp][i];
			if (check[temp2] == false)
			{
				check[temp2] = true;
				qu.push(temp2);
			}
		}
	}

}


int main()
{
	cin >> n>>m>>v;

	for (int i = 0; i < m; i++)
	{
		int begin, end;
		cin >> begin >> end;

		vec[begin].push_back(end);
		vec[end].push_back(begin);
	}

	for (int i = 0; i <= n; i++)
	{
		sort(vec[i].begin(), vec[i].end());
	}

	DFS(v);
	cout << "\n";
	memset(check, false, sizeof(check));
	BFS(v);



	return 0;
}