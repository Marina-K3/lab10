#include<conio.h>
#include<stdio.h>
#include<string.h>
/*����������� �������, ������� ������� ��� ������ 
������� (� ������ ����������� � ��������� �������).*/
int main() {
	char fraz[100];
	printf("Enter the string - ");
	fgets(fraz, 99, stdin);
	int j = 0;
	char res[100];
	for (int i = 0; i <= strlen(fraz); i++) {
		if (fraz[i] == ' ' && fraz[i + 1] == ' ') continue;
		res[j] = fraz[i];
		j++;
	}
	res[j + 1] = '\0';
	if (res[0] == ' ') {
		for (int s = 0; s <= strlen(res); s++) {
			res[s] = res[s + 1];
		}
	}
	puts(res);
}