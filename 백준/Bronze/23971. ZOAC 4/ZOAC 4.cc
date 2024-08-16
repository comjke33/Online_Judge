#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int h, w, n, m;
	scanf("%d %d %d %d", &h, &w, &n, &m);
	int a, b;
	a = (h / (n + 1));
	if ((h % (n + 1)) != 0) {
		a++;
	}
	b = (w / (m + 1));
	if (w % (m + 1) != 0 ) {
		b++;
	}
	printf("%d", a*b);
	
	return 0;
}