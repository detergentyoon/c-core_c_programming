#include <stdio.h>

int add_to_set(int* arr, int size, int num)
{
	if (size < 10)
	{
		arr[size] = num;
		return 1;
	}
	else
		return 0;
}

int main()
{
	int arr[10];
	int num, size = 0;

	while (1)
	{
		printf("배열에 추가할 원소: ");
		scanf_s("%d", &num);
	
		if (add_to_set(arr, size, num) == 1)
		{
			// 배열에 같은 원소가 존재하면 index를 출력하고 저장하지 않음
			for (int i = 0; i < size; i++)
				if (arr[i] == arr[size])
				{
					printf("해당 원소가 이미 [%d]에 존재합니다.\n", i);
					size--;
				}
			
			// 현재 stack된 배열 원소들을 출력
			for (int i = 0; i <= size; i++)
				printf("%2d ", arr[i]);
			printf("\n");
			size++;
		}

		else
		{
			printf("더 이상 원소를 추가할 수 없습니다.");
			return 0;
		}
	}
}