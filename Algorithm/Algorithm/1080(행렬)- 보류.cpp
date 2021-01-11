#include <iostream>

using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;

	char**a = new char*[x+1];

	for (int i = 0; i < x; i++)
	{
		a[i] = new char[y+1];
		cin >> a[i];
	}

	char**b = new char*[x+1];

	for (int i = 0; i < x; i++)
	{
		b[i] = new char[y+1];
		cin >> b[i];
	}






	return 0;
}