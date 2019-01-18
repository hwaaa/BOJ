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
				word.pop();	// 스택이 비어있지 않으면 ( pop
			}
			else {
				return false;	// 스택이 비어있으면 false 리턴
			}
		}
	}
	return word.empty();	// 다 했는데 비어있음 true, 남아있음 false
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