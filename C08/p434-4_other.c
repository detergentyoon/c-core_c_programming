// #include <stdio.h>

// int main()
// {
// 	double arr[10] = { .1, 2., 3.4, 5.2, 4.5, 7.8, 9.7, 1.4, 6.6, 7.2 };
// 	double* ptr = &arr[0];
// 	double avg = 0;

// 	printf("배열: ");
// 	for (int i = 0; i < 10; i++)
// 	{
// 		printf("%.2f  ", arr[i]); // 바로 아래 코드에서 매 루프마다 ptr에 새로운 배열 주소를 입력하게 되면서 *(ptr + i) 로 format 출력 시 더미값이 출력됨
// 		ptr = &arr[i];
// 		avg += *ptr;
// 	}
	
// 	printf("\n평균: %f", avg / 10);
	
// 	return 0;
// }

// 보완 코드 ▼

#include <stdio.h>

int main()
{
	float arr[10] = { .1, 2., 3.4, 5.2, 4.5, 7.8, 9.7, 1.4, 6.6, 7.2 };
	float* ptr = &arr[0];
	float avg = 0;

	printf("배열: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%.2f  ", *(ptr + i));
	}
	for (int i = 0; i < 10; i++) // 평균값 구하기용 배열 원소 총합 process의 루프를 출력문과 따로 지정하여 서로의 값에 관여하지 않게함. 
	{
		ptr = &arr[i];
		avg += *ptr;
	}

	printf("\n평균: %f", avg / 10); // 정상 출력
	
	return 0;
}