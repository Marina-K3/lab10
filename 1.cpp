#include <stdio.h>
#include <conio.h>
#include<string.h>
#include <locale.h>
/*: ¬вести символьную строку, заменить все буквы "а" на буквы "б" как 
заглавные, так и строчные.*/
int main() {
	setlocale(LC_ALL, "rus");
	char s[50];
	printf("¬ведите строку: ");
	fgets(s, 49, stdin);
	int c = strlen(s);
	for (int i = 0; i < c; i++) {
		if (s[i] == 'a') s[i] = 'b';
		if (s[i] == 'A') s[i] = 'B';
	}
	printf("\n\nќтформатированна€ строка:");
	puts(s);
	return 0;
}