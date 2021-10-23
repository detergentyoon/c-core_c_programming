# String


## Standard C library string format function
string format function | info
--|:--
`strlen(str)` | str의 길이를 구함 (except `NULL`)
`strcmp(lhs, rhs)` | lhs와 rhs를 비교하여 같으면 `0`, lhs > rhs면 `+`, lhs < rhs면 `-`값을 return
`strncmp(lhs, rhs, cnt)` | lhs와 rhs를 cnt개만큼 비교, `return value == strcmp`
`strcpy(dest, src)` | src를 dest로 복사
`strncpy(dest, src, cnt)` | src를 dest로 cnt개만큼 복사
`strcat(dest, src)` | dest의 끝에 src를 연결
`strncat(dest, src, cnt)` | dest의 끝에 src를 cnt개 연결
`strchr(str, ch)` | str에서 ch 문자를 찾음
`strstr(str, substr)` | str에서 substr 문자열을 찾음
`strtok(str, delim)` | str을 delim을 이용하여 토큰으로 분리

<br>

## Standard C library character format function
borned f | info
--|:--
`int isalnum(int c)` | 알파벳이나 숫자인지 검사 
`int isalpha(int c)` | 알파벳인지 검사
`int isdigit(int c)` | 숫자인지 검사
`int islower(int c)` | 소문자인지 검사
`int isupper(int c)` | 대문자인지 검사
`int isspace(int c)` | 공백 문자인지 검사
`int isxdigit(int c)` | 16진수 숫자인지 검사
`int tolower(int c)` | 소문자로 변환
`int toupper(int c)` | 대문자로 변환

<br>

## Standard C library transform data function

header file | borned f | info
--|:--|:--
`stdlib.h` | `int atoi(const char *str)` | 문자열을 정수로 변환
`stdlib.h` | `double atof(const char *str)` | 문자열을 실수로 변환
`stdlib.h` | `long atol(const char *str` | 문자열을 long형 값으로 변환
`stdio.h` | `int sscanf(const char *buff, const char *format, ...)` | 문자열롭터 정수나 실수를 읽어옴
`stdio.h` | `int sprintf(char *buff, const char* format, ...)` | 정수나 실수를 형식 문자열을 이용하여 문자열로 만듦

<br>

## strlen
```c
#include <stdio.h>
#include <string.h>
#define SIZE 32

int main()
{
	char s1[] = "helloworld";
	char s2[] = ""; // NULL
	int len = 0;

	printf("s1's len: %d\n", strlen(s1));
	printf("s2's len: %d\n", strlen(s2));
	printf("s2's len: %d\n", strlen("String literal"));
	printf("s1's scale: %d\n", sizeof(s1)); // NULL 문자 포함 배열 크기

	len = strlen(s1);
	if (len > 0)
		s1[len - 1] = '\0'; // 마지막 한 글자 삭제
	printf("s1 = %s\n", s1);

	return 0;
}
```
<br>

## strcpy
```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 32

int main()
{
	char str1[SIZE] = ""; // NULL 문자열로 초기화
	char str2[SIZE] = "";
	char temp[SIZE];

	printf("2개의 문자열: ");
	scanf_s("%s %s", str1, sizeof(str1), str2, sizeof(str2));
	printf("str1 = %s, str2 = %s\n", str1, str2);

	// String swap
	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);

	printf("str1 = %s, str2 = %s\n", str1, str2);

	return 0;
}
```
```
2개의 문자열: String Ctype
str1 = String, str2 = Ctype
str1 = Ctype, str2 = String
```
<br>

## strncpy
```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char phone[] = "010-1234-5678";
	char str[4];
	
	strncpy(str, phone, 3); // "010"을 str로 복사
	str[3] = '\0'; // NULL 문자를 직접 저장해야함

	printf("%s", str);

	return 0;
}
```
```
010
```
<br>

## strcmp
```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 10

int main()
{
	char s1[SIZE] = "";
	char s2[SIZE] = "";
	char password[SIZE] = "";
	
	printf("s1: ");
	scanf_s("%s", s1, sizeof(s1));
	printf("s2: ");
	scanf_s("%s", s2, sizeof(s2));

	if (strcmp(s1, s2) == 0)
		printf("same string\n");
	else
		printf("difference string\n");
		
	printf("password: ");
	scanf_s("%s", password, sizeof(password));
	if (strcmp(password, "abcd1234") == 0) // 등록된 password = abcd1234
		printf("login succeeded\n");
	else
		printf("login failed\n");

	return 0;
}
```
```
s1: hello
s2: hello
same string
password: abcd1234
login succeeded
```
<br>

## strncmp
```c

```
```

```

<br>

# `[ ]` : scanlist  
>문자열을 입력할 때 scanlist 내에 명시된 글자만을 입력으로 받는 포맷 지정자
```c
char number[10];
scanf_s("%[0123456789]", number);
```
:: `123abc` 입력 시 number는 `123`이 된다.

<br>

## `^`
>>`^`는 scanlist에 명시된 글자를 **제외**한 것만 입력으로 받는다.
```c
scanf_s("%[^\n]", str, sizeof(str))
```
:: `\n`(end-of-line) 문자를 제외하고 받는다.

<br>

## `*`
>>`*`는 입력을 읽기는 읽되, 지정된 변수에 저장하지 않고 건너뛴다.
```c
int i;
scanf("%*d%d", &i);
```
`1 2`를 입력하면 `1`은 건너뛰고 `i`의 값은 `2`가 된다.