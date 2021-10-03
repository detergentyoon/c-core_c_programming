#include <stdio.h>

int main()
{
    int burger, french_fry, coke, set=0, total;

    // menu
    printf("[햄버거 4000원, 감자튀김 2000원, 콜라 1500원, 세트 6500원]\n");
    
    printf("햄버거 개수 : ");
    scanf_s("%d", &burger);
    
    printf("감자튀김 개수 : ");
    scanf_s("%d", &french_fry);

    printf("콜라 개수 : ");
    scanf_s("%d", &coke);
    
    while (true)
    {
        if (burger >= 1 && french_fry >= 1 && coke >= 1)
        {
            burger -= 1;
            french_fry -= 1;
            coke -= 1;
            set += 1;
        }
        else
            break;
    }

    total = (set * 6500) + (burger * 4000) + (french_fry * 2000) + (coke * 1500);

    printf("\n상품명       단가   수량   금액\n");

    if (set >= 1)
        printf("세트         6500%6d%8d\n", set, set * 6500);

    if (burger >= 1)
        printf("햄버거       4000%6d%8d\n", burger, burger * 4000);

    if (french_fry >= 1)
        printf("감자튀김     2000%6d%8d\n", french_fry, french_fry * 2000);

    if (coke >= 1)
        printf("콜라         1500%6d%8d\n", coke, coke * 1500);
    
    printf("-------------------------------\n");
    printf("합계%27d", total);
                                         
    
    return 0;
}