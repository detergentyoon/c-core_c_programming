#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	unsigned int image1[16];
	unsigned int image2[16];
	unsigned int image3[16]; // 결과를 저장할 배열

	srand(time(NULL));
	for (int i = 0; i < 16; i++)
	{
		image1[i] = rand() % 256;
		image2[i] = rand() % 256;
	}

	printf("image1:");
	for (int i = 0; i < 16; i++)
		printf("%3X", image1[i]);
	
	printf("\nimage2:");
	for (int i = 0; i < 16; i++)
		printf("%3X", image2[i]);

	// or 연산
	for (int i = 0; i < 16; i++)
		image3[i] = image1[i] | image2[i];

	printf("\nimage3:");
	for (int i = 0; i < 16; i++)
		printf("%3X", image3[i]);

	return 0;
}

// OR 연산의 결과가 16진수라서 올바른 결과값인지 확인하지 못했음.
// 수 연산 사이트를 통해 검증해보았으나 맞는 값도 있으며 틀리게 나오는 값도 있어 혼란스러움.