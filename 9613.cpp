#include <iostream>
#include <stack>
#include <string>
using namespace std;

int num[100];

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a%b);
}

int main() {
	int tc;	
	scanf("%d", &tc);

	while (tc--) {
		
		int n;
		scanf("%d", &n);

		for (int k = 0; k < n; k++) {
			scanf("%d", &num[k]);
		}

		int ans = 0;
		for (int i = 0; i < n-1; i++) {
			for (int j = i + 1; j < n; j++) {
				ans += gcd(num[i], num[j]);
			}
		}
		printf("%d\n", ans);
	}	
}