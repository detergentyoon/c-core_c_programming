// 반지름 길이 입력 => 구의 부피
// V = 4/3 * PI * r^3
// PI = 3.141592 라 가정

#include <stdio.h>
#include <math.h>

int main()
{
	int r;
	double sphere_volume, PI = 3.141592;

	printf("반지름(r) : ");
	scanf_s("%d", &r);

	sphere_volume = 4. / 3. * PI * pow(r, 3);

	printf("구의 부피 : %lf", sphere_volume);

	return 0;
}