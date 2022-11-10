#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int t;
    int ans[10000] = { 0, };
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int v, e;
        scanf("%d %d", &v, &e);
        ans[i] = 2 - (v - e);
    }
    for (int i = 0; i < t; i++) {
        printf("%d\n", ans[i]);
    }

}