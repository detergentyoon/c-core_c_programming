#include <stdio.h>
// 3x3 행렬의 합을 구하는 add_martrix 함수
int add_martix(int (*x)[3], int (*y)[3], int (*xy)[3])
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			xy[i][j] = x[i][j] + y[i][j];
}

int main()
{
	int x[3][3] = { { 10, 20, 30 }, { 40, 50, 60 }, { 70, 80, 90 } };
	int y[3][3] = { { 9, 8, 7 }, { 6, 5, 4 }, { 3, 2, 1 } };
	int xy[3][3]; // x + y

	printf("x 행렬:\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			printf("%3d ", x[i][j]);
		printf("\n");
	}

	printf("y 행렬:\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			printf("%3d ", y[i][j]);
		printf("\n");
	}

	add_martix(x, y, xy);
	printf("x + y 행렬:\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			printf("%3d ", xy[i][j]);
		printf("\n");
	}

	return 0;
}