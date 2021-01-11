#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	int temp1 = a;
	int temp2 = b;
	int temp3 = temp1 % temp2;

	while (temp3!=0)
	{
		temp1 = temp2;
		temp2 = temp3;
		temp3 = temp1 % temp2;
	}

	cout << temp2 << "\n";

	cout << temp2 * (a / temp2)*(b / temp2);


	return 0;
}