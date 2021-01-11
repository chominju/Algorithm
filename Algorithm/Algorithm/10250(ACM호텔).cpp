#include <iostream>

using namespace std;

int main()
{
	int t;				// 테스트 데이터
	int h;				// h : 호텔 층수
	int w;				// w : 각층의 방 수
	int n;				// 몇 번째 손님

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