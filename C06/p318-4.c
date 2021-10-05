#include <stdio.h>

int discount_price(int price, int discount)
{
	return price * discount / 100;
}

int main()
{
	int price, discount;

	printf("할인율(%) : ");
	scanf_s("%d", &discount);

	while (1)
	{
		printf("제품 가격 : ");
		scanf_s("%d", &price);
		
		if (price == 0)
			break;
		
		printf("할인가 : %d원\n", price - discount_price(price, discount));
	}

	return 0;
}