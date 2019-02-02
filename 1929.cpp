#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int pn = 0;
bool c[1000001];	// ���������� true ����
int n = 1000000;	// 1000000������ �Ҽ�

int main() {
	// �����佺�׳׽��� ü
	c[0] = true;
	c[1] = true;
	for (int i = 2; i*i <= n; i++) {
		if (c[i] == false) {
			for (int j = i+i; j <= n; j += i) {
				c[j] = true;
			}
		}
	}

	int m, n;
	scanf("%d %d", &m, &n);
	for (int i = m; i <= n; i++) {
		if (c[i] == false) {
			printf("%d\n", i);
		}
	}
}