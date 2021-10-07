#include <stdio.h>

float calculator(float a, char op, float b)
{
	if (op == '+')
		return a + b;
	else if (op == '-')
		return a - b;
	else if (op == '*')
		return a * b;
	else if (op == '/')
		return a / b;
	else
		printf("Error\n");
}

int main()
{
	float a, b;
	char op;
	for (;;)
	{
		printf("수식 (0 0 0 입력 시 종료) : ");
		scanf_s("%f %c %f", &a, &op, 20, &b);

		if (op != '+' && op != '-' && op != '*' && op != '/')
		{
			if (a == 0 && op == '0' && b == 0) // 0 0 0 = 프로그램 종료
				break;
			calculator(a, op, b); // Error 문구 출력단
		}
		else
			printf("%f\n", calculator(a, op, b)); // 올바른 연산 결과 출력단
	}

	return 0;
}