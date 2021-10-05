#include <stdio.h>

float get_area_of_square(float len)
{
    return len * len;
}

int main()
{
    float len;

    printf("한 변의 길이 : ");
    scanf_s("%f", &len);

    printf("정사각형의 면적 : %f", get_area_of_square(len));

    return 0;
}