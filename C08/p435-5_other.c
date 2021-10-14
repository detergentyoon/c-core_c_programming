// other code 에서는 arith_seq 함수를 void 형태로 정의하여
// 등차수열 값을 할당한 배열을 포인터를 통해 main 함수로 return 하지 않고 함수 내에서 연산 결과를 바로 출력함.

// 이 코드에서 느낀 문제점
//    ==> 다른 함수에서 연산한 결과를 main 함수로 return 하여 main 함수 내에서 출력하는 것이 '포인터와 배열의 연관성'에 대한 이해도를 높이기에 더 적합함.
//    ==> 따라서 ohter 코드가 아닌 본(p435-5.c(main)) 코드의 형식을 따르는 것이 좋다고 평가함.

#include <stdio.h>

void arith_seq(int* arr, int scale, int common_difference)
{
	printf("%d ", arr[0]);
	for (int i = 1; i < scale; i++)
	{
		arr[i] = arr[i - 1] + common_difference;
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[10];
	int* p = &arr[0];
	int first_value;
	int common_difference;

	printf("첫 번째 항: ");
	scanf_s("%d", &first_value);
	arr[0] = first_value;

	printf("공차: ");
	scanf_s("%d", &common_difference);

	printf("등차수열: ");
	arith_seq(p, 10, common_difference);

	return 0;
}