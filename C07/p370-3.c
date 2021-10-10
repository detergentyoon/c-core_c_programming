#include <stdio.h>

int main()
{
	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
	int max = arr[0];
	int min = arr[0];

	// 비교
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}

	printf("배열: ");
	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	printf("\n최대값: %d", max);
	printf("\n최소값: %d", min);

	return 0;
}