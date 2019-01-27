#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
vector<string> dic;

int main() {
	string word;
	getline(cin, word);
	dic.push_back(word);
	
	string cut;

	for (int i = 1; i < word.size(); i++) {
		cut = word.substr(i, word.size() - 1);
		dic.push_back(cut);
	}
	sort(dic.begin(), dic.end());

	for (int i = 0; i < dic.size(); i++) {
		cout << dic[i] << endl;
	}
}