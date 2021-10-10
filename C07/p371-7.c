#include <stdio.h>

void fill_array(int arr[], int scale, int n)
{
	for (int i = 0; i < scale; i++)
	{
		arr[i] = n;
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[20];
	int n;

	printf("배열의 원소에 저장할 값: ");
	scanf_s("%d", &n);

	fill_array(arr, 20, n);

	return 0;
}