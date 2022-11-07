#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n, k;
    int m = 0;
    int a[100000] = { 0, };
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            a[m++] = i;
        }
    }
    
    for (int i = 0; i < m; i++) {
        for (int j = i; j < m; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("%d", a[k-1]);
}