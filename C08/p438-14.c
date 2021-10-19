#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void rand_array(int* arr)
{
	for (int i = 0; i < 10; i++)
		arr[i] = rand() % 100; // 0 ~ 99
}

int main()
{
	srand(time(NULL));
	int arr[10];
	int count = rand() % 10; // 0 ~ 9

	printf("count = %d\n", count);

	for (int i = 0; i < count; i++)
	{
		rand_array(arr);
		for (int j = 0; j < 10; j++)
			printf("%2d ", arr[j]);
		printf("\n");
	}
	return 0;
}

// ※ 정상적으로 출력되지만, 문제에서 제시하는 모든 조건에는 부합하지 못한 코드임
// 풀지 못한 요소
//   + 임의의 정수 1개를 생성하면서 동시에 배열 크기만큼 생성할 수 도 있는 함수의 기능을 구현하지 못하여 count 값을 rand 함수로만 해결함
//       ==> 스택 넘침 예외 오류 발생