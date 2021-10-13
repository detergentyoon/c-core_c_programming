// 이 코드는 14번 문제에서 제시하는 '배열의 원소를 임의의 순서로 뒤섞는 프로그램' 즉 셔플 기능을 구현하기 위해서
// 어느 티스토리 기술 블로그에 게시된 '카드 게임에서 필요한 카드 섞기 시스템 구현을 위한 shuffle 함수 구현'에서 제시하는 임의 예제를 정리한 것임.

// 이 코드를 통해 (얕은)공부가 된 요소들
//   +  배열과 포인터의 연관성
//   +  malloc 함수를 통한 배열 공간(메모리) 할당
//   +  malloc 함수 사용 후 이어지는 free 함수의 필요성

#include <stdio.h>
#include <time.h> // time
#include <stdlib.h> // srand, rand

void print_arr(int* arr, int num)
{
	for (int i = 0; i < num; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void shuffle_arr(int* arr, int num)
{
	srand(time(NULL)); // 난수 초기화

	for (int i = 0; i < num; i++)
	{
		int rnd = rand() % (num - i) + i; // i 부터 num-1 사이에 임의의 정수 생성
		// rand() % 10; 으로도 전혀 문제없이 돌아가지만 정수 생성 범위 지정 방법 숙지를 위해 참조함

		// i번째 arr key 값과 rnd번째 arr key 값을 shuffle
		int temp = arr[i];
		arr[i] = arr[rnd];
		arr[rnd] = temp;
	}
}

int main()
{
	int *arr;
	int num; // 배열 크기 설정값
	printf("input the size of array: ");
	scanf_s("%d", &num);

	arr = (int *)malloc(sizeof(int) * num); // 입력받은 배열의 크기만큼 동적 메모리 할당
	// 포인터 = malloc(크기);
	// void* malloc(size_t _Size);
	// 성공 시 메모리 주소 반환, 실패 시 NULL 반환

	for (int i = 0; i < num; i++)
		arr[i] = i + 1;

	printf("before shuffle: ");
	print_arr(arr, num);

	printf("\n after shuffle: ");
	shuffle_arr(arr, num);
	print_arr(arr, num);

	free(arr); // malloc을 통한 동적 메모리 할당을 명시적으로 해제
	// 명시적으로 해제 시켜주지 않으면 동적으로 할당된 공간은 프로그램이 끝날 때 까지 메모리에서 사라지지 않음

	return 0;
}