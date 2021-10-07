#include <stdio.h>

int get_red(int color)
{
	return color >> 16;
}

int get_green(int color)
{
	color = color >> 8;;
	return color & 0xFF;
}

int get_blue(int color)
{
	return color & 0xFF;
}

int make_rgb(int r, int g, int b)
{
    // 마이너스 연산을 통해 보색을 구하고, 비트 시프트 연산을 통해 본래 자리로 보냄
	r = 0xFF - r << 16;
	g = 0xFF - g << 8;
	b = 0xFF - b;

	int rgb = r | g | b;

	return rgb;
}

int main()
{
	int color, r, g, b, rgb;

	printf("RGB 색상 : ");
	scanf_s("%x", &color);

	r = get_red(color);
	g = get_green(color);
	b = get_blue(color);

	rgb = make_rgb(r, g, b);

	printf("RGB %X의 보색: %06X", color, rgb);
	return 0;
}