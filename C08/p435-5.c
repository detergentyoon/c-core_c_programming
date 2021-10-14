#include <stdio.h>

// 배열, 배열의 크기, 공차(common difference) => 매개변수
// ==> 등차수열로 배열을 채우는 함수
	// 등차수열 : 앞의 항에 항상 일정한 수(공차)를 더하여 만들어가는 수열
int arith_seq(int* arr, int scale, int common_difference)
{
	for (int i = 1; i < scale; i++) // arr[0] 번째는 공차를 더하지 않아야 하는 첫 번째 항이기 때문에 i를 배열의 두 번째 값인 1부터 시작
		arr[i] = arr[i - 1] + common_difference;
        // 배열 이름은 배열 자체를 가리키는 게 아니라 첫 번째 원소의 포인터 주소 값으로, 포인터 주소 값은 좌변에 올 수 없기 때문에
        // (좌변은 항상 수정이 가능한 상태의 수가 들어가야함. 즉, '하나의 고정된 주소값'이 좌변에 들어가면 컴파일 오류를 야기)
        //    ===> 고정되지 않고 변화가 가능한 `arr[i]`을 좌변에 입력
            // ※ 만약 좌변에 고정된 주소값을 할당하면 : [식이 수정할 수 있는 lvalue여야 합니다] 오류가 발생.
            //   이는 배열의 이름이 그 배열이 시작하는 주소값이므로, 만약 이것이 바뀌게 되면 배열의 시작 위치가 사라지게 되므로 이를 수정하기 못하도록 컴파일러가 에러로 막는 것임.

        // 매 루프마다 증가하는 i값에 따른 arr[i]마다 저장될 값은 등차수열(arr[이전값] + 공차) 형태로 저장
        //    ===> `arr[i - 1] + common_difference`
	return *arr;
}

int main()
{
	int arr[10];
	int* p = &arr[0];
	int value;
	int common_difference;

	printf("첫 번째 항: ");
	scanf_s("%d", &value);
	arr[0] = value; // 첫 번째 항 값 = 배열 0번 원소

	printf("공차: ");
	scanf_s("%d", &common_difference);

	printf("등차수열: ");
	arith_seq(p, 10, common_difference); // &arr[0] == arr, 0번째 원소의 주소는 배열 자체의 주소와도 같다고 이해하면 쉬움
	for (int i = 0; i < 10; i++)
		printf("%d ", *(p + i)); // *(p + i) == arr[i]
	
	return 0;
}