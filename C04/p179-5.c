// 반지름, 높이 정수 입력 => 원기둥 부피
// PI = 3.141592 로 가정

#include <stdio.h>
#include <math.h>

int main()
{
	int radius, height;
	float volume, PI = 3.141592;

	printf("반지름 : ");
	scanf_s("%d", &radius);

	printf("높이 : ");
	scanf_s("%d", &height);

	volume = PI * pow(radius, 2) * height;

	printf("원기둥의 부피 : %f", volume);

	return 0;
}