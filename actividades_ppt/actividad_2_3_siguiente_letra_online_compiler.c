/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char letra; 
    printf("Bienvenido al letraneitor!\n");
    printf("Introduce un caracter:\n");
    scanf("%c", &letra);
    printf("El anterior caracter es: %c", letra - 1 );
    return 0;
}
