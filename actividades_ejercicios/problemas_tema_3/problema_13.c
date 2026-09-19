#include <stdio.h>

int main()
{
    char caracter;
    printf("Introduce un caracter en minuscula y te lo transformo a mayuscula\n");
    do
    {
        caracter = 0;
        printf("Introduce un caracter en minuscula:\n");
        scanf(" %c", &caracter);
    } while (97 > caracter || caracter > 122);
    printf("Tu caracter en mayuscula es: %c\n", caracter - 32);
    return 0;
}
