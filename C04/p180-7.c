// 직각 삼각형에서 직각을 낀 두 변 a, b의 길이 입력 => 빗변의 길이
// c^2 = a^2 + b^2
// c = sqrt(a^2 + b^2)

#include <stdio.h>
#include <math.h>

int main()
{
	int a, b;
	float c;

	printf("밑변(a) : ");
	scanf_s("%d", &a);

	printf("높이(b) : ");
	scanf_s("%d", &b);

	c = sqrt(pow(a, 2) + pow(b, 2));

	printf("빗변(c)의 길이 : %f", c);

	return 0;
}