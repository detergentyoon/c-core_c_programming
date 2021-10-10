#include <stdio.h>

int main()
{
	int arr[10];
	int a, b;

	printf("첫 번째 항: ");
	scanf_s("%d", &a);
	printf("공차: ");
	scanf_s("%d", &b);

	for (int i = 0; i < 10; i++)
		arr[i] = a + i * b;

	printf("등차수열: ");

	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	return 0;
}