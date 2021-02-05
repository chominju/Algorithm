#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int n;
int map[25][25] = { 0 };
bool visited[25][25];

int dx[] = { 0, 1, 0, -1 };
int dy[] = { -1, 0, 1, 0 };

int dfs(int x, int y) 
{
	visited[x][y] = true;
	int count = 0;
	for (int i = 0; i < 4; i++) {
		int xx = x + dx[i];
		int yy = y + dy[i];

		if (xx >= 0 && yy >= 0 && xx < n && yy < n && map[xx][yy] == 1 && !visited[xx][yy]) {
			visited[xx][yy] = true;
			count++;
			count += dfs(xx, yy);
		}
	}
	return count;
}


int main(void) {
	cin >> n;

	//입력
	for (int i = 0; i < n; i++) 
	{
		string  str;
		cin >> str;
		for (int j = 0; j < n; j++)
		{
			map[i][j] = str[j] - '0';
		}
	}

	//수행
	vector<int> answer;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j] == 1 && !visited[i][j])
				answer.push_back(dfs(i, j));
		}
	}

	//출력
	sort(answer.begin(), answer.end());
	int size = 0;
	size = answer.size();
	cout << answer.size() << endl;
	for (int v : answer) {
		cout << v + 1 << endl;
	}
	return 0;
}