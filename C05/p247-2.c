#include <stdio.h>

int main()
{
	int x, y;

	printf("점의 좌표(x, y) : ");
	scanf_s("%d %d", &x, &y);

	if (x > 0 && y > 0)
		printf("1사분면");
	else if (x < 0 && y > 0)
		printf("2사분면");
	else if (x < 0 && y < 0)
		printf("3사분면");
	else if (x > 0 && y < 0)
		printf("4사분면");

	return 0;
}