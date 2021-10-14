#include <stdio.h>

int main()
{
	double arr[3];
	double* p = arr;

	for (int i = 0; i < 3; i++)
		printf("x[%d]의 주소: %p\n", i, p + i);
	// 주소 값은 프로그램 실행마다 무작위로 할당되기 때문에 주소의 8 byte 차이를 통해 결과를 확인 

	return 0;
}