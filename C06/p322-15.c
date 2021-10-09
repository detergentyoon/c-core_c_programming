#include <stdio.h>
#include <math.h> // pow

int round_pos(int x, int i)
{
	int n = pow(10, i); // 10의 i승

	// n의 자리 반올림 알고리즘 == (x + 5n) / 10n * 10n
	return (x + 5 * n) / (10 * n) * (10 * n);
}

int main()
{
	for (int i = 0; i < 3; i++)
		printf("%d번째 자리에서 반올림한 결과: %d\n", i + 1, round_pos(1357, i));

	return 0;
}