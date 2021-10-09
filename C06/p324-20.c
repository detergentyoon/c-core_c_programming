#include <stdio.h>

double electric_charge(double kWh)
{
	double base_rate; // 기본 요금(원/호)
	double power_rate; // 전력량 요금(원/kWh)
	double total = 0;


	if (kWh <= 200 && kWh >= 0)
	{
		base_rate = 910;
		power_rate = 93.3;

		total = base_rate + power_rate * kWh;
	}

	else if (kWh > 200 && kWh <= 400)
	{
		base_rate = 1600;
		power_rate = 187.9;

		total = base_rate + power_rate * (kWh - 200) + 93.3 * 200;
	}

	else if (kWh > 400)
	{
		base_rate = 7300;
		power_rate = 280.6;

		total = base_rate + power_rate * (kWh - 400) + 187.9 * 200 + 93.3 * 200;
	}

	return total;
}

int main()
{
	double kWh;

	while (true)
	{
		printf("월 사용량 (kWh): ");
		scanf_s("%lf", &kWh);

		if (kWh < 0)
			break;

		printf("전기 요금: %2.0lf\n", electric_charge(kWh));
	}

	return 0;
}