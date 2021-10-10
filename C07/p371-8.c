#include <stdio.h>

int main()
{
	int arr[5];
	int discount_rate;

	printf("상품가 5개를 입력하세요:\n");
	scanf_s("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

	printf("할인율(%): ");
	scanf_s("%d", &discount_rate);

	for (int i = 0; i < 5; i++)
		printf("가격:%7d --> 할인가:%7d\n", arr[i], arr[i] - arr[i] * discount_rate / 100);

	return 0;
}