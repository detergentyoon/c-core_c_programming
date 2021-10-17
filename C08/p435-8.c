#include <stdio.h>
// 정수형 배열을 특정 값으로 채우는 fill_array 함수(포인터와 포인터 역참조 연산자 이용)
void fill_array(int* arr, int* num)
{
	*arr = *num; // 매개변수로 받은 arr을 역참조하여 arr 원소값들을 num 값으로 초기화
}

int main()
{
	// fill_array 함수를 이용해서 크기가 20인 int 배열을 입력받은 값으로 채우고 출력
	int arr[20];
	int num;

	printf("배열의 원소에 저장할 값: ");
	scanf_s("%d", &num);

	fill_array(arr, &num); // 배열의 이름 = 배열의 주소값, 하지만 num은 일반 변수이므로 '&'를 붙여서 전달

	printf("배열: ");
	for (int i = 0; i < 20; i++)
		printf("%d ", *arr); // *arr(역참조)로 'fill_array 함수 내에서 정의한 *arr값'을 출력
		// format값으로 arr[i] 할당 시, main 함수 내에서 실질적으로 원소값이 할당되지 않았기에 더미값이 반환됨

        // 즉, *arr = 다른 사용자 정의 함수에 있는 값을 main 함수에서도 사용할 수 있도록 불러옴
	return 0;
}