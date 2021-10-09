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

int check_date(int year, int month, int day)
{
	if (month >= 1 && month <= 12)
	{
		// days
		if (day <= get_days_of_month(year, month) && day >= 1)
			return 1;
		else
			return 0;
	}
	else
		return 0;
}

int main()
{
	int year, month, day;
	
	while (1)
	{
		printf("날짜 (연 월 일): ");
		scanf_s("%d %d %d", &year, &month, &day);

		if (check_date(year, month, day) == 0)
			printf("잘못 입력하셨습니다. 유효한 날짜를 입력하세요.\n");

		else if (check_date(year, month, day) == 1)
		{
			printf("입력한 날짜는 %d년 %d월 %d일입니다.", year, month, day);
			break;
		}
	}

	return 0;
}