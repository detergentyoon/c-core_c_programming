#include <stdio.h>

int main()
{
	double KRW, exchange_rate;

	printf("KRW : ");
	scanf_s("%lf", &KRW);

	printf("원/달러 환율 : ");
	scanf_s("%lf", &exchange_rate);

	printf("KRW %.2lf = USD %.2lf", KRW, KRW / exchange_rate);

	return 0;
}