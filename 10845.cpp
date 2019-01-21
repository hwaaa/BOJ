#include <iostream>
#include <queue>
#include <string>
using namespace std;

queue<int> Q;

int main() {
	string cmd;
	int tc;

	cin >> tc;

	for (int i = 0; i < tc; i++) {
		cin >> cmd;
		if (cmd == "push") {
			int num;
			cin >> num;
			Q.push(num);
		}
		else if (cmd == "pop") {
			if (Q.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << Q.front() << endl;
				Q.pop();
			}
		}
		else if (cmd == "size") {
			cout << Q.size() << endl;
		}
		else if (cmd == "empty") {
			if (Q.empty()) {
				cout << "1" << endl;
			}
			else {
				cout << "0" << endl;
			}
		}
		else if (cmd == "front") {
			if (Q.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << Q.front() << endl;
			}
		}
		else if (cmd == "back") {
			if (Q.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << Q.back() << endl;
			}
		}
	}

}