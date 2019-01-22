#include <iostream>
#include <stack>
#include <string>
using namespace std;
int cnt[30];

int main() {
	string word;
	cin >> word;
	
	int len = word.size();
	for (int i = 0; i < len; i++) {
		cnt[word[i]-97]++;
	}

	for (int i = 0; i < 26; i++) {
		cout << cnt[i] << " ";
	}
	cout << endl;
}