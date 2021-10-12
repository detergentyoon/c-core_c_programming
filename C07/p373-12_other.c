#include<stdio.h>
int main(void)
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int a = 0, add = 0, n = 0;

	while (1)
	{
		printf("현재 좌석: [ ");
		// 예매된 좌석의 수 만큼 X 출력
		if (add != 0) // other code 에서는 if (add != 0) 을 사용하지만 if문을 제거해도 정상 작동함
		{
			for (int j = 0; j < add; j++)
				printf("X ");
		}
		// 예매 가능한 좌석의 수 만큼 O 출력
		for (int k = 0; k < (10 - add); k++)
			printf("O ");

		printf("]\n예매할 좌석수? ");
		scanf_s("%d", &a);
		add += a;

		if (add > 10)
		{
			printf("남은 좌석 수보다 많은 수를 입력하셨습니다. 다시 입력해주세요. \n");
			add -= a;
		}

		else
		{
			// 예매된 좌석의 번호 출력
			for (int l = 0; l < a; l++)
			{
				n++;
				printf("%d ", arr[n - 1]);
			}
			printf("번 좌석을 예매했습니다.\n");
		}

		if (add >= 10)
			return 0;
	}
}