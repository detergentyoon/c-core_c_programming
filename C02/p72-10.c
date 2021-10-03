#include <stdio.h>

int main()
{
	int num;
	
	printf("8진수로 입력하려면 012, 16진수로 입력하려면 0x12처럼 입력하세요.\n");
	printf("정수? ");
	scanf_s("%", &num);

	printf(" 8진수: %#o\n", num);
	printf("10진수: %#d\n", num);
	printf("16진수: %#x\n", num);

	return 0;
}