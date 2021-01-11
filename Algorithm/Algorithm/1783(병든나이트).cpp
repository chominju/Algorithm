#include<iostream>
#include <algorithm>

using namespace std;

int main()
{
	/* 
		1.			2.			3.			4.
		↑→		↑→→		↓→→		↓
		↑									↓→
	*/
	int n, m;
	cin >> n >> m;

	if (n == 1)										// 세로 1칸 = 이동불가
		cout << 1 << "\n";
	else if (n == 2)								// 세로 2칸 = 2,3 번가능
		cout << min(4, (m + 1) / 2) << "\n";		// 3회까지만 가능(자리4칸)

	else if (n >= 3) // 1, 2, 3, 4
	{
		if (m <= 6)
			cout << min(4, m) << "\n";				// 최대 4번
		else
			cout << m - 2 << "\n";					// 2,3 1회, 나머지 1,4
	}


	return 0;
}