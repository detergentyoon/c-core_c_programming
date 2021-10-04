#include <stdio.h>
#include <math.h>

int main()
{
    unsigned int ui = 1;
    
    for (int i = 0; i <= 31; i++)
    {
        printf("%2d번 비트만 1인 값: %08X %d\n", i, ui << i, ui << i);
    }

    return 0;
}