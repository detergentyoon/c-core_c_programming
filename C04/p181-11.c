// 제품의 가격, 할인율(%) 입력 -> 할인가, 에누리 금액 출력

#include <stdio.h>

int main()
{
	int price, sale, total_price, sale_price;

	printf("가격 : ");
	scanf_s("%d", &price);

	printf("할인율(%) : ");
	scanf_s("%d", &sale);

	sale_price = price * (sale / 100.);
	total_price = price - sale_price;

	printf("할인가 : %d원 (%d원 할인)", total_price, sale_price);

	return 0;
}