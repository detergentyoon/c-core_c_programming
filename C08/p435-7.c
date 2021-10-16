#include <stdio.h>

#define COUNT 10

double reverse_array(double* arr)
{
	int l = 0; // 배열 왼쪽 첫 원소의 위치 저장
	int r = COUNT - 1; // 배열 오른쪽 첫 원소의 위치 저장
	double temp;

	// 바꾸는 횟수는 배열 항목 개수의 절반만큼만 필요
	for (int i = 0; i < COUNT / 2; i++)
	{
        // swap
		temp = arr[l];
		arr[l] = arr[r];
		arr[r] = temp;

		l++; // left index는 1씩 증가
		r--; // right index는 1씩 감소
	}
	return *arr;
}

int main()
{
	double arr[COUNT] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };

	printf("배열: ");
	for (int i = 0; i < COUNT; i++)
		printf("%.1lf ", arr[i]);

	printf("\n역순: ");
	reverse_array(arr);
	for (int i = 0; i < 10; i++)
		printf("%.1lf ", arr[i]);

	return 0;
}