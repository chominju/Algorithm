#include <iostream>

using namespace std;

int main()
{
	int d[3] = { 1,5,10 };

	int a, b, cnt = 0;
	cin >> a >> b;

	while (a != b)
	{
		if (a < b)
		{
			int tmp = a;
			a = b;
			b = tmp;
		}

		int result = a - b, index;
		for (int i = 0; i < 3; i++)
		{
			if (abs(a - b - d[i]) < result)
			{
				result = abs(a - b - d[i]);
				index = i;
			}
		}
		a -= d[index];
		cnt++;
	}
	cout << cnt;
}