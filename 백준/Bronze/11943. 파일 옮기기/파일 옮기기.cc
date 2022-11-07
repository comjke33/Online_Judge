#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans1 = 0;
    int ans2 = 0;
    ans1 = a + d;
    ans2 = c + b;
    if (ans1 < ans2) {
        printf("%d", ans1);
    }
    else {
        printf("%d", ans2);
    }
}