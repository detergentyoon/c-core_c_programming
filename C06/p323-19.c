#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void graph(int value, int scale)
{
	int a = value / scale;

	printf("%d:", value);

	for (int i = 1; i <= value / scale; i++)
		printf("*");
	printf("\n");
}

int main()
{
	int value;
	srand(time(NULL));

	for (int i = 0; i < 3; i++)
	{
		value = rand() % 10000;
		graph(value, 100);
	}

	return 0;
}