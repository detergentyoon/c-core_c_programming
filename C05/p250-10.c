#include <stdio.h>
#include <math.h>

int main()
{
    int phone_bill, cut_unit;

    printf("금액 : ");
    scanf_s("%d", &phone_bill);

    printf("절사 단위(10의 지수승) : ");
    scanf_s("%d", &cut_unit);

    phone_bill -= phone_bill % (int)pow(10, cut_unit); // % pow의 연산값이 double형이므로 (int)할당을 통해 오류 발생을 방지 

    printf("금액(%d 미만 절사) : %d", (int)pow(10, cut_unit), phone_bill);

    return 0;
}