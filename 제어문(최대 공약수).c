#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    int x, y, r;

    printf("�� ���� ������ �Է�: ");
    scanf("%d %d", &x, &y);

    while (y != 0) {

        r = x % y;
        x = y;
        y = r;

    }
    printf("�ִ� ������� %d�̴�.", x);

    return 0;
}
