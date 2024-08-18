#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;
	int a[1000] = { 0, };
	int arr[1000] = { 0, };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n; i++) {
		arr[a[i]]++;
	}

	int max = arr[1], max_idx = 1;
	for (int i = 1; i <= n; i++) {
		if (max < arr[i]) {
			max = arr[i];
			max_idx = i;
		}
	}

	if (max_idx == 1 && max == 0) {
		printf("skipped");
		return 0;
	}

	int found = 1;

	//printf("%d %d", max, max_idx);
	for (int i = 1; i <= n; i++) {
		if (max == arr[i] && max_idx != i) {
			printf("skipped");
			found = 0;
			return 0;
		}
	}

	if (found != 0) {
		printf("%d", max_idx);
	}
	return 0;
}

