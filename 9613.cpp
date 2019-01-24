#include <iostream>
#include <stack>
#include <string>
using namespace std;

int num[100];

int gcd(int a, int b) {
	int min = 0;
	int g = 0;
	if (a > b)	min = b;
	else
	{
		min = a;
	}

	for (int i = 2; i <= min; i++) {
		if (a%i == 0 && b%i == 0) {
			g = i;
		}
	}
	return g;
}

int main() {
	int tc;	
	scanf("%d", &tc);

	for (int m = 0; m < tc; m++) {
		
		int n;
		scanf("%d", &n);

		for (int k = 0; k < n; k++) {
			scanf("%d", &num[k]);
		}

		long long int ans = 0;

		for (int i = 0; i < n-1; i++) {
			for (int j = i + 1; j < n; j++) {
				ans += gcd(num[i], num[j]);
			}
		}
		printf("%lld\n", ans);
	}	
	
}