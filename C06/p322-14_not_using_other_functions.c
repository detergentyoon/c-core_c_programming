// is_leaf_year 함수와 get_days_of_month 함수를 이용하지 않고 하나의 함수에서 처리하는 코드

#include <stdio.h>

int check_date(int year, int month, int day)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		if (month >= 1 && month <= 12)
		{
			if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			{
				if (day >= 1 && day <= 31)
					return 1;
				else
					return 0;
			}
			else if (month == 2)
			{
				if (day >= 1 && day <= 29)
					return 1;
				else
					return 0;
			}
			else
			{
				if (day >= 1 && day <= 30)
					return 1;
				else
					return 0;
			}
		}
		else
			return 0;
	}
	else
		if (month >= 1 && month <= 12)
		{
			if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			{
				if (day >= 1 && day <= 31)
					return 1;
				else
					return 0;
			}
			else if (month == 2)
			{
				if (day >= 1 && day <= 28)
					return 1;
				else
					return 0;
			}
			else
			{
				if (day >= 1 && day <= 30)
					return 1;
				else
					return 0;
			}
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