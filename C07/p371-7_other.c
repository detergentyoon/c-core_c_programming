#include <stdio.h>

void fill_array(int a)
{
	int arr[20];

	for (int i = 0; i < 20; i++)
	{
		arr[i] = a;
		printf("%d ", arr[i]);
	}
}
int main(void)
{
	int a;

	printf("배열의 원소에 저장할 값: ");
	scanf_s("%d", &a);
	fill_array(a);

	return 0;
}

// 이 코드는 문제에서 제시하는 함수 인자의 정의와 다르게 설계됨.