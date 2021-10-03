// 네비게이션 앱에서 이동 거리와 예상 속력으로 도착 예정 시간 출력
// 이동 거리(km), 예상 속력(km/h) 실수 입력 -> 예상 소요 시간 : 분 단위 정수 출력

#include <stdio.h>

int main()
{
	float displacement, speed;
	int ETA; // Estimated time of arrival

	printf("이동 거리(km) : ");
	scanf_s("%f", &displacement);

	printf("속력(km/h) : ");
	scanf_s("%f", &speed);
	
	//ETA = expected_speed / displacement;
	ETA = (displacement / speed) * 60;

	printf("도착까지 예상 소요 시간은 %d분입니다.", ETA);

	return 0;
}