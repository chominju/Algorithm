#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int arr[102][102]; // ����� �ִ� �ٵ���

int s[101]; // �ð�
char d[101]; // ����
int main()
{
	int n;
	int k;
	queue<pair<int,int>> qu;
	cin >> n;
	cin >> k;

	for (int i = 0; i < k; i++)  // ����ֱ�
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

		if (xy.first == n + 1 || xy.second == n + 1||xy.first==0||xy.second==0) // ���� �����ų�, ���� ������ ��
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

		if (arr[xy.first][xy.second] == 1) // ����߰�!
		{
			arr[xy.first][xy.second] = 0;
			len++;
			qu.push(xy);
		}
		else // ����� �߰����� ������ ��
		{
			qu.push(xy);
			qu.pop();
		}


		if (time == s[s_index]) // ȸ���� ������ ��
		{
			if (d[s_index] == 'D') // ��ȸ��
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
			else // ��ȸ��
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