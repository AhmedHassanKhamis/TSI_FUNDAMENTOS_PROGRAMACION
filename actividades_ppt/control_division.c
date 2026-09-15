#include <stdio.h>

int main()
{
    float num1, num2;
    printf("Divisor(NO METAS 0 )");
    printf("Introduce el dividendo:\n");
    scanf("%d", &num1);
    printf("Introduce el divisor:\n");
    scanf("%d", &num2);
    if(num2==0)
        printf("TE DIJE NO METAS 0");
    else
        printf("Tu resultado es %f", num1 / num2);
    return 0;
}
