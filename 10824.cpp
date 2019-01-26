#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	string val1 = to_string(a) + to_string(b);
	string val2 = to_string(c) + to_string(d);
	long long int num1 = stoll(val1);
	long long int num2 = stoll(val2);
	cout << num1 + num2 << endl;
}