#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void divisors(int n)
{
	int count = 0;

	printf("%d의 약수: ", n);

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			printf("%d ", i);
			count++;
		}

		if (n == i)
			printf("=> 총 %d개\n", count);
	}
}

int main()
{
	int n= 56;
	srand(time(NULL));

	for (int i = 0; i < 3; i++)
	{
		n = rand() % 1000; // 0~999사이의 임의의 정수
		divisors(n);
	}
	return 0;
}