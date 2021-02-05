#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> ve;


void search(int value)
{
	int begin = 0;
	int len = ve.size();
	int end = ve.size() - 1;
	bool found = false;
	int count = 0;
	int mid = 0;
	int i = 1;

	int mid_l;
	int mid_r;

	while (end - begin >= 0)
	{
		if (found == false)
		{
			mid = (begin + end) / 2;

			if (ve[mid] == value)
			{
				count++;
				found = true;
			}
			else if (value <ve[mid])
				end = mid - 1;
			else
				begin = mid + 1;
		}
		else
		{
			bool check = false;
			int r = mid + i;
			int l = mid - i;
	
			if (r < len)
				if (ve[r] == value)
				{
					count++;
					check = true;
				}

			if (l >=0)
				if (ve[l] == value)
				{
					count++;
					check = true;
				}
			i++;
			if (!check)
				break;
		}
	}

	cout << count << " ";

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int n; // 가지고 있는 카드 수
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		ve.push_back(temp);
	}

	sort(ve.begin(), ve.end());

	int m; // 숫자 카드 수
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int temp;
		cin >> temp;
		search(temp);
	}

	return 0;
}