#include<iostream>
#include<string>
using namespace std;

int main() {
	int cnt;
	int min = 50;
	string a, b;

	cin >> a >> b;
	int dlen = b.length() - a.length(); 

	for (int i = 0; i <= dlen; i++) // 차이만큼
	{
		cnt = 0;

		for (int j = 0; j < a.length(); j++) 
		{
			if (a[j] != b[i + j]) 
				cnt++;
		}

		if (min > cnt)
			min = cnt;
	}
	cout << min << endl;
	
}