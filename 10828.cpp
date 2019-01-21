#include <iostream>
#include <stack>
#include <string>
using namespace std;

stack<int> stk;

int main() {
	string cmd;
	int tc;

	cin >> tc;

	for (int i = 0; i < tc; i++) {
		cin >> cmd;
		if (cmd == "push") {
			int num;
			cin >> num;
			stk.push(num);
		}
		else if (cmd == "pop") {
			if (stk.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << stk.top() << endl;
				stk.pop();
			}
		}
		else if (cmd == "size") {
			cout << stk.size() << endl;
		}
		else if (cmd == "empty") {
			if (stk.empty()) {
				cout << "1" << endl;
			}
			else {
				cout << "0" << endl;
			}
		}
		else if (cmd == "top") {
			if (stk.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << stk.top() << endl;
			}
		}
	}

}