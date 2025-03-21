#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() {
	char s[1000] = { 0 };
	int count[1000] = { 0 };
	scanf("%s", s);
	for (int i = 0; i < strlen(s); i++) {
		count[s[i]]++;
	}
	for (int i = 97; i < 123; i++) {
		printf("%d ", count[i]);
	}
}