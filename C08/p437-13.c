#include <stdio.h>

void swap_array(int *arr, int *brr)
{
	int temp[10];

	for (int i = 0; i < 10; i++)
	{
		temp[i] = arr[i];
		arr[i] = brr[i];
		brr[i] = temp[i];
	}
}

int main()
{
	int arr[10] = { 1, 3, 5, 7, 9, 11, 13 ,15 ,17, 19 };
	int brr[10] = { 0, 2, 4, 6, 8, 10, 12, 14, 16, 18 };

	printf("a:");
	for (int i = 0; i < 10; i++)
		printf("%3d", arr[i]);

	printf("\nb:");
	for (int i = 0; i < 10; i++)
		printf("%3d", brr[i]);
	
	printf("\n<< swap_array 호출 후 >>\n");
	swap_array(arr, brr);

	printf("a:");
	for (int i = 0; i < 10; i++)
		printf("%3d", arr[i]);

	printf("\nb:");
	for (int i = 0; i < 10; i++)
		printf("%3d", brr[i]);

	return 0;
}