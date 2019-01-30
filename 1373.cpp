#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string two;
	cin >> two;

	int len = two.size();
	if (len % 3 == 1) {
		cout << two[0];
	}
	else if (len % 3 == 2) {
		cout << (two[0] - '0') * 2 + (two[1] - '0');
	}

	for (int i = len % 3; i < len; i+=3) {
		cout << (two[i] - '0') * 4 + (two[i + 1] - '0') * 2 + (two[i + 2] - '0');
	}
}