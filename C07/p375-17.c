#include <stdio.h>

int main()
{
	int arr[10];

	for (int i = 0; i < 10; i++)
	{
		printf("배열에 추가할 원소: ");
		scanf_s("%d", &arr[i]);

		for (int j = 0; j <= i; j++)
			printf("%d ", arr[j]);
		printf("\n");
	}
	return 0;
}