#include <stdio.h>

int main()
{
	int arr[10];

	for (int i = 0; i < 10; i++)
	{
		printf("배열에 추가할 원소: ");
		scanf_s("%d", &arr[i]);

		for (int j = 0; j < i; j++) // i 보다 작은 수까지만 검사함으로써 i번째 자신은 검사에 포함시키지 않음
		{
			if (arr[i] == arr[j])
			{
				printf("해당 원소가 이미 [%d]에 존재합니다.\n", j);
				i--;
			}
		}

		for (int j = 0; j <= i; j++)
			printf("%d ", arr[j]);
		printf("\n");
	}

	return 0;
}