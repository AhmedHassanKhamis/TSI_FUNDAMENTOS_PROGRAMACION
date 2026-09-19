
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