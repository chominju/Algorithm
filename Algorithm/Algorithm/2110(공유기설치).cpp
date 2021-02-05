#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
const int MAX = 200000;

int n, c;
vector<int> house;

bool possible(int dist)
{
	int cnt = 1;
	int prev = house[0];
	//조건 충족하는지 확인

	for (int i = 1; i < n; i++)
		if (house[i] - prev >= dist)
		{
			cnt++;
			prev = house[i];
		}

	//조건 충족
	if (cnt >= c)
		return true;
	return false;
}



int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> c;

	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		house.push_back(temp);
	}

	sort(house.begin(), house.end());

	//최소거리, 최대 거리
	int low = 1, high = house[n - 1] - house[0];
	int result = 0;
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (possible(mid))
		{
			result = max(result, mid);
			low = mid + 1;
		}
		else
			high = mid - 1;
	}
	cout << result << "\n";
	return 0;

}
