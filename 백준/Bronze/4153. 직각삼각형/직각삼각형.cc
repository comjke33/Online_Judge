#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int answer[100000] = { 0, };
	int t = 0;
	while (1) {
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);

		if (a == 0 && b == 0 && c == 0) {
			break;
		}
		if (a > b && b > c) { // c b a
			int temp = a;
			a = c;
			c = temp;
		}
		else if (b < c && c < a) {
			int temp = a;
			a = c;
			c = temp;
		}
		else if (a < c && c < b) { // a c b
			int temp = c;
			c = b;
			b = temp;
		}
		else if (b < c && c < a) { // b c a
			int temp = c;
			c = a;
			a = temp;

			temp = a;
			a = b;
			b = temp;
		}

		if (c * c == a * a + b * b) {
			answer[t] = 1;
		}
		else {
			answer[t] = 0;
		}

		t++;
	}

	for (int i = 0; i < t; i++) {
		if (answer[i] == 0) {
			printf("wrong\n");
		}
		else {
			printf("right\n");
		}
	}
	
	
	return 0;
}