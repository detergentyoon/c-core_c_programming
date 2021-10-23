#include <stdio.h>

// *arr을 return하지 않아도 pointer를 통해 값의 변경이 가능 ==> void function
void reverse_array(double* arr)
{
	// 불필요한 변수 정의를 최소화
	for (int i = 0; i < 10 / 2; i++)
	{
		double temp = arr[i];
		arr[i] = arr[9 - i];
		arr[9 - i] = temp;
	}
}

int main()
{
	double arr[10] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };

	printf("배열: ");
	for (int i = 0; i < 10; i++)
		printf("%.1lf ", arr[i]);

	printf("\n역순: ");
	reverse_array(arr);
	for (int i = 0; i < 10; i++)
		printf("%.1lf ", arr[i]);

	return 0;
}