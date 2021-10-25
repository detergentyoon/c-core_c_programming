#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char str[128];
	
	printf("문자열: ");
	gets_s(str, sizeof(str));

	int n = strlen(str);
	for (int i = 0; i < n; i++)
	{
		if (islower(str[i]))
			str[i] = toupper(str[i]);
		else if (isupper(str[i]))
			str[i] = tolower(str[i]);
	}
	printf("변환 후: %s", str);

	return 0;
}