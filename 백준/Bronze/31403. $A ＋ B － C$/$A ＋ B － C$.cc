#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, c;
	scanf("%d\n%d\n%d", &a, &b, &c);
	printf("%d\n", a + b - c);
	int temp = b;
	while (temp > 0) {
		a = a * 10;
		temp = temp / 10;
	}
	printf("%d", a + b - c);
	return 0;
}