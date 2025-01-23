#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char start, ch;

    for (start = 'a'; start <= 'z'; start++) {  //(1)
        for (ch = 'a'; ch <= start; ch++) {
            putchar(ch);  
        }
        putchar('\n');  
    }

    for (start = 'z'; start >= 'a'; start--) { //(2)
        for (ch = 'z'; ch >= start; ch--) {
            putchar(ch);
        }
        putchar('\n');
    }

    int i, j;

    for (i = 25; i >= 0; i--) { // (3)
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        for (j = i; j < 26; j++) {
            printf("%c", j + 'a');
        }
        printf("\n");
    }





    return 0;
}