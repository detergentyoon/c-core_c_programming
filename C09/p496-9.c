#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcat
#define SIZE 256

int main()
{
	char filename[SIZE];
	char extn[SIZE];
	char dot[2] = "."; // strcat 매개변수는 문자열만 받기 때문에 dot을 문자열로 정의

	printf("파일명: ");
	gets_s(filename, sizeof(filename));

	printf("확장자: ");
	gets_s(extn, sizeof(extn));

	strcat(filename, dot);
	strcat(filename, extn);

	printf("전체 파일명: %s", filename);

	return 0;
}