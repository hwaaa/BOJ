#include <iostream>
#include <cstring>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 1001
using namespace std;
// 순열 사이클

int arr[MAX][MAX];
bool visited[MAX];
int n;

void DFS(int c) {
	visited[c] = true;
	for (int i = 1; i <= n; i++) {
		if (visited[i] || arr[c][i] == 0) {
			continue;
		}
		DFS(i);
	}
}

int main() {
	int tc;
	cin >> tc;
	for (int k = 0; k < tc; k++) {
		int cnt = 0;
		int num;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> num;
			arr[i][num] = 1;
		}
		for (int i = 1; i <= n; i++) {
			if (!visited[i]) {
				cnt += 1;
				DFS(i);
			}
		}
		cout << cnt << endl;
		memset(arr, 0, sizeof(arr));
		memset(visited, false, sizeof(visited));
	}
}