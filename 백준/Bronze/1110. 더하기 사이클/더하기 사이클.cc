#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	int n;
	
	int count = 1;
	scanf("%d", &n);

	int check = n;
	while (1) {
		int a = n;
		int sum = 0;
		while (n>0) {
			sum= sum+ n % 10;
			n = n / 10;
		}
		sum = sum % 10;
		a = a % 10;
		n = a * 10 + sum;
		if (n == check) {
			break;
		}
		else {
			count++;
		}
	}
	printf("%d", count);

}