#include <stdio.h>

int add_to_multiset(int* arr, int size, int n)
{
	if (size < 10)
	{
		arr[size] = n;
		return 1;
	}
	else
		return 0;
}

int main()
{
	int arr[10];
	int num, size = 0; // size = 배열의 현재 인덱스

	while (1)
	{
		printf("배열에 추가할 원소: ");
		scanf_s("%d", &num);

		if (add_to_multiset(arr, size, num) == 1)
		{
			for (int i = 0; i <= size; i++)
				printf("%2d ", arr[i]);
			printf("\n");
			size++;
		}

		else
		{
			printf("더 이상 원소를 추가 할 수 없습니다.");
			return 0;
		}
	}
}