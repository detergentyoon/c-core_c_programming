#include <stdio.h>
#include <math.h>

float distance(int x1, int y1, int x2, int y2)
{
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

int main()
{
	int x1, y1, x2, y2;

	printf("직선의 시작점 좌표 : ");
	scanf_s("%d %d", &x1, &y1);
	printf("직선의 끝점 좌표 : ");
	scanf_s("%d %d", &x2, &y2);

	printf("(%d, %d)~(%d, %d) 직선의 길이 : %f", x1, y1, x2, y2, distance(x1, y1, x2, y2));
	

	return 0;
}