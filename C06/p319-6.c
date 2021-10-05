#include <stdio.h>

int choose_menu()
{
	int num;

	printf("[1.파일 열기  2.파일 저장  3.인쇄  0.종료] 선택 : ");
	scanf_s("%d", &num);

	return num;
}

int main()
{
	while (1)
	{
		switch (choose_menu())
		{
		case 0:
			return 0; // 종료
		case 1:
			printf("파일 열기를 수행합니다.\n");
			continue;
		case 2:
			printf("파일을 저장 중입니다.\n");
			continue;
		case 3:
			printf("인쇄 중입니다.\n");
			continue;
		default:
			break;
		}
	}
	return 0;
}