#include <stdio.h>

int main()
{
	int num;

	printf("16진수 정수? ");
	scanf_s("%x", &num);
	
	printf("16진수 정수 %x는 10진수로 %d입니다.", num, num);

	return 0;
}