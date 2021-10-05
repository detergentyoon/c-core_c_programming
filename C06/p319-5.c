#include <stdio.h>

int is_even(int num)
{
	int even = 0;

	if (num % 2 == 0)
		even++;

	return even;
}

int is_odd(int num)
{
	int odd = 0;

	if (num % 2 == 1)
		odd++;

	return odd;
}

int main()
{
	int num;
	int even = 0;
	int odd = 0;

	while (1)
	{
		scanf_s("%d", &num);

		if (num == 0)
			break;
		
		even += is_even(num);
		odd += is_odd(num);
	}

	printf("입력받은 정수 중 짝수는 %d개, 홀수는 %d개입니다.", even, odd);

	return 0;
}