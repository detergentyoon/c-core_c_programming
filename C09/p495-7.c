// 이 문제는 other 코드가 더 효율적임

#include <stdio.h>
#define SIZE 256

void check_phone_str(char* num)
{
	int n = 0;

	// 국번은 "010"만 가능
	if (num[0] == '0' && num[1] == '1' && num[2] == '0')
	{
		n++;
		if (num[3] >= '0' && num[3] <= '9')
			if (num[4] >= '0' && num[4] <= '9')
				if (num[5] >= '0' && num[5] <= '9')
					if (num[6] >= '0' && num[6] <= '9')
					{
						n++;
						if (num[7] >= '0' && num[7] <= '9')
							if (num[8] >= '0' && num[8] <= '9')
								if (num[9] >= '0' && num[9] <= '9')
									if (num[10] >= '0' && num[10] <= '9')
										n++;
					}
	}
	if (n != 3)
		printf("잘못 입력했습니다. 01012345678 형식으로 입력하세요.\n");
	else
		printf("%s는 유효한 전화번호입니다.\n", num);
}

int main()
{
	char num[SIZE];

	while (1)
	{
		printf("전화번호(.입력 시 종료): ");
		scanf_s("%s", num, sizeof(num));

		if (*num == '.')
			break;

		check_phone_str(num);
	}
	return 0;
}