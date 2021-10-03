// 직선의 시작점의 좌표 (x1, y1)과 끝점의 좌표 (x2, y2)를 입력받아 두 점을 연결하는 직선의 길이 출력

s#include <stdio.h>
#include <math.h>
int main()
{
	int x1, y1, x2, y2;
	float len;

	printf("시작점 좌표 : ");
	scanf_s("%d %d", &x1, &y1);

	printf("끝점 좌표 : ");
	scanf_s("%d %d", &x2, &y2);

	len = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

	printf("직선의 길이 : %f", len);

	return 0;
}