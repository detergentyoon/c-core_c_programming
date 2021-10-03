#include <stdio.h>

int main()
{
	int left, right, top, bottom, x, y;
	
	printf("선택 영역의 좌상단점(left, top) : ");
	scanf_s("%d %d", &left, &top);

	printf("선택 영역의 우하단점(right, bottom : ");
	scanf_s("%d %d", &right, &bottom);
	
	printf("점의 좌표(x, y) : ");
	scanf_s("%d %d", &x, &y);

	if (x < left || x > right)
		printf("직사각형 모양의 선택 영역 밖의 점입니다.");
	else if (y < top || y > bottom)
		printf("직사각형 모양의 선택 영역 밖의 점입니다.");
	else
		printf("직사각형 모양의 선택 영역 내의 점입니다.");

	return 0;
}