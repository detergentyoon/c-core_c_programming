#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strlen, toupper
#include <ctype.h> // isblank
#define SIZE 256

int main()
{
	char name[SIZE];

	for (;;)
	{
		printf("영문 이름: ");
		gets_s(name, sizeof(name));

		if (*name == '.')
			break;

		printf("이니셜: ");
		for (size_t i = 0; i < strlen(name); i++)
		{
			if (i == 0)
				printf("%c", toupper(name[i]));
            // 공백 문자 뒤의 문자를 저장
			if (isblank(name[i]))
				printf("%c", toupper(name[i + 1]));
		}
		printf("\n");
	}
	return 0;
}