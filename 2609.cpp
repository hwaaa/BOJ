#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	int min = 0;
	if (a > b)	min = b;
	else
	{
		min = a;
	}

	int gcd = 1;	// gcd = �ִ�����
	for (int i = 2; i <= min; i++) {
		if (a%i == 0 && b%i == 0) {
			gcd = i;
		}
	}

	int lcm = 1;	// lcm = �ּҰ����
	lcm = gcd*(a/gcd)*(b/gcd);

	cout << gcd << endl;
	cout << lcm << endl;
}