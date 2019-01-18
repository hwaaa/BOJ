#include <iostream>
using namespace std;

int main() {
	int n;
	int cnt = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n-i; j++) {
			printf(" ");
		}
		for (int j = 1; j <= (2*i)-1; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (int k = 1; k <= n; k++) {
		for (int j = 1; j <= k; j++) {
			printf(" ");
		}
		for (int j = 1; j <= 2*(n-k)-1; j++) {
			printf("*");
		}
		printf("\n");
	}
}