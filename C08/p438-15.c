#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void sort_array(int* arr)
{
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 9 - i; j++)
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
}

int main()
{
	int arr[10];

	srand(time(NULL));
	printf("정렬 전: ");
	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 100;
		printf("%2d ", arr[i]);
	}

	sort_array(arr);
	printf("\n정렬 후: ");
	for (int i = 0; i < 10; i++)
		printf("%2d ", arr[i]);

	return 0;
}