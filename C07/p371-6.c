#include <stdio.h>

int main()
{
	float arr[10] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };

	printf("배열: ");
	for (int i = 0; i < 10; i++)
		printf("%.1f ", arr[i]);

	printf("\n역순: ");
	for (int i = 9; i >= 0; i--)
		printf("%.1f ", arr[i]);

	return 0;
}