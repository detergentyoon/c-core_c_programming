#include <stdio.h>

int main()
{
	double F;

	printf("화씨 온도 : ");
	scanf_s("%lf", &F);

	printf("%.2lf F = %.2lf C", F, (F-32) * 5./9.);

	return 0;
}