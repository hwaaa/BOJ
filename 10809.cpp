#include <iostream>
#include <stack>
#include <string>
using namespace std;
int cnt[30];

int main() {
	string word;
	cin >> word;

	int len = word.size();
	for (int i = 0; i < 26; i++) {
		cnt[i] = -1;
	}

	for (int i = 0; i < len; i++) {
		if (cnt[word[i] - 97] == -1) {	// 처음 등장하면 넣어주기
			cnt[word[i] - 97] = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		cout << cnt[i] << " ";
	}
	cout << endl;
}