#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int arr[100] = { 0, };
	int keep = 0, check = 1; // 0 : mixed 1: as 2: des
	for (int i = 0; i < 8; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 1; i <= 8; i++) {
		if (arr[i-1] != i) {
			check = 0;
		}
	}
	if (check == 1) {
		printf("ascending");
		return 0;
	}
	
	check = 1;
	for (int i = 8; i >= 1; i--) {
		if (arr[8-i] != i) {
			check = 0;
		}
	}
	if (check == 1) {
		printf("descending");
	}
	else {
		printf("mixed");
	}


	return 0;
}