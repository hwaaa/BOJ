#include <iostream>
#include <cstring>
#include <cstdio>	
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
void distance(int curnum, int cnt);
// 치킨 배달
#define MAX 987654321;

int map[51][51];
bool open[14];
vector<pair<int, int>> chicken;
vector<pair<int, int>> house;
int n, m;
//int house_cnt = 0, chicken_cnt = 0;
int ans = MAX;

int main() {

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];

				if (map[i][j] == 1) {
					house.push_back(make_pair(i, j));	// 집 좌표 저장
				}
				else if (map[i][j] == 2) {
					chicken.push_back(make_pair(i, j));		// 치킨집 좌표 저장
				}
		}
	}

	// 탐색 시작
	distance(0, 0);

	cout << ans << "\n";
	return 0;
}

void distance(int curnum, int cnt) {
	if (cnt == m) {	// 치킨집 m개
		int dis = 0;	// 치킨 거리
		for (int i = 0; i < house.size(); i++) {
			int temp = MAX;	// 치킨 거리 저장
			for (int j = 0; j < chicken.size(); j++) {
				if (open[j]) {
					int r1 = house[i].first;
					int c1 = house[i].second;
					int r2 = chicken[j].first;
					int c2 = chicken[j].second;
					int temp2 = abs(r1 - r2) + abs(c1 - c2);	// 작은 거리 채택
					temp = min(temp, temp2);
				}
			}
			dis += temp;	// (전체) 치킨 거리 다 더해줌
		}
		ans = min(ans, dis);	// ans = 전체 치킨 거리 중 작은 거리
		return;
	}

	for (int i = curnum; i < chicken.size(); i++) {
		if (!open[i]) {
			open[i] = true;
			distance(i + 1, cnt + 1);
			open[i] = false;
		}
	}

}