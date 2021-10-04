#include <stdio.h>

int main()
{
    for (int i = 32; i <= 126; i++)
    {
        printf("%c ", i);

        if (i % 24 == 7)
            printf("\n");
    }

    return 0;
}