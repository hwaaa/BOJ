#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> pnum;

bool prime(int n) {
	if (n < 2)	return false;
	for (int i = 2; i <= n - 1; i++) {
		if (n%i == 0)	return false;
	}
	return true;
}

int main() {
	int n, p, cnt = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &p);
		if (prime(p)) {
			cnt += 1;
		}
	}
	printf("%d", cnt);
}