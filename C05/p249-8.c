#include <stdio.h>

int main()
{
    int a, b;
    int value = 0;
    char op;

    printf("비트 연산식 : ");
    scanf_s("%i %c %i", &a, &op, 20, &b); // %i는 8, 10, 16진수를 범용 취급, 인수에 공간 20을 추가해야 정상 동작 
    
    if (op == '&') // AND
        value = a & b;

    else if (op == '|') // OR
        value = a | b;

    else if (op == '^') // XOR
        value = a ^ b;

    else
        printf("Error");

    printf("%X %c %X = %X", a, op, b, value);

    return 0;
}