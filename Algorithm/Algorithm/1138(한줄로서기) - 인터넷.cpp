#include <iostream>

using namespace std;

const int MAX = 10;

int n;
int line[MAX];

int main(void)
{
	cin >> n;

	//키 순서

	for (int i = 0; i < n; i++)
	{
		int left;
		cin >> left;


		for (int j = 0; j < n; j++)
			// 키 큰 사람들을 다 지났을 때
			if (left == 0 && line[j] == 0)
			{
				line[j] = i + 1;
				break;
			}
		//키 큰 사람이 있는 곳을 건너 뜀
			else if (line[j] == 0)
				left--;
	}

	for (int i = 0; i < n; i++)
		cout << line[i] << " ";

	return 0;

}
