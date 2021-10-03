// 질량 | 부피 입력 => 밀도 출력
// 밀도(g/cm^3) = 질량(g) / 부피(cm^3)

#include <stdio.h>

int main()
{

	float mass, volume;

	printf("질량(g) : ");
	scanf_s("%f", &mass);

	printf("부피(cm^3) : ");
	scanf_s("%f", &volume);

	printf("밀도(g/cm^3) = %f", mass / volume);

	return 0;
}