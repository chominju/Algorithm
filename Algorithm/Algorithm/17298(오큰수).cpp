#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

int main()
{
	int n;
	int num;
	vector<int> ve;
	stack<int> st;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		ve.push_back(num);
	}

	vector<int> ans(ve.size(), -1);

	for (int i = 0; i < ve.size(); i++) {
		while (!st.empty() && ve[st.top()] < ve[i]) {
			ans[st.top()] = ve[i];
			st.pop();
		}
		st.push(i);
	}

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}

	return 0;
}