#include <iostream>

using namespace std;


int main()
{
	int n, k;
	cin >> n >> k;

	int deno = 1, num = 1;
	for (int i = 0; i < k; i++)
	{
		deno *= (n - i);
		num *= (k - i);
	}

	cout << deno / num;


	return 0;
}