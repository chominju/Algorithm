#include <iostream>
#include <queue>

using namespace std;

int ve[25][25];
bool check[625];

int n;
queue<int> cnt;
int cou = 0;
void dfs(int x,int y)
{
	check[x*n + y] = true;

	for (int i = x; i < n; i++)
	{
		for (int j = y; j < n; j++)
		{
			if (!check[i * 7 + j] && ve[i][j] == 1)
			{
				check[x*n + y] = true;
				cou++;
				if (j != n || i != n)
				{
					if (ve[i][j + 1] == 1)
						dfs(i, j + 1);
					else if (ve[j][j - 1] == 1)
						dfs(i, j - 1);
					else if (ve[i + 1][j] == 1)
						dfs(i + 1, j);
					else if (ve[i - 1][j] == 1)
						dfs(i - 1, j);
				}
			}
		}
	}

}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> ve[i][j];
		}
	}

	dfs(0, 0);


	return 0;
}