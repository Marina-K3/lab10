#include<stdio.h>
#include<string.h>
#include<locale.h>
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS
#pragma warning(suppress : 4996)
#include <ctype.h>
void Palindrom(char* s) {
	setlocale(LC_ALL, "rus");
	int count = 0;
	int y = strlen(s);
	for (int i = 0; i <= y - 1; i++) {
		tolower(s[i]);
		if (s[i] == ' ') s[i] = s[i + 1];
	}
	for (int i = 0; i < strlen(s) / 2; i++, y--) {
		if (s[i] == s[y]) {
			count++;
		}
	}
	if (count == 0) printf("\n Палиндром");
	else printf("\n Не палиндром %d", count);
}

int main() {
	setlocale(LC_ALL, "rus");
	char s[100];
	printf_s(" Введите строку (на проверку : палиндром?)  ");
	fgets(s, 100, stdin);
	Palindrom(s);
	return 0;
}