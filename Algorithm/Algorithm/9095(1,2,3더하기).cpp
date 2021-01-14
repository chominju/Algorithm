#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;

		int dp[11] = { 0 };
		dp[1] = 1, dp[2] = 2, dp[3] = 4;

		for (int i = 4; i <= temp; i++)
			dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];

		cout << dp[temp] << "\n";
	}
	

	return 0;
}