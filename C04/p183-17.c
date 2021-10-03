// 32비트 크기의 데이터(부호 없는 정수형)에는 0~31번 비트가 존재한다.
// 7번째 비트만 1인 값, 15번째 비트만 1인 값, 23번째 비트만 1인 값, 31번째 비트만 1인 값을 구해서 16진수와 10진수로 출력

#include <stdio.h>

int main()
{
	unsigned int A = 1;
	unsigned int B = 1;
	unsigned int C = 1;
	unsigned int D = 1;

	A = A << 7;
	B = B << 15;
	C = C << 23;
	D = D << 31;

	printf("%08X, %d\n", A, A);
	printf("%08X, %d\n", B, B);
	printf("%08X, %d\n", C, C);
	printf("%08X, %d\n", D, D);

	return 0;
}