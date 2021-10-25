#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverse_string(char* str)
{
	char temp;
	int n = strlen(str);

    // 역순으로 만드는 경우 1번 swap에 서로 상반되는 위치의 2개의 값이 동시에 swap 되므로 반복 횟수는 / 2 번이 되어야함
	for (int i = 0; i < n / 2; i++)
	{
		temp = str[i];
		str[i] = str[n - 1 - i];
		str[n - 1 - i] = temp;
	}
}

int main()
{
	char str[128];
	
	printf("문자열: ");
	gets_s(str, sizeof(str));

	reverse_string(str);
	printf("역순으로 된 문자열: %s", str);

	return 0;
}