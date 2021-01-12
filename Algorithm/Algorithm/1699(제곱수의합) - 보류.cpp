#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int i = sqrt(n);
	int min = 2147483646;
	
	for (int j = i; j >= 1; j--)
	{
		for (int k = j; k >= 1; k--)
		{
			int num = n;
			int temp = k;
			int count = 0;
			while (num)
			{
				int a = num - temp * temp;
				if (a >= 0)
				{
					num = a;
					count++;
				}
				else
					temp--;
			}
			if (min >= count)
				min = count;
		}
	}


	cout << min;

	return 0;
}