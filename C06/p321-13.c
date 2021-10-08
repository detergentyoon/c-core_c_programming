#include <stdio.h>

int is_leap_year(int i)
{
	if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
		return i;
	return 0;
}

int get_days_of_month(int year, int i)
{
	if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
		return 31;

	else if (i == 2)
	{
		if (is_leap_year(year) != 0) // 윤년 2월은 29일
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
	printf("연도 : ");
	scanf_s("%d", &year);

	printf("[ %d년 ]\n", year);

	for (int i = 1; i <= 12; i++)
	{
		printf("%2d월: %3d일 ", i, get_days_of_month(year, i));
	}
	return 0;
}