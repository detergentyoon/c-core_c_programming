#include <stdio.h>

int main()
{
	float weight;

	printf("몸무게? ");
	scanf_s("%f", &weight);

	printf("입력한 몸무게는 %.2fkg입니다.", weight);

	return 0;
}