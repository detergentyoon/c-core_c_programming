// 면적 입력 -> 평 => 제곱미터, 제곱미터 => 평 변환 프로그램
// 평인지 제곱미터인지 구분할 수 있는 문자를 함께 입력

#include <stdio.h>

int main()
{
    float area, convert_area; // 넓이
    char unit; // 단위

    printf("넓이 : ");
    scanf_s("%f %c", &area, &unit);

    // 1m^2 = 0.3025평
    // 1평 = 3.305785m^2

    if (unit == 'm')
    {
        convert_area = area * 0.3025;
        printf("%.2f 제곱미터 == %.2f 평", area, convert_area);
    }
    else if (unit == 'p')
    {
        convert_area = area * 3.305785;
        printf("%.2f 평 == %.2f 제곱미터", area, convert_area);
    }

    return 0;
}