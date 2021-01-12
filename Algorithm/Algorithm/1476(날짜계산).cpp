#include <iostream>

using namespace std;

int main()
{
	int e; // 1~15
	int s; // 1~28
	int m; // 1~19
	cin >> e >> s >> m;

	int temp1 = 1;
	int temp2 = 1;
	int temp3 = 1;

	int count = 1;

	while (temp1 != e || temp2 != s || temp3 != m)
	{
		count++;
		temp1++;
		temp2++;
		temp3++;

		if (temp1 >= 16)
			temp1 = 1;
		if (temp2 >= 29)
			temp2 = 1;
		if (temp3 >= 20)
			temp3 = 1;
	}

	cout << count;
	return 0;
}