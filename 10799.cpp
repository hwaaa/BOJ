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
		else {	// ���� ��ȣ�� ������ ���ϱ�
			if (stk.top() + 1 == i) {
				stk.pop();	
				ans += stk.size();
			}
			else {
				stk.pop();
				ans += 1;
			}
		}
	}
	cout << ans << endl;
}