#include <stdio.h>

int main()
{
	float inch;

	printf("길이(inch) : ");
	scanf_s("%f", &inch);

	printf("%f inch = %f cm", inch, inch * 2.54);

	return 0;
}