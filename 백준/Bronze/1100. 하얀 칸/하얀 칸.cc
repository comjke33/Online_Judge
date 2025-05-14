#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char chess[8][9] = { 0, };
	int sum = 0;

	for (int i = 0; i < 8; i++) {
		scanf("%s", chess[i]);

		for (int j = 0; j < 8; j++) {
			if ((i + j) % 2 == 0 && chess[i][j] == 'F') {
				// printf("%d %d %c\n", i, j, chess[i][j]);
				sum++;
			}
		}
	}

	printf("%d", sum);

	return 0;

}