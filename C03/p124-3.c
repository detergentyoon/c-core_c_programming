#include <stdio.h>
int main()
{
	int mass, height;

	printf("mass : ");
	scanf_s("%d", &mass);
	
	printf("height : ");
	scanf_s("%d", &height);

	printf("Positional energy = %f", 9.8 * mass * height);

	return 0;
}