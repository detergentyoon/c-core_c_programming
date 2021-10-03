#include <stdio.h>
#include <math.h>

int main()
{
	float mass, speed;

	printf("질량(kg) : ");
	scanf_s("%f", &mass);

	printf("속력(m/s) : ");
	scanf_s("%f", &speed);

	printf("운동에너지 : %.2f J", .5 * mass * pow(speed, 2));

	return 0;
}