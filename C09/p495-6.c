#include<stdio.h>
#define MAX 256 // MAX를 256으로 정의
void check_time_str(char* time)
{
	int t = 0;

	if (time[0] >= '0' && time[0] <= '2')
	{	// hour
		if (time[1] >= '0' && time[1] <= '9')
			t++;
		if (time[0] == '2' && time[1] >= '5')
			t--;

		if (time[2] >= '0' && time[2] <= '5') 
		{	//min
			if (time[3] >= '0' && time[3] <= '9')
				t++;
		}

		if (time[4] >= '0' && time[4] <= '5') 
		{	//sec
			if (time[5] >= '0' && time[5] <= '9')
				t++;
		}
	}
	if (time[0] == '2' && time[1] == '4') 
		// if time over 24:00:00 false
		if (time[2] != '0' || time[3] != '0' || time[4] != '0' || time[5] != '0')
			t++;
	if (t != 3) 
		printf("잘못 입력했습니다. hhmmss형식으로 입력하세요.\n");
	else
		printf("%s는 유효한 시간입니다.\n", time);
}

int main()
{
	char time[MAX];

	for (;;)
	{
		printf("시간(. 입력 시 종료)? ");
		scanf_s("%s", &time, MAX);

		// .을 입력하면 프로그램 종료
		if (*time == '.')
			break;

		// 입력받은 문자열 time을 매개변수로 전달
		check_time_str(time);
	}
	return 0;
}