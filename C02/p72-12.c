#include <stdio.h>

int main()
{
	char name[30], department[30], student_num[30];

	printf("이름? ");
	scanf_s("%s", name, sizeof(name));
	printf("학과? ");
	scanf_s("%s", department, sizeof(department));
	printf("학번? ");
	scanf_s("%s", student_num, sizeof(student_num));

	printf("===============================\n");
	printf("이름: %s\n", name);
	printf("학과: %s\n", department);
	printf("학번: %s\n", student_num);
	printf("===============================\n");
	
	return 0;
}