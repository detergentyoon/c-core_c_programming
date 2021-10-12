#include <stdio.h>

int zero_array(int* arr)
{
	return *arr = 0;
}

int main()
{
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	for (int i = 0; i < 10; i++)
	{
		zero_array(&arr[i]); // i번째 arr의 주소를 받아서 i번째 value에 관여할 수 있게함
		printf("%d ", arr[i]);
	}

	return 0;
}