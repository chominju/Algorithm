#include <iostream>

using namespace std;

const int MAX = 10;

int n;
int line[MAX];

int main(void)
{
	cin >> n;

	//Ű ����

	for (int i = 0; i < n; i++)
	{
		int left;
		cin >> left;


		for (int j = 0; j < n; j++)
			// Ű ū ������� �� ������ ��
			if (left == 0 && line[j] == 0)
			{
				line[j] = i + 1;
				break;
			}
		//Ű ū ����� �ִ� ���� �ǳ� ��
			else if (line[j] == 0)
				left--;
	}

	for (int i = 0; i < n; i++)
		cout << line[i] << " ";

	return 0;

}
