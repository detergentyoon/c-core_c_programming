#include <stdio.h>

int main()
{
	int weight;

	printf("무게(lb) : ");
	scanf_s("%d", &weight);

	printf("%d lb = %f kg", weight, weight * 0.45359237);

	return 0;
}