#include<stdio.h>

int main()
{
	int hour, minute, second;

	printf("시? ");
	scanf_s("%d", &hour);

	printf("시? ");
	scanf_s("%d", &minute);

	printf("시? ");
	scanf_s("%d", &second);

	printf("입력한 시간은 %02d:%02d:%02d입니다.", hour, minute, second);

	return 0;
}