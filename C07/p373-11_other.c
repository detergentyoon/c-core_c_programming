#include <stdio.h>

int main()
{
	float std[5][4] = {
		{ 28, 28, 26, 9 },
		{ 30, 27, 30, 10 },
		{ 25, 26, 24, 8 },
		{ 18, 22, 22, 5 },
		{ 24, 25, 30, 10 }
	};

	float avg[4] = { 0 };

	for (int i = 0; i < 5; i++)
	{
		float total = 0;
		printf("학 생%4d번:", i + 1);
		for (int j = 0; j < 4; j++)
		{
			printf("%6.0f", std[i][j]);
			total += std[i][j];
		}
		printf(" ==>%4.0f", total); // other code 에서는 if 문으로 total 값 출력을 제어하지 않고 반복문 자체에서 출력
		printf("\n");
	}
	printf("항목별 평균:   ");
	
	for (int i = 0; i < 4; i++)
		avg[i] = (std[0][i] + std[1][i] + std[2][i] + std[3][i] + std[4][i]) / 5;

	for (int i = 0; i < 4; i++)
		printf("%6.2f", avg[i]);

	return 0;
}