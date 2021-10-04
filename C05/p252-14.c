#include <stdio.h>

int main()
{
    float m, km, average_speed;
    
    printf("구간 단속 소요 시간 (분) : ");
    scanf_s("%f", &m);

    printf("구간 단속 주행 거리 (km) : ");
    scanf_s("%f", &km);

    average_speed = km / m * 60;

    printf("평균 속력은 %.1f km/h입니다.", average_speed);
    
    if (average_speed >= 100)
        printf(" 구간 단속 과속입니다.");

    return 0;
}