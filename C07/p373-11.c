#include <stdio.h>

int main()
{
	// 중간고사 30 / 기말고사 30 / 팀프로젝트 30 / 출석 10
	float student[5][4] = {
		{ 28, 28, 26, 9 },
		{ 30, 27, 30, 10 },
		{ 25, 26, 24, 8 },
		{ 18, 22, 22, 5 },
		{ 24, 25, 30, 10 }
	};
	float avg[4];
	float total;

	for (int i = 0; i < 5; i++)
	{
		printf("학 생%4d번:", i + 1);
		total = 0;

		for (int j = 0; j < 4; j++)
		{
			printf("%6.0f", student[i][j]);
			total = student[i][j] + total;
			if (j == 3) {
				printf(" ==> %3.0f\n", total);
			}
		}
	}

	for (int j = 0; j < 4; j++)
		avg[j] = (student[0][j] + student[1][j] + student[2][j] + student[3][j] + student[4][j]) / 5;

	printf("항목별 평균:   ");
	for (int i = 0; i < 4; i++)
		printf("%6.2f", avg[i]);
	
	return 0;
}