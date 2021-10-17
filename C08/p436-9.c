#include <stdio.h>
// 열 크기가 5인 2차원 int 배열의 모든 원소를 특정 값으로 채우는 fill_2d_array 함수
// 함수의 매개변수로 배열 전체에 대한 포인터와 배열의 행 크기 전달
void fill_2d_array(int(*parr)[5], int* n)
// ※ ※ ※ ※ ※ 실질적 배열의 행 크기 4인지, 출력단에서의 행 길이 5인지 문제의 설명이 모호함 ※ ※ ※ ※ ※
// ※ ※ ※ ※ ※ int(*parr)[4]를 넣으면 일부 값이 더미값으로 출력됨 ※ ※ ※ ※ ※
{
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 5; j++)
			parr[i][j] = *n;
}
int main()
{
	// 열 크기가 5, 행 크기가 4인 2차원 배열을 입력받은 값으로 채우고 출력
	int arr[4][5]; // [행][열]
	int n;
	
	printf("배열 원소에 저장할 값: ");
	scanf_s("%d", &n);
	fill_2d_array(arr, &n);

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}

	return 0;
}

// int arr[4][5] = ㅁㅁㅁㅁㅁ
//                 ㅁㅁㅁㅁㅁ
//                 ㅁㅁㅁㅁㅁ
//                 ㅁㅁㅁㅁㅁ

// arr[행][열], C언어에서 선언에 따른 type은 명칭에서 가장 "먼" 것부터 유도됨
// 2차원 배열 = '[y][x]', '[행][열]'