#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 10

int swap_string(char *lhs, char *rhs, int size)
{
	int lhs_len = strlen(lhs);
	int rhs_len = strlen(rhs);
	char temp[SIZE] = "";

	if (lhs_len + 1 > size || rhs_len + 1 > size)
		return 0; // 지정가능한 문자 배열의 크기보다 더 크면 0을 return

	// swap
	strcpy(temp, lhs);
	strcpy(lhs, rhs);
	strcpy(rhs, temp);

	return 1;
}

int main()
{
	char lhs[10];
	char rhs[10];

	printf("string 2ea: ");
	scanf_s("%s %s", lhs, sizeof(lhs), rhs, sizeof(rhs));

	printf("lhs: %s\nrhs: %s", lhs, rhs);
	swap_string(lhs, rhs, SIZE);
	printf("\n<< after swap_string func >>\n");
	printf("lhs: %s\nrhs: %s", lhs, rhs);

	return 0;
}