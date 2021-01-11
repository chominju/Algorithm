#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;

		int temp1 = a;
		int temp2 = b;
		int temp3 = a % b;
		while (temp3 != 0)
		{
			temp1 = temp2;
			temp2 = temp3;
			temp3 = temp1 % temp2;
		}
		cout << temp2 * (a / temp2)*(b / temp2) << "\n";
	}
	return 0;
}