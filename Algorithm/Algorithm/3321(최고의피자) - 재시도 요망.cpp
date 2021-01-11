#include <iostream>
#include <algorithm>

using namespace std;

int cmp(int a, int b)
{
	return a > b ? 1 : 0;
}

int main()
{
	int n; // 토핑 종류 수
	int a, b; // a= 도우의 가격 , b=토핑의 가격
	int c; //도우의 칼로리

	cin >> n; // 토핑의 개수 입력받기
	int *d = new int[n]; // 토핑의 수 만큼 배열생성 ( 토핑의 칼로리 )
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