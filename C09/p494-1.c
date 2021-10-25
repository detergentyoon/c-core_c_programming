#include<stdio.h>
#include<string.h>// strlen()
#include<ctype.h>// isspace()

int main()
{
	char str[256];
	int count = 0;

	printf("문자열: ");
	scanf_s("%[^\n]", str, sizeof(str)); // \n을 제외한 문자만 받음
	// 혹은 gets_s(str, sizeof(str));

	int n = strlen(str);

	for (int i = 0; i < n; i++)
		if (isspace(str[i])) // 공백문자를 찾을때 마다 count++
			count++;

	printf("공백 문자의 개수: %d", count);

	return 0;
}