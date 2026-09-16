#include <stdio.h>

int main()
{
    int num1,num2;
    printf("programa que lee dos numeros introducidos por teclado y dice cual es el mayor y menor\n");
    printf("Introduce el primer numero:\n");
    scanf("%d", &num1);
    printf("Introduce el segundo numero:\n");
    scanf("%d", &num2);
    
    if (num1 > num2)
    {
        printf("El mayor es %d, el menor es %d", num1, num2);
    }else{
        printf("El mayor es %d, el menor es %d", num2, num1);
    }

    return 0;
}
