#include <stdio.h>
#define SIZE 256

void check_time_str(char* time)
{
	int t = 0;

	if (time[0] >= '0' && time[0] <= '2')
	{
		// hour
		if (time[1] >= '0' && time[1] <= '9')
		{
			t++;
			if (time[0] == '2' && time[1] >= '5')
				t--;
		}

		// min
		if (time[2] >= '0' && time[2] <= '5')
			if (time[3] >= '0' && time[3] <= '9')
				t++;
		
		// sec
		if (time[4] >= '0' && time[4] <= '5')
			if (time[5] >= '0' && time[5] <= '9')
				t++;
	}

	if (time[0] == '2' && time[1] == '4')
		if (time[2] != '0' || time[3] != '0' || time[4] != '0' || time[5] != '0')
			t--; // t++ 의 경우 time[2~5]에 문자를 섞어서 조건문의 허점을 통해
                 // 올바른 값을 입력하지 않고도 t를 3으로 증가시킬 수 있는 점을 보완하여 t-- 로 설계함  

	if (t != 3)
		printf("잘못 입력했습니다. hhmmss형식으로 입력하세요.\n");

	else
		printf("%s는 유효한 시간입니다.\n", time);
}

int main()
{
	char time[SIZE];
	
	while (1)
	{
		printf("시간(.입력 시 종료): ");
		scanf_s("%s", time, sizeof(time));

		if (*time == '.')
			break;

		check_time_str(time);
	}
	return 0;
}