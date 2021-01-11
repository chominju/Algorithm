#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a;
	cin >> b;

	int temp1, temp2, temp3;

	temp1 = a * (b % 10);
	temp2 = a * ((b % 100) / 10);
	temp3 = a * (b / 100);

	cout << temp1 << "\n";
	cout << temp2 << "\n";
	cout << temp3 << "\n";
	cout << temp1 + temp2*10 + temp3*100;

	return 0;
}