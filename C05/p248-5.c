// 섭씨 화씨 온도 변환 프로그램
// 온도 입력 시 섭씨 화씨 구분 문자를 함께 입력받음

#include <stdio.h>

int main()
{
    float temp;
    float convert_temp = 0;
    char unit;

    printf("온도 : ");
    scanf_s("%f %c", &temp, &unit);

    // 섭씨 온도 = (화씨 온도 - 32) * 5 / 9
    // 화씨 온도 = (섭씨 온도 * 9 / 5) + 32

    if (unit == 'C')
    {
        convert_temp = (temp * 9 / 5) + 32;
        printf("%.2f C ==> %.2f F", temp, convert_temp);
    }
    else if (unit == 'F')
    {
        temp = (temp - 32) * 5 / 9;
        printf("%.2f F ==> %.2f C", temp, convert_temp);
    }

    return 0;
}