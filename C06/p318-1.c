#include <stdio.h>

int get_perimeter(int a, int b)
{
    printf("가로 : ");
    scanf_s("%d", &a);

    printf("세로 : ");
    scanf_s("%d", &b);

    printf("직사각형의 둘레 : %d", (a + b) * 2);

    return (a + b) * 2;
}

int main()
{
    get_perimeter(10, 20);

    return 0;
}