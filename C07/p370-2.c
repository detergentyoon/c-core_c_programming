#include <stdio.h>

int main()
{
	float arr[10];
	float a, b;

	printf("첫 번째 항: ");
	scanf_s("%f", &a);
	printf("공차: ");
	scanf_s("%f", &b);

	for (int i = 0; i < 10; i++)
	{
		if (i != 0)
		{
			arr[i] = a * b;
			a = arr[i];
		}
		else
			arr[i] = a;
	}

	printf("등비수열: ");

	for (int i = 0; i < 10; i++)
	{
		if (i == 0)
			printf("%.1f ", arr[i]);
		else if (i == 9)
			printf("%e ", arr[i]);
		else
			printf("%.0f ", arr[i]);
	}

	return 0;
}