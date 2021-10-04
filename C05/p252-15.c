#include <stdio.h>

int main()
{
    // 시급, 일일 근무 시간, 한달 근무 일수, 세금 적용 여부
    double hourly_wage, daily_working_hours, working_days_per_month, tax, total;
    int whether_to_apply_tax;

    printf("시간당 급여 : ");
    scanf_s("%lf", &hourly_wage);

    printf("일일 근무 시간 : ");
    scanf_s("%lf", &daily_working_hours);

    printf("한달 근무 일수 : ");
    scanf_s("%lf", &working_days_per_month);

    printf("세금 적용 여부 0:미적용 1:4대보험공제(8.41%), 2:소득세공제(3.3%) : ");
    scanf_s("%d", &whether_to_apply_tax);

    total = hourly_wage * daily_working_hours * working_days_per_month;

    switch (whether_to_apply_tax)
    {
    case 1:
        tax = total * 8.41 / 100;
        total -= tax;
    case 2:
        tax = total * 3.3 / 100;
        total -= tax;
    default:
        break;
    }

    printf("예상 월급여 : %.0lf원", total);

    return 0;
}