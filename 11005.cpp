#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
vector<int> ans;

int main() {
	int n, b;
	scanf("%d %d", &n, &b);
	while (n > 0) {
		int temp = n%b;
		if (temp < 10) {
			ans.push_back(temp);
		}
		else {
			ans.push_back(temp - 10 + 'A');
		}
		n /= b;
	}
	int len = ans.size();
	while (len--) {
		
		if (ans[len] >= 10) {
			char c = ans[len];
			cout << c;
		}
		else {
			cout << ans[len];
		}
	}
}