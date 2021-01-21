#include <iostream>
#include <algorithm>
using namespace std;

int house[1001][3];

int main() 
{
	int n;
	int cur[3];
	house[0][0] = 0;
	house[0][1] = 0;
	house[0][2] = 0;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> cur[0] >> cur[1] >> cur[2];
		house[i][0] = min(house[i - 1][1], house[i - 1][2]) + cur[0];
		house[i][1] = min(house[i - 1][0], house[i - 1][2]) + cur[1];
		house[i][2] = min(house[i - 1][1], house[i - 1][0]) + cur[2];
	}
	cout << min(house[n][2], min(house[n][0], house[n][1]));
}