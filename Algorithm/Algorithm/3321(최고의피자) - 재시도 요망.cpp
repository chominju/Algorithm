#include <iostream>
#include <algorithm>

using namespace std;

int cmp(int a, int b)
{
	return a > b ? 1 : 0;
}

int main()
{
	int n; // ���� ���� ��
	int a, b; // a= ������ ���� , b=������ ����
	int c; //������ Į�θ�

	cin >> n; // ������ ���� �Է¹ޱ�
	int *d = new int[n]; // ������ �� ��ŭ �迭���� ( ������ Į�θ� )
	cin >> a >> b;
	cin >> c;
	for (int i = 0; i < n; i++)
		cin >> d[i];

	sort(d, d + n,cmp);
	
	int price = a;
	int cal = c;

	for (int i = 0; i < n; i++)
	{
		if ((float)cal / price < (float)(cal + d[i]) / (price + b))
		{
			cal += d[i];
			price += b;
		}
	}

	cout << cal / price;

	delete[]d;

	return 0;
}