#include <stdio.h>
#include <string.h>
#include <ctype.h>

void remove_space(char *str)
{
	char* p = str; // str의 문자열을 복사할 빈 문자열 공간을 생성했다고 이해하면 쉬움\
				   (허나 실질적으로 비어있지는 않음. p 값을 출력하면 값이 나오기 때문)

	while (*str != 0) // *str == str[0] ,  0 == '\0' == NULL
	{
		// 공백 문자인 경우 아래 if문 미실행
		if (isspace(*str) == 0) // isspace() : 공백 문자가 아닌 경우 0 반환 (즉, 값이 존재하는 경우 1 반환)
		{
			if (*p != *str) // 이 조건은 생략하여도 함수의 목적에 맞게 정상 출력됨
				*p = *str; // main 함수에서 실질적으로 출력할 str값의 변화를 줄 pointer 문자열 공간에 문자 저장
			p++; // p값이 저장된 경우에만 문자를 받을 다음 빈 공간 index로 +1
		}
		str++; // 값을 넘겨줄 str 문자열의 다음 문자로 넘어감
	}
	*p = 0; // 공백 문자 개수 만큼 남은 str 문자열 나머지를 0 으로 제거함
}

int main()
{
	char str[128];

	printf("문자열: ");
	gets_s(str, sizeof(str));

	remove_space(str);

	printf("공백 문자 제거 후: %s", str);

	return 0;
}