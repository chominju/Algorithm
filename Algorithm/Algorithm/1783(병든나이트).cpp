#include<iostream>
#include <algorithm>

using namespace std;

int main()
{
	/* 
		1.			2.			3.			4.
		���		����		����		��
		��									���
	*/
	int n, m;
	cin >> n >> m;

	if (n == 1)										// ���� 1ĭ = �̵��Ұ�
		cout << 1 << "\n";
	else if (n == 2)								// ���� 2ĭ = 2,3 ������
		cout << min(4, (m + 1) / 2) << "\n";		// 3ȸ������ ����(�ڸ�4ĭ)

	else if (n >= 3) // 1, 2, 3, 4
	{
		if (m <= 6)
			cout << min(4, m) << "\n";				// �ִ� 4��
		else
			cout << m - 2 << "\n";					// 2,3 1ȸ, ������ 1,4
	}


	return 0;
}