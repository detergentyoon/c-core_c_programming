#include <stdio.h>

int is_bit_set(int bit, int pos)
{
	if ((bit & (1 << pos)) ? 1 : 0 == 1) // if ? True : False
		return 1;
	else if ((bit & (1 << pos)) ? 1 : 0 == 0)
		return 0;
	else
		return -1;
}

int main()
{
	int bit;
	int count = 0;

	printf("정수: ");
	scanf_s("%x", &bit);
	printf("%x: ", bit);

	for (int i = 31; i >= 0; i--)
	{
		printf("%d", is_bit_set(bit, i));
		count++;

		if (count == 4) // 4bit 단위 구분 공백
		{
			printf(" ");
			count = 0;
		}
	}
	return 0;
}