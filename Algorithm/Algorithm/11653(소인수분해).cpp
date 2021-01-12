#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int index = 2;
	while (n!=1)
	{
		if (n%index == 0) // 나누어 떨어질때
		{
			cout << index<<"\n";
			n = n / index;
		}
		else
			index++;
	}

	return 0;
}