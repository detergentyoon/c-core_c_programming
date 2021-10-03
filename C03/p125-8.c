#include <stdio.h>

int main()
{
	int len;

	printf("길이(yd) : ");
	scanf_s("%d", &len);

	printf("%d yd = %f m", len, len * .9144);

	return 0;
}