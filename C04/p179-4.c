// 용매(solvent)의 질량, 용질(solute)의 질량 정수 입력 => 용액의 % 농도
// 농도(%) = 용질의 질량 / (용매의 질량 + 용질의 질량) * 100

#include <stdio.h>

int main()
{
	int solvent, solute;
	float concentration;

	printf("용매(g) : ");
	scanf_s("%d", &solvent);

	printf("용질(g) : ");
	scanf_s("%d", &solute);

	concentration = solute * 100. / (solvent + solute);
	
	printf("농도 : %.2f %%", concentration);

	return 0;
}s