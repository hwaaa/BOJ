#include <iostream>
#include <stack>
#include <string>
using namespace std;

string rot13(string s) {
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'A' && s[i] <= 'M')	s[i] += 13;
		else if (s[i] >= 'N' && s[i] <= 'Z') s[i] -= 13;
		else if (s[i] >= 'a' && s[i] <= 'm') s[i] += 13;
		else if (s[i] >= 'n' && s[i] <= 'z') s[i] -= 13;
	}
	return s;
}

int main() {
	string word;
	getline(cin, word);
	
	cout << rot13(word) << endl;
}