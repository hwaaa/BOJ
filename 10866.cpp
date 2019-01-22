#include <iostream>
#include <deque>
#include <string>
using namespace std;

deque<int> deq;

int main() {
	string cmd;
	int tc;

	cin >> tc;

	for (int i = 0; i < tc; i++) {
		cin >> cmd;
		if (cmd == "push_front") {
			int num;
			cin >> num;
			deq.push_front(num);
		}
		else if (cmd == "push_back") {
			int num;
			cin >> num;
			deq.push_back(num);
		}
		else if (cmd == "pop_front") {
			if (deq.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << deq.front() << endl;
				deq.pop_front();
			}
		}
		else if (cmd == "pop_back") {
			if (deq.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << deq.back() << endl;
				deq.pop_back();
			}
		}
		else if (cmd == "size") {
			cout << deq.size() << endl;
		}
		else if (cmd == "empty") {
			if (deq.empty()) {
				cout << "1" << endl;
			}
			else {
				cout << "0" << endl;
			}
		}
		else if (cmd == "front") {
			if (deq.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << deq.front() << endl;
			}
		}
		else if (cmd == "back") {
			if (deq.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << deq.back() << endl;
			}
		}
	}

}