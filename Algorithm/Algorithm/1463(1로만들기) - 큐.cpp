#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int n;
	cin >> n;
	queue<int> arr;

	int cnt = 0;
	bool check = true;
	arr.push(n);

	if (n == 1)
		cnt = 0;
	else
	{
		while (check)
		{
			cnt++;
			int len = arr.size();
			for (int i = 0; i < len; i++)
			{
				if (arr.front() % 3 == 0)
				{
					int temp = arr.front() / 3;
					if (temp == 1)
					{
						check = false;
						break;
					}
					arr.push(temp);
				}

				if (arr.front() % 2 == 0)
				{
					int temp = arr.front() / 2;
					if (temp == 1)
					{
						check = false;
						break;
					}
					arr.push(temp);
				}

				int temp = arr.front() - 1;
				if (temp == 1)
				{
					check = false;
					break;
				}
				arr.push(temp);

				arr.pop();
			}
		}
	}

	printf("%d", cnt);
	



	return 0;
}