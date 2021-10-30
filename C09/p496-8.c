#include <stdio.h>
#include <string.h>
#define SIZE 256

int main()
{
	char str[SIZE];
	int key;

	for (;;)
	{
		printf("문자열: ");
		scanf_s("%[^\n]", str, sizeof(str));

		if (*str == '.')
			break;

		printf("암호 키(정수): ");
		scanf_s("%d", &key);

		getchar(); // 버퍼 비움
		
		size_t len = strlen(str);
		for (size_t i = 0; i < len; i++)
		{
			if (str[i] != ' ')
				str[i] += key;
		}
		printf("암호화된 문자열: %s\n", str);
	}
	return 0;
}