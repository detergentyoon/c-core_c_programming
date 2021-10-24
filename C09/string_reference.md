# Standard C library for string

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
```
<br>

## strcpy
```c
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
```
```
2개의 문자열: String Ctype
str1 = String, str2 = Ctype
str1 = Ctype, str2 = String
```
<br>

## strncpy
```c
char phone[] = "010-1234-5678";
char str[4];

strncpy(str, phone, 3); // "010"을 str로 복사
str[3] = '\0'; // NULL 문자를 직접 저장해야함
printf("%s", str);
```
```
010
```
<br>

## strcmp
```c
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
char str[] = "hello world";
char cmp[] = "hello there"; // NULL
if (strncmp(cmp, str, 6) == 0) // NULL 문자를 포함한 6글자 비교
	printf("same string");
```
```
same string
```
<br>

## strcat
```c
char sentence[100] = "";
char word[20] = "";

do {
	printf("word: ");
	scanf_s("%s", word, sizeof(word));

	// 검사
	if (strcmp(word, ".") == 0) // word에 "."이 입력되면 "."을 제외한 문장만 출력
		break;
	else
	{
		strcat(sentence, word);
		strcat(sentence, " "); // 단어 구분용 " "
	}
} while (strcmp(word, ".") != 0); // word에 "."이 입력될 때 까지 반복
								  // == word 입력값이 "."과 같지 않은 경우에 반복
printf("%s", sentence);
```
```
word: ac/dc
word: d4c
word: world
word: .
ac/dc d4c world
```
<br>

## strchr & strstr
>`strchr`, `strstr`'s return value == find rocate address 
```c
char filename[] = "readme.md";
char* p = NULL;

p = strchr(filename, '.'); // word = '' , sentence = ""
if (p != NULL)
printf("file extension: %s\n", p + 1); // p + 1 : "." 다음에 있는 파일 확장자만 출력

p = strstr(filename, ".md");
if (p != NULL)
printf("file type: Mark down");
```
```
file extension: md
file type: Mark down
```
<br>

## strtok
>토큰(어떤 문장에서 더 이상 나눌 수 없는 최소 단위)으로 쪼개고, 토큰의 주소를 return
```c
char phone[] = "010-1234-5678";
char* p = NULL;

p = strtok(phone, "-"); // "-"를 토큰의 구분점으로 정의
printf("area code: %s\n", p);
p = strtok(NULL, "-"); // 첫 번째 strtok 함수 호출 후에 이전 문자열에서 다음 토큰을 구하려면 strtok 함수 첫 번째 인자로 NULL 지정 
printf("prefix: %s\n", p);
p = strtok(NULL, "-");
printf("line num: %s", p);
```
```
area code: 010
prefix: 1234
line num: 5678
```
<br>

# String i/o

## Standard C library I/O function
String processing function | info
--|:--
`scanf("%s", str);` | 공백 문자까지 문자열을 입력받아서 str에 저장
`printf(str);` or `printf("%s", str);` | str 출력
`gets_s(str, count);` | 한 줄의 문자열을 읽어 \n 을 제외하고 str에 저장
`fgets(str, count, stdin);` | \n 을 포함한 한 줄의 문자열을 읽어 str에 저장
`puts(str);` | str과 \n 를 출력
`sscanf(str, "format", ...);` | str에서 format에 지정된 대로 값을 읽어옴
`sprintf(str, "format", ...);` | str을 format에 지정된 대로 만듦 **(출력이 아님)**

<br>

## scanf  
```c
char str[128];
scanf_s("%s", str, sizeof(str));
```
입력 버퍼에서 문자열을 읽어올 때 공백 문자(" ")까지만 입력으로 가져옴

<br>

## gets
```c
char* gets(char* str);
```
문자 배열의 주소를 전달하면 \n 이 입력될 때까지 입력된 문자열을 str에 저장

문자 배열을 인자로 전달하면서 배열의 크기를 전달하지 않고, 사용자로부터 입력을 받기 때문에 버퍼 오버런에 취약하므로 <span style="color:crimson">사용 X

<br>

## ▼ gets 함수의 보완 함수

## fgets
```c
char* fgets(char* str, int count, FILE* stream);
```
파일로부터 줄바꿈 문자(\n)를 만날 때까지 한 줄의 문자열을 읽어옴.

이 함수의 마지막 인자로 `stdin`을 지정하면 표준 입력인 console에서 한 줄의 문자열을 입력받음  
두 번째 인자로 배열의 크기를 지정하면 \n 이 입력될 때까지 또는 최대 `count - 1`의 글자를 입력받아 `str`에 저장 후 문자열의 끝에 `NULL`을 저장, `str`에는 \n 도 포함
```c
char str[128];
fgets(str, sizeof(str), stdin); // \n 까지를 str로 읽어옴
printf(str); // str에 \n이 포함되어 있으므로 출력 후 줄바뀜
```
<br>

## gets_s
```c
char* gets_s(char* str, size_t n);
```
fgets 처럼 한 줄의 문자열을 읽어오지만, gets_s는 읽어 온 문자열의 맨 끝에 \n 를 포함하지 않음
```c
char str[128];
gets_s(str, sizeof(str));
printf(str); // 줄바꿈되지 않음
```
<br>
즉, 간단히 정리하면

+ fgets = space O, \n O  
+ gets_s = space O, \n X

<br>

## puts
```c
puts("hello world"); // == hello world\n
```
```
hello world

```
<br>

## sscanf
```c
int sscanf(const char *buffer, const char *format, ...);
```
>`sscanf` 함수는 첫 번째 매개변수가 문자열이고 나머지는 scanf 함수와 사용 방법이 동일하며, <u>console의 입력 buffer 대신 첫 번째 매개변수인 문자열에서 형식 문자열(format)에 지정된 대로 값을 읽어옴</u>
```c
char str[128] = "1234";
int n;

int index = sscanf(str, "%d", &n); // str에서 정수를 읽어 n에 저장
// 즉, str을 buffer 처럼 사용

printf("\"%s\"\n", str);
printf("%d\n", n);

printf("%d", index); // sscanf는 입력 성공 시에 읽어들인 것의 개수를 반환.
// 물론, 0 이 리턴될 수 도 있음 (이 경우에는 str 에서 format 에서 지정한 형식과 일치하는 데이터가 없어서 아무것도 읽어들이지 않은 경우 발생)
```
```
"1234"
1234
1
```
<br>

## sprintf
>`sprintf` 함수는 첫 번째 매개변수가 문자 배열이고 나머지는 scanf 함수와 사용 방법이 동일하며, 형식 문자열(format)에 지정된 대로 문자열을 만들어서 buffer에 저장
```c
char in_str[128];
char out_str[128];
int h = 12, m = 30, s = 45;

printf("string: ");
gets_s(in_str, sizeof(in_str));

puts(in_str);
sprintf(out_str, "%02d:%02d:%02d", h, m, s);
puts(out_str);
```
```
string: get_s can read string includin spaces.
get_s can read string includin spaces.
12:30:45
```
<br>

---
<br>

# String Pointer

## 1 . Char type String Pointer

### string literal
상수는 필요할 때 잠깐동안 CPU 레지스터에 값을 넣어서 사용하는 임시 값이기 때문에 메모리에 할당되지 않으며 주소가 없지만, 문자열 리터럴은 예외적으로 메모리에 할당됨. 이는 문자열 리터럴의 길이가 정해지지 않아 CPU 레지스터에 보관할 수 없기 때문.

C 컴파일러는 `Text segment`라는 특수한 메모리 영역에 문자열 리터럴을 보관하고 그 주소를 대신 사용. 예를 들어 `"abcde"`**라는 문자열 리터럴의 데이터형은** `char[6]`**이며, "abcde"는 이름 없는 문자 배열로 생각할 수 있음**(배열 이름 대신 문자열 리터럴을 직접 사용한다는 메커니즘).

```c
char *p = "abcde";

p[0] = 'A'; // Error
strcpy(p, "xyz"); // Error
```
```
p (char 주소) ===> [a][b][c][d][e][\0] string literal
                   [A] 			 // 불가능
				   [x][y][z][\0] // 불가능
```
```c
char *p = "apple";
p = "banana"; // 값 변경이 아닌 가리키는 주소의 변경은 가능
```
문자열 리터럴은 문자 배열처럼 메모리에 저장되지만 **값을 변경할 수는 없음**. 문자열 리터럴이 만들어지는 `Text segment`는 변경할 수 없는 메모리이기 때문. 따라서 문자열 리터럴은 <u>읽기 전용</u>으로만 사용.

<br>

#### string literal etc.
문자열 리터럴을 연속해서 사용하면 하나로 합쳐짐
```c
char str[] = "abc" "xyz"; // == "abcxyz"
```
<br>

들여쓰기
```c
if (x > 0) // 들여쓰기 불가능
	printf("This is very long string, \
which can be connected all together automatically.\n");

if (x > 0) // 들여쓰기 가능
	printf("This is very long string, "
		"which can be connected all together automatically.\n");
```
```
This is very long string,       which can be connected all together automatically.
This is very long string, which can be connected all together automatically.
```
<br>

### string pointer
```c
char str[128];
char* p = str;

strcpy(p, "test string"); // p가 가리키는 문자 배열을 변경

if (islower(p[0]))
p[0] = toupper(p[0]);

p = strchr(p, ' '); // str중 ' '문자의 주소를 포인터 p에 저장
// 함수 호출 후 p[1] = 's'

if (islower(p[1]))
p[1] = toupper(p[1]);

puts(str);
```
```
Test String
```

<br>

## const char*type string pointer

```c
int count_space(const char* str)
{
	int count = 0;
	while (str[0] != '\0')
	{
		if (isspace(str[0]))
			count++;
		str++; // next index
	}
	return count;

	//str[0] = 'A';		  // str이 가리키는 문자열 변경 불가능하므로 컴파일 에러
	//strcpy(str, "xyz"); // strcpy의 매개변수와 데이터형이 다르므로 컴파일 경고
}

int main()
{
	char str[128] = "this program\ttest const pointer to string\n";

	puts(str);
	printf("%d", count_space(str));

	return 0;
}
```

---
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