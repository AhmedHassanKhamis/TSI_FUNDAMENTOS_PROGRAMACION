#include <stdio.h>

int main()
{
    char caracter;
    printf("Bienvenido al tranformador de minuscula a mayuscula!\n");
    printf("Introduce un caracter en minuscula:\n");
    scanf("%c", &caracter);
    printf("Tu caracter en mayuscula es %c", caracter - 32 );
    return 0;
}
