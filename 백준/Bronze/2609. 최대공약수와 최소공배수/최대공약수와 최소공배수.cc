#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d", &a, &b);
    if (a < b) {
        c = a;
    }
    else {
        c = b;
    }
    int ans1=1, ans2;
    for (int i = 1; i <= c; i++) {
        if (a % i == 0 && b % i == 0) {
            ans1 = i;
        }
    }
    int k = 1;
    while (1) {
        if ((a * k) % b == 0) {
            ans2 = a * k;
            break;
        }
        k++;
    }
    printf("%d\n%d", ans1, ans2);

}