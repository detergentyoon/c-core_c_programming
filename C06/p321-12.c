#include <stdio.h>

int is_leap_year(int i)
{
	if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
		return i;  // 윤년

	return 0; // 비윤년
}

int main()
{
	int count = 0; // 줄바꿈용 윤년 출력 횟수 카운터

	printf("2000~2100사이의 윤년\n");

	for (int i = 2000; i <= 2100; i++)
	{
		if (is_leap_year(i) != 0) // is_leap_year의 return값이 0이 아닌 출력값들(윤년)
		{
			printf("%5d", i);
			count++;
				if (count != 0 && count % 10 == 0)
					printf("\n");
		}
	}
	return 0;
}