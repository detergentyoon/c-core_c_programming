#include <stdio.h>

int find_all_in_array(int* arr, int size, int key)
{
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			arr[count] = i; // 값을 찾을 때 마다 arr[0]부터 현 루프 i값으로 순차적 초기화
			count++;
		}
	}
	return count;
}

int main()
{
	int arr[10] = { 12, 45, 62, 12, 99, 83, 23, 12, 72, 37 };
	int size = 10;
	int key, index;
	
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);

	printf("\n찾을 값: ");
	scanf_s("%d", &key);

	index = find_all_in_array(arr, size, key); // return 값(찾은 항목의 개수)를 index 변수에 할당

	printf("찾은 항목은 모두 %d개입니다.\n", index);
	printf("찾은 항목의 인덱스: ");
	for (int i = 0; i < index; i++)
		printf("%d ", arr[i]); // 사용자 정의 함수 내의 포인터로 인해 arr 주소의 값이 arr[count] 초기화 값으로 저장되어 있음

	return 0;
}