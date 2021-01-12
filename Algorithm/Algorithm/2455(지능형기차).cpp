#include <iostream>

using namespace std;

int main()
{
	int max = 0;
	int cur = 0;
	for (int i = 0; i < 4; i++)
	{
		int in, out;
		cin >> out >> in;

		cur = cur - out + in;
		if (max <= cur)
			max = cur;
	}

	cout << max;


	return 0;
}