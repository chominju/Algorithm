#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int count = 0;
	int temp;
	while (1)
	{
		if (n - 50000 >= 0)
		{
			temp = 50000;
		}
		else if (n - 10000 >= 0)
		{
			temp = 10000;
		}
		else if (n - 5000 >= 0)
		{
			temp = 5000;
		}
		else if (n - 1000 >= 0)
		{
			temp = 1000;
		}
		else if (n - 500 >= 0)
		{
			temp = 500;
		}
		else if (n - 100 >= 0)
		{
			temp = 100;
		}
		else if (n - 50 >= 0)
		{
			temp = 50;
		}
		else if (n - 10 >= 0)
		{
			temp = 10;
		}
		else
		{
			break;
		}
		n -= temp;
		count++;
	}

	cout << count;

	return 0;
}