#include <iostream>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	if (n == 1) {
		printf("*");
	}

	for (int i = 1; i < n; i++) {
		for (int j = 1; j <= n - i; j++) {
			printf(" ");
		}
		for (int j = 1; j <= 1; j++) {
			printf("*");
		}
		for (int j = 2; j < (2 * i) - 1; j++) {
			printf(" ");
		}
		for (int j = 1; j <= 1; j++) {
			if (j == 1) {

			}
			if (i >= 2) {
				printf("*");
			}
		}
		if (i == (n - 1)) {
			printf("\n");
			for (int j = 1; j <= (2 * i) + 1; j++) {
				printf("*");
			}
		}
		printf("\n");
	}
}