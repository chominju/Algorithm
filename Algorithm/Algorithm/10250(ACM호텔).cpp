#include <iostream>

using namespace std;

int main()
{
	int t;				// �׽�Ʈ ������
	int h;				// h : ȣ�� ����
	int w;				// w : ������ �� ��
	int n;				// �� ��° �մ�

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> h >> w >> n;

		int temp1 = n % h;
		if (temp1 == 0)
			temp1 = h;

		int temp2 = (n-1) / h+1;

		cout << temp1;
		cout.width(2);
		cout.fill('0');
		cout<<temp2 << "\n";
	}
	
	return 0;
}