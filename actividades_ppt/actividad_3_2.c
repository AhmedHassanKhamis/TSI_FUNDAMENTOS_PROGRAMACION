#include <stdio.h>

int main()
{
    printf("cual de los tres es mayor?\n");
    int num1,num2,num3,max;
    printf("Introduce el primer numero:\n");
    scanf("%d", &num1);
    printf("Introduce el segundo numero:\n");
    scanf("%d", &num2);
    printf("Introduce el tercero numero:\n");
    scanf("%d", &num3);
    if(num1 > num2)
        max = num1;
    if(num3 > max)
        max = num3;
    if(num2 > max)
        max = num2;
    printf("El numero mas grande es %d", max);
    return 0;
}
