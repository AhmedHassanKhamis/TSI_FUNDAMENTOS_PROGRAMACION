#include <stdio.h>

int main()
{
    printf("cual de los dos es mayor?\n");
    int num1,num2,max;
    printf("Introduce el primer numero:\n");
    scanf("%d", &num1);
    printf("Introduce el segundo numero:\n");
    scanf("%d", &num2);
    if(num1 > num2)
        max = num1;
    else if (num1 == num2)
    {
        printf("Ambos numeros son iguales!");
        return 0;
    }
    else
        max = num2;
    printf("El numero mas grande es %d", max);
    return 0;
}
