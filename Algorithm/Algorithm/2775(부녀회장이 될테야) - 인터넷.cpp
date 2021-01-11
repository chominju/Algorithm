#include <iostream>

using namespace std;

int count(int a, int b)
{
	if (a == 0)
		return b;
	if (b == 1)
		return 1;
	return count(a - 1, b) + count(a, b - 1);
}

int main()
{
	int t, k, n;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> k >> n;
		cout << count(k, n) << "\n";
	}
	return 0;
}