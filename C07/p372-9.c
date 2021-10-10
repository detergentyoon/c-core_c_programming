#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int arr[12];
	int a;
	int count = 0;

	// 2,000원 당 '*' 하나씩 막대 그래프로 출력
	srand(time(NULL));

	for (int i = 0; i < 12; i++)
	{
		// rand() % ( (마지막 값 - 시작 값) + 1 ) + 시작 값
		a = (rand() % 56 + 10);
		arr[i] = a * 1000;

		printf("%2d월 %d:", i + 1, arr[i]);
		for (int j = 0; j < a; j++)
		{
			count++;
			
			if (count == 2)
			{
				printf("*");
				count = 0;
			}
		}
		printf("\n");
	}

	return 0;
}