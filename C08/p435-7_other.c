#include <stdio.h>

// 실수형 배열 원소를 역순으로 만드는 함수
void reverse_array(double* arr)
{
	double* p = &arr[10]; // 마지막 10번째 배열의 주소로 정의

	for (int i = 0; i < 10; i++)
	{
		p--; // p(arr[10])의 index를 내림차순 출력
		printf("%.1lf ", *p); // 이 경우, format 변수로 arr[i]를 넣으면 변화가 생긴 p값을 arr에 저장하지 않았기 때문에 역순으로 출력되지 않음
	}
}

int main()
{
	// 크기가 10인 double 배열에 reverse_array 함수 사용
	double arr[10] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };

	printf("배열: ");
	for (int i = 0; i < 10; i++)
		printf("%.1lf ", arr[i]);

	printf("\n역순: ");
	reverse_array(arr);

	return 0;
}

// 이 코드의 문제점 :
//    ==> void 함수 자체에서 print 하기 때문에 배열 return에 대한 이해도를 높이기에 적합하지 않음 