// 점 A 좌표 (x1, y1), 점 B 좌표 (x2, y2) 입력 => 두 점 A, B를 지나는 직선의 기울기
// 기울기(m) = (y2 - y1) / (x2 - x1)

#include <stdio.h>

int main()
{
	int x1, x2, y1, y2;
	float m;

	printf("점 A의 좌표 : ");
	scanf_s("%d %d", &x1, &y1);

	printf("점 B의 좌표 : ");
	scanf_s("%d %d", &x2, &y2);

	m = (y2 - y1) / (x2 - x1);

	printf("직선의 기울기 : %f", m);

	return 0;
}