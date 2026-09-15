/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num1, num2, resultado;
    printf("Bienvenido al divisioneitor!\n");
    printf("Introduce el numero 1:\n");
    scanf("%d", &num1);
    printf("Introduce el numero 2:\n");
    scanf("%d", &num2);
    resultado = num1 / num2;
    printf("El resultado de la division es: %d\n", resultado);

    return 0;
}
