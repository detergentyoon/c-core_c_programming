#include <stdio.h>

// 32bit unsigned int 에서 각 8bit씩 취급
// 8(사용안함) 8(r) 8(g) 8(b)

int get_red(int color)
{
	return color >> 16;
}

int get_green(int color)
{
	color = color >> 8;;
	return color & 0xFF; // 0xFF = 255 : 1111 1111
}

int get_blue(int color)
{
	return color & 0xFF;
}

int main()
{
	int color, r, g, b;

	printf("RGB 색상 : ");
	scanf_s("%x", &color);

	r = get_red(color);
	g = get_green(color);
	b = get_blue(color);

	printf("RGB %X의 red: %d, green: %d, blue: %d", color, r, g, b);

	return 0;
}

// ※ 이 문제의 해답에 오류가 있음

// - 해답지 속 답안 -
// red: 128, green: 0, blue: 255

// - 실제 답안 -
// red: 255, green: 0, blue: 128

// 네이버 색상 팔레트 참조하여 해답에 오류가 있음을 파악