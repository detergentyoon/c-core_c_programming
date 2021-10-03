// 기본 요금과 월 사용량(kWh)을 입력 -> 전기 요금 출력
// 사용량에 따른 요금 = 190원/kWh
// 전기요금 = 기본 요금 + 월 사용량(kWh) * 190원/kWh

#include <stdio.h>
int main()
{
	int charge, month_usage, cost_of_electricity;

	printf("기본 요금 : ");
	scanf_s("%d", &charge);

	printf("월 사용량 : ");
	scanf_s("%d", &month_usage);

	cost_of_electricity = charge + month_usage * 190;

	printf("전기 요금 : %d원", cost_of_electricity);

	return 0;
}