#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    int num = 0;
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", str);
        int len = strlen(str);
        int abc[26] = { 0, };
 

        int word = 1;

        for (int j = 0; j < len; j++) {
            char c = str[j];
            if (abc[c - 'a'] == 1 && c != str[j - 1]) { 
                word = 0;
                break;
            }
            abc[c - 'a'] = 1;
        }
        if (word == 1) num++;
    }

    printf("%d", num);
    return 0;
}


