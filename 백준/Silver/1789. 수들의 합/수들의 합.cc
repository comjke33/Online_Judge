#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    long long int a;
    scanf("%lld", &a);
    long long int b = 0;
    long long int c = 1;
    int count = 0;
    while (1) {
        b = b + c;
        if (b > a) {
            break;
        }
        else if (b == a) {
            count++;
        }
        else {
            count++;
            c++;
        }
        //printf("%d %d\n", b,count);
    }
    printf("%d", count);
    
}
