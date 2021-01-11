#include <iostream>

using namespace std;

int main()
{
	int n;				// n : ������ ���� 
	int k;				// k : ��ġ�� ��
	cin >> n >> k;

	int *arr = new int[n];
	int *num = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int price = k;
	int count = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		int quo = price/arr[i];
		if (quo > 0) // ���� ���� ���
		{
			count += quo;
			price -= arr[i] * quo;
		}
	}

	cout << count;

	delete[]arr;
	delete[]num;
	return 0;
}