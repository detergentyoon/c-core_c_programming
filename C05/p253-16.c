#include <stdio.h>

int main()
{
    int a, b;

    printf("양의 정수 : ");
    scanf_s("%d", &a);

    printf("배수의 개수 : ");
    scanf_s("%d", &b);

    for (int i = 1; i <= b; i++)
        printf("%d ", a * i);

    return 0;
}