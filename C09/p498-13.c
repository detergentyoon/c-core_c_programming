#include <stdio.h> // EOF
#include <stdlib.h> // srand, rand
#include <time.h> // time
#define SIZE 256

int main()
{
	srand(time(NULL));

	char info[3][SIZE] = { "Live Photo의 스틸 이미지를 변경할 수 있습니다.",
	"스크린 타임에서 iPhone의 하루 사용 시간을 확인할 수 있습니다.",
	"사실 iPhone보다는 SAMSUNG이 더 좋습니다." };

	printf("엔터키를 누를 때마다 사용 팁을 보여줍니다.");

	while (getchar() != EOF) // Ctrl + Z 와 Enter 가 입력될 때까지 1문자씩 입력받는다.
	{
		int rnd = rand() % 3; // 0 ~ 2
		printf("%s\n", info[rnd]);
	}
	return 0;
}