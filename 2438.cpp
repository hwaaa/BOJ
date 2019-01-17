#include <iostream>
using namespace std;

int main() {
	int n;
	int cnt = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		cnt++;
		for (int j = 0; j < cnt; j++) {
			printf("*");
		}
		printf("\n");
	}
}