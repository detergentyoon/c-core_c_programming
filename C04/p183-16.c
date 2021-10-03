// 0~255 사이의 값을 rgb 순서로 3개 입력 -> rgb 색상 코드 출력
// rgb 색상 출력 시 byte 단위로 값을 알아보기 쉽도록 16진수 출력

#include <stdio.h>

int main()
{
	unsigned char r, g, b;
	unsigned int rgb_color;

	printf("red : ");
	scanf_s("%d", &r);

	printf("green : ");
	scanf_s("%d", &g);

	printf("blue : ");
	scanf_s("%d", &b);
	
	rgb_color = r | g << 8 | b << 16;

	printf("%06X", rgb_color);

	return 0;
}