#include <stdio.h>
// 3x3 행렬의 합을 구하는 add_martrix 함수
void add_matrix(int (*x)[3], int (*y)[3]) // add_matrix 함수의 매개변수를 x, y배열만 받음
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			printf("%3d ", x[i][j] + y[i][j]); // 사용자 정의 함수 내에서 배열의 합연산 결과를 출력
		printf("\n");
	}
}

int main()
{
	int x[3][3] = { { 10, 20, 30 }, { 40, 50, 60 }, { 70, 80, 90 } };
	int y[3][3] = { { 9, 8, 7 }, { 6, 5, 4 }, { 3, 2, 1 } };

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

	printf("x + y 행렬:\n");
	add_martix(x, y);

	return 0;
}

// other 코드가 더 짧고, xy 배열 변수를 따로 지정하지 않기 때문에 메모리 낭비가 적어 효율적