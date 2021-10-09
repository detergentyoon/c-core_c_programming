#include <stdio.h>

int get_quadrant(int x, int y)
{
	if (x > 0 && y > 0)
		return 1;
	else if (x < 0 && y > 0)
		return 2;
	else if (x < 0 && y < 0)
		return 3;
	else if (x > 0 && y < 0)
		return 4;
	
	return 0;
}

int main()
{
	int x, y;

	while (true)
	{
		printf("점의 좌표 (x, y): ");
		scanf_s("%d %d", &x, &y);
		if (get_quadrant(x, y) != 0)
			printf("%d사분면의 점입니다.\n", get_quadrant(x, y));

		if (get_quadrant(x, y) == 0)
			break;
	}
	return 0;
}