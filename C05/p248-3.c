#include <stdio.h>

int main()
{
    int n, a, b, c, d, e, f;

    printf("거스름돈 : ");
    scanf_s("%d", &n);

    n = n - n % 10;

    printf("거스름돈(10원미만 절사) : %d\n", n);

    if (n / 50000 >= 1)
    {
        a = n / 50000;
        n = n - 50000 * a;
        printf("  50000원  %d장\n", a);
    }
    if (n / 10000 >= 1)
    {
        b = n / 10000;
        n = n - 10000 * b;
        printf("  10000원  %d장\n", b);
    }
    if (n / 5000 >= 1)
    {
        c = n / 5000;
        n = n - 5000 * c;
        printf("   5000원  %d장\n", c);
    }
    if (n / 1000 >= 1)
    {
        d = n / 1000;
        n = n - 1000 * d;
        printf("   1000원  %d장\n", d);
    }
    if (n / 100 >= 1)
    {
        e = n / 100;
        n = n - 100 * e;
        printf("    100원  %d장\n", e);
    }
    if (n / 10 >= 1)
    {
        f = n / 10;
        n = n - 10 * f;
        printf("     10원  %d장\n", f);
    }

    return 0;
}