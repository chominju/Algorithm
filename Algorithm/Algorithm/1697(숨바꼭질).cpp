#include <iostream>
#include <queue>
using namespace std;

int ve[100001];
bool check[100001];
int main()
{
	int n, k;
	cin >> n >> k;

	queue<int> qu;

	qu.push(n);
	check[n] = true;
	while (!qu.empty())
	{
		int len = qu.size();

		for (int i = 0; i < len; i++)
		{
			int front = qu.front();
			qu.pop();
			int temp1 = front - 1;
			int temp2 = front + 1;
			int temp3 = front * 2;
			
			if(temp1>=0)
				if (!check[temp1])
				{
					qu.push(temp1);
					check[temp1] = true;
					ve[temp1] = ve[front] + 1;
				}
			if (temp2 >= 0&&temp2 <= k)
				if (!check[temp2])
				{
					qu.push(temp2);
					check[temp2] = true;
					ve[temp2] = ve[front] + 1;
				}
			if (temp3 > 0&&temp3<=100000)
				if (!check[temp3])
				{
					qu.push(temp3);
					check[temp3] = true;
					ve[temp3] = ve[front] + 1;
				}
		}
	}

	cout << ve[k];

	return 0;
}