#include <stdio.h>

int main()
{
    float kWh, base_rate, power_rate;

    printf("월 사용량(kWh) : ");
    scanf_s("%f", &kWh);

    // 누진제 단계별 요금 process
    if (kWh <= 200)
    {
        base_rate = 910;
        power_rate = 93.3 * kWh;
    }
    
    if (201 <= kWh <= 400)
    {
        base_rate = 1600;
        power_rate = 187.9 * (kWh - 200) + (93.3 * 200);
    }

    if (kWh > 400)
    {
        base_rate = 7300;
        power_rate = 280.6 * (kWh - 400) + (187.9 * 200) + (93.3 * 200);
    }
    
    float total = base_rate + power_rate;

    printf("전기 요금 합계: %6.0f원\n", total);
    printf("  - 기본  요금: %6.0f원\n", base_rate);
    printf("  - 전력량요금: %6.0f원\n", power_rate);

    return 0;
}