#include <stdio.h>
#include <math.h>

int main()
{
	float n;

	printf("실수 : ");
	scanf_s("%e", &n);

	printf("제곱 : %e\n", pow(n,2));
	printf("세제곱 : %e", pow(n,3));

	return 0;
}