#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void print_arr(int* arr, int num) // num : 배열 메모리 크기
{
	for (int i = 0; i < num; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void shuffle(int* arr, int num)
{
	srand(time(NULL));

	for (int i = 0; i < num; i++)
	{
		int rnd = rand() % 10;

		// shuffle process
		int temp = arr[i];
		arr[i] = arr[rnd];
		arr[rnd] = temp;
	}
}

int main()
{
	int arr[10] = { 12, 64, 80, 42, 67, 9, 8, 7, 56, 48 };

	printf("셔플 전: ");
	print_arr(arr, 10);

	printf("셔플 후: ");
	shuffle(arr, 10);
	print_arr(arr, 10);

	return 0;
}