#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int arr[102][102]; // 사과가 있는 바둑판

int s[101]; // 시간
char d[101]; // 방향
int main()
{
	int n;
	int k;
	queue<pair<int,int>> qu;
	cin >> n;
	cin >> k;

	for (int i = 0; i < k; i++)  // 사과넣기
	{
		int x, y;
		cin >> x >> y;
		arr[x][y] = 1;
	}

	int l;
	cin >> l;
	for (int i = 0; i < l; i++)
	{
		int x; char c;
		cin >> x >> c;
		s[i] = x;
		d[i] = c;
	}

	int time = 0;
	pair <int, int> xy;
	xy.first = 1;
	xy.second = 1;
	qu.push(xy);

	int tempx = 0;
	int tempy = 1;
	int s_index = 0;
	int len = 1;
	bool roof = true;
	while (roof)
	{
		xy.first += tempx;
		xy.second += tempy;
		time++;

		if (xy.first == n + 1 || xy.second == n + 1||xy.first==0||xy.second==0) // 벽을 만났거나, 몸을 만났을 때
			break;

		for (int i = 0; i < len; i++)
		{
			if (qu.front() == xy)
			{
				roof = false;
			}
			else
			{
				qu.push(qu.front());
				qu.pop();
			}
		}

		if (arr[xy.first][xy.second] == 1) // 사과발견!
		{
			arr[xy.first][xy.second] = 0;
			len++;
			qu.push(xy);
		}
		else // 사과를 발견하지 못했을 때
		{
			qu.push(xy);
			qu.pop();
		}


		if (time == s[s_index]) // 회전을 만났을 때
		{
			if (d[s_index] == 'D') // 우회전
			{
				if (tempx > 0)
				{
					tempy = -1;
					tempx = 0;
				}
				else if(tempx<0)
				{
					tempy = 1;
					tempx = 0;
				}
				else
				{
					if (tempy > 0)
					{
						tempy = 0;
						tempx = 1;
					}
					else
					{
						tempy = 0;
						tempx = -1;
					}
				}
			}
			else // 좌회전
			{
				if (tempx > 0)
				{
					tempy = 1;
					tempx = 0;
				}
				else if(tempx<0)
				{
					tempy = -1;
					tempx = 0;
				}
				else
				{
					if (tempy > 0)
					{
						tempy = 0;
						tempx = -1;
					}
					else
					{
						tempy = 0;
						tempx = 1;
					}
				}
			}
			s_index++;
		}
	}

	cout << time;



	return 0;
}