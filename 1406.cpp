#include <iostream>
#include <stack>
#include <string>
using namespace std;

// ¿¡µðÅÍ

int main() {
	stack<char> left;
	stack<char> right;

	string word, cmd;
	int tc;
	cin >> word;

	int len = word.size();
	for (int i = 0; i < len; i++) {
		left.push(word[i]);
	}
	
	cin >> tc;
	for (int i = 0; i < tc; i++) {
		cin >> cmd;

		if (cmd == "L") {
			if (!left.empty()) {
				right.push(left.top());
				left.pop();
			}
		}
		else if (cmd == "D") {
			if (!right.empty()) {
				left.push(right.top());
				right.pop();
			}
		}
		else if (cmd == "B") {
			if (!left.empty()) {
				left.pop();
			}
		}
		else if (cmd == "P") {
			char put;
			cin >> put;
			left.push(put);
		}
	}

	while (!left.empty()) {
		right.push(left.top());
		left.pop();
	}

	while(!right.empty()) {
		cout << right.top();
		right.pop();
	}
	
	cout << endl;
	return 0;
}