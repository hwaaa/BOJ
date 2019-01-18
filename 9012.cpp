#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool check(string s) {
	stack<char> word;

	for (int i = 0; i < s.size(); i++) {
		char c = s[i];
		if (c == '(') {
			word.push(s[i]);
		}
		else {
			if (!word.empty()) {
				word.pop();	// ������ ������� ������ ( pop
			}
			else {
				return false;	// ������ ��������� false ����
			}
		}
	}
	return word.empty();	// �� �ߴµ� ������� true, �������� false
}

int main() {
	string s;
	int tc;
	
	cin >> tc;
	
	for (int i = 0; i < tc; i++) {
		cin >> s;
		if (check(s)) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	
}