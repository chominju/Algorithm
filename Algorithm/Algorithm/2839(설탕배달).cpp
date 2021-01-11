#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int kg5 = n / 5;
	int kg3 = 0;
	int sum;

	while (1)
	{
		int temp = n - kg5 * 5; // 남은 kg 수
		if (temp >= 3 || temp==0) // 3이상이라면?
		{
			if (temp % 3 == 0)
			{
				kg3 = temp / 3;
				sum = kg5 + kg3;
				break;
			}
		}

		kg5--; // 5kg -1개

		if (kg5 < 0)
		{
			sum = -1;
			break;
		}
	}
	cout << sum;
	return 0;
}