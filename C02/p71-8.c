#include <stdio.h>

int main()
{
	float n1, n2;

	printf("실수 2개? ");
	scanf_s("%f %f", &n1, &n2);

	printf("%f + %f = %f", n1, n2, n1 + n2);

	return 0;
}