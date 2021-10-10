#include <stdio.h>

int main()
{
	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 12, 37 };
	int a;

	printf("배열: ");
	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	printf("\n찾을 값: ");
	scanf_s("%d", &a);

	for (int i = 9; i >= 0; i--)
	{
		if (arr[i] == a)
		{
			printf("%d는 %d번째 원소입니다.", a, i);
			return 0;
		}
	}
}