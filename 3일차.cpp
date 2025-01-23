#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

	char str[20];
	int i, j, len;

	printf("문자열 입력: ");
	gets_s(str, 20);

	len = 0;
	for (i = 0; str[i] != NULL; i++)
		len++;
	printf("문자열 길이=%d\n", len);

	for (i = len - 1; i >= 0; i--) {
		for (j = 0; j <= i; j++) {
			printf("%c", str[j]);
		}
		printf("\n");
	}

	return 0;

}


