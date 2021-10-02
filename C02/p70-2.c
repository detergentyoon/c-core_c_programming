#include <stdio.h>

int main()
{
	char name[10];
	float score;

	printf("이름? ");
	scanf_s("%s", name, 6);

	printf("학점? ");
	scanf_s("%f", &score);

	printf("%s의 학점은 %f 입니다.", name, score);

	return 0;
}