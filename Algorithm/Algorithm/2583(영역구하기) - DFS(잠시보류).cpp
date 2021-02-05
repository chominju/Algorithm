#include <iostream>

using namespace std;

int ve[10000];
int main()
{
	int m, n, k;
	cin >> m >> n >> k;

	for (int i = 0; i < k; i++)
	{
		int tempX1, tempY1;
		int tempX2, tempY2;
		cin >> tempX1 >> tempY1 >> tempX2 >> tempY2;

		ve[(tempX1 + 1) * tempY1*n] = 1;
		ve[(tempX2) * (tempY2 - 1)*n] = 1;

		for (int i = 0; i < tempX2 - tempX1; i++)
		{
			ve[tempX1 + 1 * tempY1*n ] = 1;
		}
	}
	
	return 0;
}