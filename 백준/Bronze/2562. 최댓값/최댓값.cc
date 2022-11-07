#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a[10000] = { 0, };
    for (int i = 0; i < 9; i++) {
        scanf("%d", &a[i]);
    }
    int max = a[0];
    int check = 0;
    for (int i = 0; i < 9; i++) {
        if (max < a[i]) {
            max = a[i];
            check = i;
        }
    }
    printf("%d\n%d", max, check+1);
}