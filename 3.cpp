/*������ ����������� � ����������, ������� ���� ������������� �� 
����� '�'. ������: ������� �����������: ���� ���� ���� 
������� ����: 2
*/
#include <stdio.h>
#include <conio.h>
#include<string.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	char s[50];
	printf("������� ������: ");
	fgets(s, 49, stdin);
	int c = strlen(s);
	int count = 0;
	for (int i = 0; i <= c; i++) {
		if (s[i] == 'a' && (s[i+1]==' ' || s[i+1]=='\n')) count++;
	}
	printf("\n ���������� ���� ��������������� �� '�' - %d", count);
	return 0;
}