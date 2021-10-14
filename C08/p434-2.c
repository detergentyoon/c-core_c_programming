#include <stdio.h>

int main()
{
	double arr[10] = { .1, 2., 3.4, 5.2, 4.5, 7.8, 9.7, 1.4, 6.6, 7.2 };
	double* p = &arr[0]; // 0번째 배열 원소의 주소 포인터
//  double* p = arr :: 같은 로직
	for (int i = 0; i < 10; i++)
		printf("%.2lf  ", *(p + i));

	return 0;
}