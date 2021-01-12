#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int stick = 64;
	int temp = 64;
	int cnt = 1;
	while (1)
	{
		if (stick == n)
			break;
		temp /= 2;

		if (stick - temp >= n)
			stick -= temp;
		else
			cnt++;
	}
	cout << cnt;
	return 0;
}