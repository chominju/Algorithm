#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> ve;

void Solution(int n, int key) {

	int start = 0;
	int end = n - 1;
	int mid;

	while (end - start >= 0)
	{
		mid = (start + end) / 2;

		if (ve[mid] == key)  // 같을 떄
		{  
			cout << "1" << "\n";
			return;
		}
		else if (ve[mid] > key) // 왼쪽으로 탐색
		{ 
			end = mid - 1;
		}
		else // 오른쪽으로 탐색
		{ 
			start = mid + 1;
		}
	}

	cout << "0" << "\n";
	return;
}

int main(void) {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int n, m;

	//입력
	cin >> n;

	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		ve.push_back(temp);
	}
	sort(ve.begin(), ve.end());   //quick sort를 이용해 배열 오름차순으로 정렬

	//입력
	cin >> m;

	for (int i = 0; i < m; i++) {
		int temp;
		cin >> temp;
		Solution(n, temp);
	}

	return 0;
}
