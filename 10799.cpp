#include <iostream>
#include <stack>
#include <string>
using namespace std;
stack<int> stk;

int main() {
	string bracket;
	cin >> bracket;

	int len = bracket.size();
	int ans = 0;
	for (int i = 0; i < len; i++) {
		if (bracket[i] == '(') {
			stk.push(i);
		}
		else {	// 닫힌 괄호가 나오면 비교하기
			if (stk.top() + 1 == i) {
				stk.pop();	// 스택이 비어있지 않으면 ( pop
				ans += stk.size();
			}
			else {
				stk.pop();	// 스택이 비어있으면 false 리턴
				ans += 1;
			}
		}
	}
	cout << ans << endl;
}