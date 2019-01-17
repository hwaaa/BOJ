#include <iostream>
using namespace std;

int main() {
	int n;
	int max = -1000000;
	int min = 1000000;
	int ans = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &ans);
		if (max < ans) {
			max = ans;
		}
		if (min > ans) {
			min = ans;
		}
	}

	printf("%d %d", min, max);
}