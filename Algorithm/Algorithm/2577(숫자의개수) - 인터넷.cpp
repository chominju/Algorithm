#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	int arr[10] = { 0, };
	cin >> a;
	cin >> b;
	cin >> c;

	int temp = a * b*c;

	while (temp!=0)
	{
		arr[temp % 10]++;
		temp /= 10;
	}

	for (int i = 0; i < 10; i++)
		cout << arr[i] << "\n";

	return 0;
}