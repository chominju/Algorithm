#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int cnt = 0;
vector<int> vec[1000];
bool check[1000];

void dfs(int index)
{
	queue<int> qu;
	check[index] = true;
	qu.push(index);

	while (!qu.empty())
	{
		int front = qu.front();
		qu.pop();

		int len = vec[front].size();
		for (int i = 0; i < len; i++)
		{
			int temp = vec[front][i];
			if (!check[temp])
			{
				check[temp] = true;
				qu.push(temp);
				cnt++;
			}
		}
	}

}

int main()
{
	int n;
	cin >> n;
	int m;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int begin, end;
		cin >> begin >> end;

		vec[begin].push_back(end);
		vec[end].push_back(begin);
	}

	for (int i = 0; i <= n; i++)
		sort(vec[i].begin(), vec[i].end());

	dfs(1);
	cout << cnt;


	return 0;
}