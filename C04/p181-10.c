#include <stdio.h>
#include <math.h>

int main()
{
	// 항공권 예약 시 여정의 총 소요시간을 시간 단위로 입력받아서 며칠 몇 시간 몇 분인지 출력
	// 총 소요시간 -> 실수 입력
	// ex) 소요시간 10.5시간 = 10시간 30분

	double total_time, d, h, m;

	printf("소요시간(h) : ");
	scanf_s("%lf", &total_time);

	m = fmod((total_time * 60), 60);
	h = floor(fmod(total_time, 24));
	d = total_time / 24;

	printf("비행 소요시간은 %.0lf일 %.0lf시간 %.0lf분입니다.", d, h, m);

	return 0;
}