#include <stdio.h>

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int add = 0; // 현재까지 예매한 좌석 수 카운터 ( X 출력에 사용 )
	int n = 0; // 각 좌석의 번호 카운터 ( "n 번 좌석을 예매했습니다." 문구에 사용 )
	int a; // 예매할 좌석수 입력용 변수, 매 루프마다 add 에 a 값을 더함 

	while (1)
	{
		printf("현재 좌석: [");
		for (int i = 0; i < add; i++)
			printf(" X");
		
		for (int i = 0; i < 10 - add; i++)
			printf(" O");
		printf(" ]\n 예매할 좌석수: ");
		scanf_s("%d", &a);
		add += a;

		if (add > 10) // add 값이 10 초과되었을 경우 더미값이 출력됨을 방지
		{
			printf("현재 예매 가능한 좌석 수보다 많은 수를 입력하셨습니다.\n");
			add -= a; // 더해준 a 값을 다시 원상태로 돌려놓아 "X" 출력에 영향을 주지 않게함
		}
		
		else
		{
			for (int i = 0; i < a; i++)
			{
				n++;
				printf("%d ", arr[n - 1]);
			}
			printf("번 좌석을 예매했습니다.\n");

			if (add >= 10)
				return 0;
		}
	}
}