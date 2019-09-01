#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
// 나이순 정렬

struct Member {
	int age;
	string name;
};

bool compare(const Member &u, const Member &v) {
	return u.age < v.age;
}

int main() {
	int n;
	scanf("%d", &n);
	vector<Member> mem(n);

	for (int i = 0; i < n; i++) {
		cin >> mem[i].age >> mem[i].name;
	}

	stable_sort(mem.begin(), mem.end(), compare);

	for (int i = 0; i < n; i++) {
		cout << mem[i].age << " " << mem[i].name << '\n';
	}
}