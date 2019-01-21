#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	queue<int> josep;
	for (int i = 1; i <= n; i++) {
		josep.push(i);
	}

	cout << "<";
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < m - 1; j++) {
			josep.push(josep.front());
			josep.pop();
		}
		cout << josep.front() << ", ";
		josep.pop();
	}
	cout << josep.front() << ">" << endl;
}