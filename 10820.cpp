#include <iostream>
#include <stack>
#include <string>
using namespace std;
int cnt[30];
int upper = 0;	// 대문자
int lower = 0;	// 소문자
int blank = 0;	// 공백
int num = 0;	// 숫자

int main() {
	string word;

	while (getline(cin, word)) {	// 다음 줄 계속 받아줌
		lower = 0, upper = 0, blank = 0, num = 0;
		
		for (int i = 0; i < word.size(); i++) {
			if (word[i] >= 'A' && word[i] <= 'Z') {
				upper++;
			}
			else if (word[i] >= 'a' && word[i] <= 'z') {
				lower++;
			}
			else if (word[i] >= '0' && word[i] <= '9') {
				num++;
			}
			else {
				blank++;
			}
		}
		cout << lower << " " << upper << " " << num << " " << blank << endl;
	}
}