#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    int n;
    int ans[100] = { 0, };
    int a[100][100] = {0,};
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            ans[i] = ans[i] + a[i][j];
        }
    }
    for (int i = 0; i < t; i++) {
        printf("%d\n", ans[i]);
    }
    
    
}