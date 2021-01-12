#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		long long begin, end;
		cin >> begin >> end;

		long long move, max = 0;

		while (max*max <= end - begin)
			max++;
		max--;
		move = 2 * max - 1;
		long long num = end - begin - max * max;
		num = (long long)ceil((double)num / (double)max);
		move += num;
		cout << move << "\n";

	}

	return 0;
}