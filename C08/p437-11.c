#include <stdio.h>
// 직사각형 넓이와 둘레를 구하는 get_rect_info 함수
// 직사각형의 가로, 세로 길이 입력받아, get_rect_info 함수를 이용해 직사각형의 넓이와 둘레 출력
void get_rect_info(int *width, int *height)
{
	printf("넓이: %d, 둘레: %d", *width * *height, (*width + *height) * 2);
}

int main()
{
	int height, width;

	printf("가로: ");
	scanf_s("%d", &height);
	printf("세로: ");
	scanf_s("%d", &width);

	get_rect_info(&width, &height);

	return 0;
}