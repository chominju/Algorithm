#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
#include <queue>

using namespace std;

const int MAX = 1050;
int n, m;
vector<int> v[MAX];
bool check_bfs[MAX];

void BFS() {
	queue<int> q; //Queue 생성
	q.push(0); //초기 시작점 저장
	check_bfs[0] = true; //초기 방문 체크

	while (!q.empty()) {
		int current = q.front();
		q.pop();
		printf("%d ", current);

		for (int i = 0; i < v[current].size(); i++) {
			int next = v[current][i];

			if (!check_bfs[next]) {
				check_bfs[next] = true;
				q.push(next);
			}
		}
	}
}

int main() {

	scanf("%d %d", &n, &m);

	//그래프 노드 관계 설정
	for (int i = 0; i < m; i++) {
		int a, b;
		scanf("%d %d", &a, &b);

		v[a].push_back(b);
		v[b].push_back(a);
	}

	BFS();
	return 0;
}