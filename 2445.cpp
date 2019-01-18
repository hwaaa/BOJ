#include <iostream>
using namespace std;

int main() {
	int n;
	int cnt = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		for (int j = 0; j < n-i; j++) {
			printf("  ");
		}
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n-i; j++) {
			printf("*");
		}
		for (int j = 1; j <= i; j++) {
			printf("  ");
		}
		for (int j = 0; j < n-i; j++) {
			printf("*");
		}
		printf("\n");
	}
}