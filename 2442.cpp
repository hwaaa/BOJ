#include <iostream>
using namespace std;

int main() {
	int n;
	int cnt = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = n; j > i+1; j--) {
			printf(" ");
		}
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
}