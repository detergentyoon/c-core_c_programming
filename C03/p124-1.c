#include <stdio.h>

int main()
{
	int len;

	printf("한 변의 길이 : ");
	scanf_s("%d", &len);

	printf("넓이 : %d\n", len * len);
	printf("둘레 : %d", len * 4);

	return 0;
}