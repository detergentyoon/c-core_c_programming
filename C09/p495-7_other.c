// 이 문제는 other 코드가 더 효율적임

#include<stdio.h>
#define SIZE 256

void check_phone_str(char* phone)
{
	int t = 0;

	/* 문자열에 저장된 문자가 올바른 형식인지 검사
	index[0], [1], [2]에 저장된 문자가 0, 1, 0인지 확인 */
	if (phone[0] == '0' && phone[1] == '1' && phone[2] == '0') 
		for (int i = 3; i <= 10; i++) // 반복문 사용을 통해 검사 코드를 간소화함
			// 0~9 사이의 숫자가 맞으면 t++
			if (phone[i] >= '0' && phone[i] <= '9')
				t++;

	// 전화번호는 8자리
	if (t == 8)
		printf("%s는 유효한 전화번호입니다.\n", phone);
	else
		printf("잘못 입력했습니다. 01012345678 형식으로 입력하세요.\n");
}

int main(void)
{
	char phone[SIZE];

	for (;;)
	{
		printf("전화번호(. 입력 시 종료)? ");
		scanf_s("%s", phone, SIZE);

		if (*phone == '.')
			break;

		check_phone_str(phone);
	}
	return 0;
}