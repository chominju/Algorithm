#include <iostream>

using namespace std;

int main()
{
	int l, p, v;

	int i = 0;

	while(1)
	{

		cin >> l >> p >> v;

		if (l == 0 && p == 0 && v == 0)
			break;

		i++;
		int temp1, temp2;
		temp1 = v / p;
		temp2 = v % p;

		if (temp2 > l)
		{
			temp2 = l;
		}
		cout << "Case " << i << ": " << l * temp1 + temp2 << "\n";
	}

	return 0;
}