#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int answer[100000] = { 0, };
	int idx = 0, b, n;

	while (1) {
		scanf("%d %d", &b, &n);
		if (b == 0 && n == 0) {
			break;
		}
		int line = 1;
		int result, previous_line = 1, previous_temp = 1;

		while (1) {
			int temp = 1;
			for (int i = 0; i < n; i++) {
				temp = temp * line;
			}
			if (temp > b) {
				if ((temp - b) < (b - previous_temp)) {
					result = line;
					break;
				}
				else {
					result = previous_line;
					break;
				}
			}
			previous_line = line;
			previous_temp = temp;
			line++;
		}
		
		answer[idx] = result;
		idx++;
	}
	
	for (int i = 0; i < idx; i++) {
		printf("%d\n", answer[i]);
	}

	
	return 0;
}