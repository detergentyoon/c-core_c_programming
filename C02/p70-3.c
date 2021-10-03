#include <stdio.h>

int main()
{
	int year, month, day;

	printf("연? ");
	scanf_s("%d", &year);

	printf("월? ");
	scanf_s("%d", &month);

	printf("일? ");
	scanf_s("%d", &day);

	printf("입력한 날짜는 %d년 %d월 %d일입니다.", year, month, day);

	return 0;
}