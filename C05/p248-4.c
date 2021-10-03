// 연도를 입력받아 윤년인지 검사
// 4로 나누어 떨어지는 해는 윤년
// 4로 나누어 떨어지는 해 중에서 100으로 나누어 떨어지는 해는 윤년 X
// 100으로 나누어 떨어지는 해 중에서 400으로 나누어 떨어지는 해는 윤년

#include <stdio.h>

int main()
{
    int year;

    printf("연도 : ");
    scanf_s("%d", &year);

    if (year % 4 == 0 && year % 100 != 0 || year % 4 ==0 && year % 100 == 0 && year % 400 == 0)
    {
        printf("윤년");
    }
    else
        printf("윤년 아님");

    return 0;
}