#include <iostream>

const double pi = 3.14159265358979;


using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	double r;
	cin >> r;

	// �Ҽ��� ����°�ڸ����� ��� 
	cout << fixed;
	cout.precision(6);
	// ��Ŭ����  
	cout << r * r * pi << '\n';
	// �ý�
	cout << r * r * 2 << '\n';

	return 0;
}