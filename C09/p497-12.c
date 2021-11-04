#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // _strrev() ...
#include <stdlib.h> // abs()
#define SIZE 256

int main()
{
	char str[SIZE] = "";
	char str_A[SIZE] = "";
	char str_B[SIZE] = "";
	int num;

	printf("문자열: ");
	gets_s(str, sizeof(str));

	while (1)
	{
		printf("이동할 글자수: ");
		scanf_s("%d", &num);

		int len = strlen(str);

		if (num > 0)
			for (size_t i = 0; i < len; i++)
			{
				if (i < len - num)
					str_A[i] = str[i];
				else
					str_B[len - 1 - i] = str[i]; // 역순으로 지정된 원소 값은 for문 밖의 _strrev 함수를 통해 올바른 순서의 값으로 변환
				if (i == len - num)
					str_A[i] = '\0';
			}
		else if (num < 0)
			for (size_t i = 0; i < len; i++)
			{
				if (i < abs(num))
					str_A[i] = str[i];
				else
					str_B[len - 1 - i] = str[i]; // 역순으로 지정된 원소 값은 for문 밖의 _strrev 함수를 통해 올바른 순서의 값으로 변환
				if (i == abs(num))
					str_A[i] = '\0';
			}
		else // num == 0
			break;

		_strrev(str_B);
		str[0] = '\0'; // str을 rotate 결과 출력을 위한 매개체로 사용하기 위해 비어있는 값으로 변환

		strcat(str, str_B);
		strcat(str, str_A);
		puts(str);
	}
	return 0;
}