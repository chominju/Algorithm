#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a, b, c;
	int arr[10] = { 0, };
	cin >> a;
	cin >> b;
	cin >> c;

	int temp = a * b*c;
	string str = to_string(temp);

	for (int i = 0; i < str.size(); i++)
	{
		arr[(char)(str[i])-'0']++;
	}
	for (int i = 0; i < 10; i++)
		cout << arr[i] << "\n";



	return 0;
}