#include<stdio.h>
#define SIZE 256

void check_phone_str(char* num)
{
	int t = 0;

	if (num[0] == '0' && num[1] == '1' && num[2] == '0') 
		for (int i = 3; i <= 10; i++) // 반복문 사용을 통해 검사 코드 간소화
			if (num[i] >= '0' && num[i] <= '9')
				t++;

	// 전화번호는 8자리
	if (t == 8)
		printf("%s는 유효한 전화번호입니다.\n", num);
	else
		printf("잘못 입력했습니다. 01012345678 형식으로 입력하세요.\n");
}

int main()
{
	char num[SIZE];

	for (;;)
	{
		printf("전화번호(. 입력 시 종료)? ");
		scanf_s("%s", num, SIZE);

		if (*num == '.')
			break;

		check_phone_str(num);
	}
	return 0;
}