#include <iostream>
#include <stack>
#include <string>
using namespace std;
int cnt[30];
int upper = 0;	// �빮��
int lower = 0;	// �ҹ���
int blank = 0;	// ����
int num = 0;	// ����

int main() {
	string word;

	while (getline(cin, word)) {	// ���� �� ��� �޾���
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