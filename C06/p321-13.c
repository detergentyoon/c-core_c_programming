#include <stdio.h>

int is_leaf_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return year;

	return 0;
}

int get_days_of_month(int year, int i)
{
	if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
		return 31;
	
	if (i == 2)
	{
		if (is_leaf_year(year) != 0)
			return 29;
		else
			return 28;
	}

	else
		return 30;
}

int main()
{
	int year;

	printf("연도: ");
	scanf_s("%d", &year);

	printf("[ %d년 ]\n", year);

	for (int i = 1; i <= 12; i++)
	{
		printf("%2d월: %d일 ", i, get_days_of_month(year, i));

		if (i == 6)
			printf("\n");
	}

	return 0;
}