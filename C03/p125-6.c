#include <stdio.h>

int main()
{
	float apartment;

	printf("아파트 면적() : ");
	scanf_s("%f", &apartment);

	printf("%.2f 제곱미터 = %.2f 평", apartment, apartment * 0.3025);

	return 0;
}