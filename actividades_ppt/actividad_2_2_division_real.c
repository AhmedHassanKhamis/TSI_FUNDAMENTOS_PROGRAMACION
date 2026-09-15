/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num1, num2;
    float resultado;
    printf("Bienvenido al divisioneitor V2!\n");
    printf("Introduce el numero 1:\n");
    scanf("%d", &num1);
    printf("Introduce el numero 2:\n");
    scanf("%d", &num2);
    resultado =(float) num1 / num2;
    printf("El resultado de la division es: %f\n", resultado);

    return 0;
}
