#include <stdio.h>

int main()
{
	float arr[10] = { .1, 2., 3.4, 5.2, 4.5, 7.8, 9.7, 1.4, 6.6, 7.2 };
	float* ptr = &arr[0];
	float avg = 0;

	printf("배열: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%.2f  ", *(ptr + i));
		avg += *(ptr + i) / 10;
	}
	printf("\n평균: %f", avg);

	return 0;
}