#include <stdio.h>

// 정수형 배열에 대해 배열의 원소 중 최대값과 최소값을 찾는 함수
//    ==> 배열을 매개변수로 사용
void get_min_max(int* arr, int* max, int* min)
{
	for (int i = 1; i < 10; i++) // main 함수 내에서 이미 `int max = arr[0]`를 통해 첫 번째 원소를 할당하였으므로 i는 1부터 시작
	{
		// 배열 `*arr`은 *max, *min값 출력을 위한 원소 값 비교만을 위한 매개변수로 사용
		if (*max < arr[i])
			*max = arr[i]; // 최대값, 최소값 구하는 process 에서 최종 연산 결과인 arr[i]를 각각 할당

		if (*min > arr[i])
			*min = arr[i];
	}
}

// 크기가 10인 int 배열에 대해 get_min_max 함수로 배열 원소들 중 최대값과 최소값을 찾아서 main 함수에서 출력
int main()
{
	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
	int* p = &arr[0];
	int max = arr[0];
	int min = arr[0];

	printf("배열: ");
	for (int i = 0; i < 10; i++)
		printf("%d ", *(p + i)); // *(p + i) == arr[i]
	printf("\n");

	get_min_max(p, &max, &min); // max와 min의 주소 값을 매개변수로 전달하여 다른 함수에서도 main 함수 내의 변수 값 자체에 개입할 수 있도록 함  

	printf("최대값: %d\n", max); // get_min_max 함수에서 연산한 결과를 포인터를 통해 받아옴
	printf("최소값: %d", min);

	return 0;
}