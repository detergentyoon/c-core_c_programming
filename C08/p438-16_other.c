#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ASCENDING 0
#define DEESCENDING 1

void sort_array_with_order(int* arr, int order_type)
{
	if (order_type == DEESCENDING)
	{
		printf("\n내림차순 정렬 후: ");
		for (int i = 0; i < 10; i++)
			for (int j = 0; j < 9 - i; j++)
				if (arr[j] < arr[j + 1])
				{
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
		for (int i = 0; i < 10; i++)
			printf("%2d ", arr[i]);
	}

	else // 정렬 타입 매개변수를 잘못된 값으로 지정했을 경우를 감안하여 기본 정렬 = 오름차순
	{
		printf("\n오름차순 정렬 후: ");
		for (int i = 0; i < 10; i++)
			for (int j = 0; j < 9 - i; j++)
				if (arr[j] > arr[j + 1])
				{
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
		for (int i = 0; i < 10; i++)
			printf("%2d ", arr[i]);
	}
}

int main()
{
	int arr[10];
	srand(time(NULL));

	printf("정렬 전\t\t: ");
	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 100;
		printf("%2d ", arr[i]);
	}

	sort_array_with_order(arr, ASCENDING);
	sort_array_with_order(arr, DEESCENDING);
	sort_array_with_order(arr, 3); // else문에 의해 default값인 오름차순 정렬이 출력

	return 0;
}