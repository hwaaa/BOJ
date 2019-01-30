#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string b;
	int n, ans = 0;
	cin >> b >> n;
	int len = b.size();

	for (int i = 0; i < len; i++) {
		if (b[i] >= '0' && b[i] <= '9') {
			ans = ans*n + b[i] - '0';
		}
		else
		{
			ans = ans*n + (b[i] + 10 - 'A');
		}
	}
	printf("%d\n", ans);
}