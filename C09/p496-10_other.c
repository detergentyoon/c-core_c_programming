#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h> //strlen, strupr
#include<ctype.h> //isblank
#define MAX 256

int main()
{
	char name[MAX];

	for (;;)
	{
		printf("영문 이름: ");
		gets_s(name, sizeof(name));

		if (*name == '.')
			break;

		printf("이니셜: ");

        // _strupr == string upper의 약차로, 문자열을 모두 대문자로 변환 (Hello => HELLO)
		_strupr(name); // strupr가 적용되지 않는 버전에서는 _strupr을 사용

		for (size_t i = 0; i < strlen(name); i++)
		{
			if (i == 0)
				printf("%c", name[i]);
			// 공백 문자 뒤의 문자를 저장
			if (isblank(name[i]))
				printf("%c", name[i + 1]);
		}
		printf("\n");
	}
	return 0;
}