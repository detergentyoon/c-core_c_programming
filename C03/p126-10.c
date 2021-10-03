#include <stdio.h>

int main()
{
	double USD, exchange_rate;

	printf("USD : ");
	scanf_s("%lf", &USD);

	printf("원/달러 환율 : ");
	scanf_s("%lf", &exchange_rate);

	printf("USD %.2lf = KRW %.2lf", USD, USD * exchange_rate);

	return 0;
}