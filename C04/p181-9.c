// 동영상 재생시간 초 단위로 입력받아 몇 시간 몇 분 몇 초인지 출력
// 시 분 초 단위에서 0 인 단위는 출력에서 제외

#include <stdio.h>

int main()
{
	int play_time, s, m, h;

	printf("재생시간(sec) : ");
	scanf_s("%d", &play_time);

	s = play_time % 60;
	m = (play_time / 60) % 60;
	h = play_time / 3600;

	if (s == 0)
	{
		if (h == 0)
			printf("%d분", m);

		else if (m == 0)
			printf("%d시간", h);

		else
			printf("%d시간 %d분", h, m);
	}

	else if (m == 0)
	{
		if (h == 0)
			printf("%d초", s);

		else if (s == 0)
			printf("%d시간", h);
		else
			printf("%d시간 %d초", h, s);
	}

	else if (h == 0)
	{
		if (m == 0)
			printf("%d초", s);
		else if (s == 0)
			printf("%d분", m);
		else
			printf("%d분 %d초", m, s);
	}

	else
		printf("%d시간 %d분 %d초", h, m, s);
	return 0;
}