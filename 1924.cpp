#include <iostream>
using namespace std;

int main() {
	int x, y;
	int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	scanf("%d %d", &x, &y);

	// 2007년 1월 1일 = MON
	// 2007년에는 1, 3, 5, 7, 8, 10, 12월은 31일까지
	// 4, 6, 9, 11월은 30일까지, 2월은 28일까지
	int d = 0;

	for (int i = 0; i < x; i++) {
		if ((i + 1) == x) {
			d += y;
		}
		else {
			d += month[i];
		}
	}

	switch (d % 7) {
	case 0:
		printf("SUN");
		break;
	case 1:
		printf("MON");
		break;
	case 2:
		printf("TUE");
		break;
	case 3:
		printf("WED");
		break;
	case 4:
		printf("THU");
		break;
	case 5:
		printf("FRI");
		break;
	case 6:
		printf("SAT");
		break;
	}
}