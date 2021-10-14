#include <stdio.h>

int main()
{
	int arr[10] = { 44, 32, 65, 23, 45, 76, 77, 89, 23, 45 };
	int* p = &arr[0];

	printf("배열: ");
	for (int i = 0; i < 10; i++)
		printf("%d  ", *(p + i));

	printf("\n역순: ");
	for (int i = 9; i >= 0; i--)
		printf("%d  ", *(p + i));

	return 0;
}