#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	vector <int> ve;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		ve.push_back(temp);
	}

	int m;
	cin >> m;
	vector<int> ve2;
	for (int i = 0; i < m; i++)
	{
		int temp;
		cin >> temp;
		ve2.push_back(temp);
	}
	for (int i = 0; i < m; i++)
	{
		bool check = false;
		for (int j = 0; j < n; j++)
		{
			if (ve2[i] == ve[j])
			{
				check = true;
				break;
			}		
		}
		if (check)
			cout << "1" << " ";
		else
			cout << "0" << " ";
	}

	return 0;
}