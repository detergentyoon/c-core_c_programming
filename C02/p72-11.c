#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
	double pi = M_PI;

	printf("pi = %.2lf\n", pi);
	printf("pi = %.4lf\n", pi);
	printf("pi = %.6lf\n", pi);
	printf("pi = %.8lf\n", pi); // float 과 double에 따라 출력값이 다름
	printf("pi = %e", pi); // 지수 표기

	return 0;
}