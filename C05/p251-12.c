#include <stdio.h>

int main()
{
    float a, b, c; // 원금, 연이율, 이자

    printf("원금 : ");
    scanf_s("%f", &a);

    printf("연이율(%) : ");
    scanf_s("%f", &b);

    // n년째 원리합계 : 원금 * (1 + 연이율) = 다음해의 원금
    float total = a * (1 + b / 100);
    c = a * b / 100;

    for (int i = 1; i <= 10; i++)
    {
        printf("%2d년째 이자: %.2f, 원리합계: %.2f\n", i, c, total);
        
        c = total * b / 100;
        total *= (1 + b / 100);
    }

    return 0;
}