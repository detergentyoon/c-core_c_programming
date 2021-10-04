#include <stdio.h>

int main()
{
    int parking_time, parking_fee = 0;

    while (1)
    {
        printf("주차 시간(분) : ");
        scanf_s("%d", &parking_time);

        if (parking_time == 0)
            break;

        if (parking_time > 1440)
        {
            printf("주차 시간은 최대 24시간(1440분)을 넘을 수 없습니다.\n");
            continue; // 다음 if문의 출력을 막음
        }

        if (parking_time <= 30)
        {
            printf("주차 요금 : 2000원\n");
            continue;
        }

        else if (parking_time > 30)
            parking_fee = 2000 + (parking_time - 30) / 10 * 1000;

        if (parking_fee > 25000)
        {
            printf("주차 요금 : 25000원\n");
            continue;
        }

        else
        {
            printf("주차 요금 : %d원\n", parking_fee + 1000);
            continue;
        }
    }
    return 0;
}