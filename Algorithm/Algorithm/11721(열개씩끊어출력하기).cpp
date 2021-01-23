#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	cin >> str;

	int len = str.length();
	for (int i = 0; i < len; i++)
	{
		if (i % 10 == 0&&i!=0)
			cout << "\n";
		
		cout << str[i];
	}

	return 0;
}