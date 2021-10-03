#include <stdio.h>

int main()
{
	char coffee_size;
	int num;

	printf("커피 사이즈(S,T,G)와 주문 수량? ");
	scanf_s("%c %d", &coffee_size, 1, &num);

	printf("%c 사이즈 %d잔을 주문합니다.", coffee_size, num);

	return 0;
}