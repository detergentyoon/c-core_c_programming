#include <stdio.h>
#include <string.h>
#define SIZE 256

int strcmp_ic(char* lhs, char *rhs)
{
	// 대문자를 모두 소문자로 변경하여 비교
	while (*lhs >= 'A' && *lhs <= 'Z')
		// ASCII A + 32 == a
		*lhs += 32;
	while (*rhs >= 'A' && *rhs <= 'Z')
		*rhs += 32;

	if (*lhs == *rhs)
		return 0;
	else if (*lhs > *rhs)
		return 1;
	else
		return -1;
}

int main()
{
	char lhs[SIZE];
	char rhs[SIZE];

	printf("첫 번째 문자열: ");
	gets_s(lhs, sizeof(lhs));
	printf("두 번째 문자열: ");
	gets_s(rhs, sizeof(rhs));

	strcmp_ic(lhs, rhs);

	if (strcmp_ic(lhs, rhs) == 0)
		printf("%s와 %s가 같습니다.", lhs, rhs);
	else
		printf("%s와 %s가 같지 않습니다.", lhs, rhs);

	return 0;
}