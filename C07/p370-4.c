#include <stdio.h>

int main()
{
	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
	int max = arr[0];
	int min = arr[0];
	int index_max, index_min;

	printf("배열: ");
	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			index_max = i;
		}
		if (arr[i] < min)
		{
			min = arr[i];
			index_min = i;
		}
	}
	printf("\n최대값: 인덱스=%d, 값=%d", index_max, max);
	printf("\n최소값: 인덱스=%d, 값=%d", index_min, min);

	return 0;
}