#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> // strcat()
#define MAX 256

int main()
{
	char name[MAX] = "";
	char extn[MAX] = "";
	char dot[2] = ".";

	printf("파일명: ");
	scanf_s("%[^\n]s", name, sizeof(name));

	getchar(); // 버퍼를 비움

	printf("확장자: ");
	scanf_s("%[^\n]s", extn, sizeof(extn));

	// 문자열을 하나로 병합
	strcat(name, dot);
	strcat(name, extn);

	printf("전체 파일명: %s", name);

	return 0;
}