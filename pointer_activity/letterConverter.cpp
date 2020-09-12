#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main3() {
	char str[50];
	char* p;
	p = str;
	scanf("%s", str);
	while (*p != '\0') {
		if ((*p >= 'A') && (*p <= 'Z')) {
			printf("%c", *p - 'A' + 'a');
		}
		else if ((*p >= 'a') && (*p <= 'z')) {
			printf("%c", *p - 'a' + 'A');
		}
		p += 1;
	}
	return 0;
}