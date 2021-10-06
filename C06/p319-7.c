#include <stdio.h>
// 소수 : 1과 자기 자신만으로 나누어지는 자연수
int is_prime(int n)
{
	int prime = 0;

	for (int a = 2; a <= n; a++)
	{
		int i = 0; // 소수 검사값
		for (int b = 1; b <= a; b++) // 2중 for문이 끝날 때 마다 i = 0 초기화하여 + 1 의 다음 수 검사
		{
			if (a % b == 0)
				i++;
		}

		if (i == 2) // 위 2중 for문의 i++을 통해 % 연산값이 0인 경우가 2개(1과 자기 자신)만 스택된 값은 소수
		{
			prime++;
			printf("%3d ", a);
			// 소수를 15개 출력할 때마다 줄 바꿈
			if (prime != 0 && prime % 15 == 0)
				printf("\n");
		}
	}
	return prime; // 소수의 개수
}

int main()
{
	int n;

	printf("1 ~ n 사이의 소수를 구합니다. n 은? ");
	scanf_s("%d", &n);

	printf("\n소수는 모두 %d개입니다.", is_prime(n));

	return 0;
}