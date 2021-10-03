#include <stdio.h>
int main()
{
	int row, column;

	printf("row : ");
	scanf_s("%d", &row);

	printf("column : ");
	scanf_s("%d", &column);

	printf("rectangular area : %d\n", row * column);
	printf("rectangular circumference : %d", (row + column) * 2);

	return 0;
}